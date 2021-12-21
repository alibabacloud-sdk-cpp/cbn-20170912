// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cbn_20170912.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Cbn20170912;

Alibabacloud_Cbn20170912::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cbn"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cbn20170912::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ActiveFlowLogResponse Alibabacloud_Cbn20170912::Client::activeFlowLogWithOptions(shared_ptr<ActiveFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("FlowLogId", *request->flowLogId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActiveFlowLog"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActiveFlowLogResponse(callApi(params, req, runtime));
}

ActiveFlowLogResponse Alibabacloud_Cbn20170912::Client::activeFlowLog(shared_ptr<ActiveFlowLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activeFlowLogWithOptions(request, runtime);
}

AddTraficMatchRuleToTrafficMarkingPolicyResponse Alibabacloud_Cbn20170912::Client::addTraficMatchRuleToTrafficMarkingPolicyWithOptions(shared_ptr<AddTraficMatchRuleToTrafficMarkingPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TrafficMarkingPolicyId", *request->trafficMarkingPolicyId));
  query->insert(pair<string, vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules>>("TrafficMatchRules", *request->trafficMatchRules));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTraficMatchRuleToTrafficMarkingPolicy"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTraficMatchRuleToTrafficMarkingPolicyResponse(callApi(params, req, runtime));
}

AddTraficMatchRuleToTrafficMarkingPolicyResponse Alibabacloud_Cbn20170912::Client::addTraficMatchRuleToTrafficMarkingPolicy(shared_ptr<AddTraficMatchRuleToTrafficMarkingPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTraficMatchRuleToTrafficMarkingPolicyWithOptions(request, runtime);
}

AssociateCenBandwidthPackageResponse Alibabacloud_Cbn20170912::Client::associateCenBandwidthPackageWithOptions(shared_ptr<AssociateCenBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenBandwidthPackageId", *request->cenBandwidthPackageId));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateCenBandwidthPackage"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateCenBandwidthPackageResponse(callApi(params, req, runtime));
}

AssociateCenBandwidthPackageResponse Alibabacloud_Cbn20170912::Client::associateCenBandwidthPackage(shared_ptr<AssociateCenBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateCenBandwidthPackageWithOptions(request, runtime);
}

AssociateTransitRouterAttachmentWithRouteTableResponse Alibabacloud_Cbn20170912::Client::associateTransitRouterAttachmentWithRouteTableWithOptions(shared_ptr<AssociateTransitRouterAttachmentWithRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateTransitRouterAttachmentWithRouteTable"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateTransitRouterAttachmentWithRouteTableResponse(callApi(params, req, runtime));
}

AssociateTransitRouterAttachmentWithRouteTableResponse Alibabacloud_Cbn20170912::Client::associateTransitRouterAttachmentWithRouteTable(shared_ptr<AssociateTransitRouterAttachmentWithRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateTransitRouterAttachmentWithRouteTableWithOptions(request, runtime);
}

AttachCenChildInstanceResponse Alibabacloud_Cbn20170912::Client::attachCenChildInstanceWithOptions(shared_ptr<AttachCenChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, long>("ChildInstanceOwnerId", *request->childInstanceOwnerId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachCenChildInstance"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachCenChildInstanceResponse(callApi(params, req, runtime));
}

AttachCenChildInstanceResponse Alibabacloud_Cbn20170912::Client::attachCenChildInstance(shared_ptr<AttachCenChildInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachCenChildInstanceWithOptions(request, runtime);
}

CheckTransitRouterServiceResponse Alibabacloud_Cbn20170912::Client::checkTransitRouterServiceWithOptions(shared_ptr<CheckTransitRouterServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckTransitRouterService"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckTransitRouterServiceResponse(callApi(params, req, runtime));
}

CheckTransitRouterServiceResponse Alibabacloud_Cbn20170912::Client::checkTransitRouterService(shared_ptr<CheckTransitRouterServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkTransitRouterServiceWithOptions(request, runtime);
}

CreateCenResponse Alibabacloud_Cbn20170912::Client::createCenWithOptions(shared_ptr<CreateCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProtectionLevel", *request->protectionLevel));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCen"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCenResponse(callApi(params, req, runtime));
}

CreateCenResponse Alibabacloud_Cbn20170912::Client::createCen(shared_ptr<CreateCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCenWithOptions(request, runtime);
}

CreateCenBandwidthPackageResponse Alibabacloud_Cbn20170912::Client::createCenBandwidthPackageWithOptions(shared_ptr<CreateCenBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  query->insert(pair<string, long>("AutoRenewDuration", *request->autoRenewDuration));
  query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("BandwidthPackageChargeType", *request->bandwidthPackageChargeType));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GeographicRegionAId", *request->geographicRegionAId));
  query->insert(pair<string, string>("GeographicRegionBId", *request->geographicRegionBId));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("Period", *request->period));
  query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCenBandwidthPackage"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCenBandwidthPackageResponse(callApi(params, req, runtime));
}

CreateCenBandwidthPackageResponse Alibabacloud_Cbn20170912::Client::createCenBandwidthPackage(shared_ptr<CreateCenBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCenBandwidthPackageWithOptions(request, runtime);
}

CreateCenChildInstanceRouteEntryToAttachmentResponse Alibabacloud_Cbn20170912::Client::createCenChildInstanceRouteEntryToAttachmentWithOptions(shared_ptr<CreateCenChildInstanceRouteEntryToAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RouteTableId", *request->routeTableId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCenChildInstanceRouteEntryToAttachment"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCenChildInstanceRouteEntryToAttachmentResponse(callApi(params, req, runtime));
}

CreateCenChildInstanceRouteEntryToAttachmentResponse Alibabacloud_Cbn20170912::Client::createCenChildInstanceRouteEntryToAttachment(shared_ptr<CreateCenChildInstanceRouteEntryToAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCenChildInstanceRouteEntryToAttachmentWithOptions(request, runtime);
}

CreateCenChildInstanceRouteEntryToCenResponse Alibabacloud_Cbn20170912::Client::createCenChildInstanceRouteEntryToCenWithOptions(shared_ptr<CreateCenChildInstanceRouteEntryToCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, long>("ChildInstanceAliUid", *request->childInstanceAliUid));
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RouteTableId", *request->routeTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCenChildInstanceRouteEntryToCen"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCenChildInstanceRouteEntryToCenResponse(callApi(params, req, runtime));
}

CreateCenChildInstanceRouteEntryToCenResponse Alibabacloud_Cbn20170912::Client::createCenChildInstanceRouteEntryToCen(shared_ptr<CreateCenChildInstanceRouteEntryToCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCenChildInstanceRouteEntryToCenWithOptions(request, runtime);
}

CreateCenInterRegionTrafficQosPolicyResponse Alibabacloud_Cbn20170912::Client::createCenInterRegionTrafficQosPolicyWithOptions(shared_ptr<CreateCenInterRegionTrafficQosPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TrafficQosPolicyDescription", *request->trafficQosPolicyDescription));
  query->insert(pair<string, string>("TrafficQosPolicyName", *request->trafficQosPolicyName));
  query->insert(pair<string, vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues>>("TrafficQosQueues", *request->trafficQosQueues));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCenInterRegionTrafficQosPolicy"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCenInterRegionTrafficQosPolicyResponse(callApi(params, req, runtime));
}

CreateCenInterRegionTrafficQosPolicyResponse Alibabacloud_Cbn20170912::Client::createCenInterRegionTrafficQosPolicy(shared_ptr<CreateCenInterRegionTrafficQosPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCenInterRegionTrafficQosPolicyWithOptions(request, runtime);
}

CreateCenRouteMapResponse Alibabacloud_Cbn20170912::Client::createCenRouteMapWithOptions(shared_ptr<CreateCenRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AsPathMatchMode", *request->asPathMatchMode));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("CenRegionId", *request->cenRegionId));
  query->insert(pair<string, string>("CidrMatchMode", *request->cidrMatchMode));
  query->insert(pair<string, string>("CommunityMatchMode", *request->communityMatchMode));
  query->insert(pair<string, string>("CommunityOperateMode", *request->communityOperateMode));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, vector<string>>("DestinationChildInstanceTypes", *request->destinationChildInstanceTypes));
  query->insert(pair<string, vector<string>>("DestinationCidrBlocks", *request->destinationCidrBlocks));
  query->insert(pair<string, vector<string>>("DestinationInstanceIds", *request->destinationInstanceIds));
  query->insert(pair<string, bool>("DestinationInstanceIdsReverseMatch", *request->destinationInstanceIdsReverseMatch));
  query->insert(pair<string, vector<string>>("DestinationRouteTableIds", *request->destinationRouteTableIds));
  query->insert(pair<string, string>("MapResult", *request->mapResult));
  query->insert(pair<string, vector<long>>("MatchAsns", *request->matchAsns));
  query->insert(pair<string, vector<string>>("MatchCommunitySet", *request->matchCommunitySet));
  query->insert(pair<string, long>("NextPriority", *request->nextPriority));
  query->insert(pair<string, vector<string>>("OperateCommunitySet", *request->operateCommunitySet));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("Preference", *request->preference));
  query->insert(pair<string, vector<long>>("PrependAsPath", *request->prependAsPath));
  query->insert(pair<string, long>("Priority", *request->priority));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, vector<string>>("RouteTypes", *request->routeTypes));
  query->insert(pair<string, vector<string>>("SourceChildInstanceTypes", *request->sourceChildInstanceTypes));
  query->insert(pair<string, vector<string>>("SourceInstanceIds", *request->sourceInstanceIds));
  query->insert(pair<string, bool>("SourceInstanceIdsReverseMatch", *request->sourceInstanceIdsReverseMatch));
  query->insert(pair<string, vector<string>>("SourceRegionIds", *request->sourceRegionIds));
  query->insert(pair<string, vector<string>>("SourceRouteTableIds", *request->sourceRouteTableIds));
  query->insert(pair<string, string>("TransmitDirection", *request->transmitDirection));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCenRouteMap"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCenRouteMapResponse(callApi(params, req, runtime));
}

CreateCenRouteMapResponse Alibabacloud_Cbn20170912::Client::createCenRouteMap(shared_ptr<CreateCenRouteMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCenRouteMapWithOptions(request, runtime);
}

CreateFlowlogResponse Alibabacloud_Cbn20170912::Client::createFlowlogWithOptions(shared_ptr<CreateFlowlogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("FlowLogName", *request->flowLogName));
  query->insert(pair<string, string>("LogStoreName", *request->logStoreName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlowlog"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFlowlogResponse(callApi(params, req, runtime));
}

CreateFlowlogResponse Alibabacloud_Cbn20170912::Client::createFlowlog(shared_ptr<CreateFlowlogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowlogWithOptions(request, runtime);
}

CreateTrafficMarkingPolicyResponse Alibabacloud_Cbn20170912::Client::createTrafficMarkingPolicyWithOptions(shared_ptr<CreateTrafficMarkingPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, long>("MarkingDscp", *request->markingDscp));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("Priority", *request->priority));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TrafficMarkingPolicyDescription", *request->trafficMarkingPolicyDescription));
  query->insert(pair<string, string>("TrafficMarkingPolicyName", *request->trafficMarkingPolicyName));
  query->insert(pair<string, vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules>>("TrafficMatchRules", *request->trafficMatchRules));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrafficMarkingPolicy"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrafficMarkingPolicyResponse(callApi(params, req, runtime));
}

CreateTrafficMarkingPolicyResponse Alibabacloud_Cbn20170912::Client::createTrafficMarkingPolicy(shared_ptr<CreateTrafficMarkingPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrafficMarkingPolicyWithOptions(request, runtime);
}

CreateTransitRouterResponse Alibabacloud_Cbn20170912::Client::createTransitRouterWithOptions(shared_ptr<CreateTransitRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterDescription", *request->transitRouterDescription));
  query->insert(pair<string, string>("TransitRouterName", *request->transitRouterName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTransitRouter"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTransitRouterResponse(callApi(params, req, runtime));
}

CreateTransitRouterResponse Alibabacloud_Cbn20170912::Client::createTransitRouter(shared_ptr<CreateTransitRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTransitRouterWithOptions(request, runtime);
}

CreateTransitRouterPeerAttachmentResponse Alibabacloud_Cbn20170912::Client::createTransitRouterPeerAttachmentWithOptions(shared_ptr<CreateTransitRouterPeerAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPublishRouteEnabled", *request->autoPublishRouteEnabled));
  query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("BandwidthType", *request->bandwidthType));
  query->insert(pair<string, string>("CenBandwidthPackageId", *request->cenBandwidthPackageId));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PeerTransitRouterId", *request->peerTransitRouterId));
  query->insert(pair<string, string>("PeerTransitRouterRegionId", *request->peerTransitRouterRegionId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentDescription", *request->transitRouterAttachmentDescription));
  query->insert(pair<string, string>("TransitRouterAttachmentName", *request->transitRouterAttachmentName));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTransitRouterPeerAttachment"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTransitRouterPeerAttachmentResponse(callApi(params, req, runtime));
}

CreateTransitRouterPeerAttachmentResponse Alibabacloud_Cbn20170912::Client::createTransitRouterPeerAttachment(shared_ptr<CreateTransitRouterPeerAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTransitRouterPeerAttachmentWithOptions(request, runtime);
}

CreateTransitRouterRouteEntryResponse Alibabacloud_Cbn20170912::Client::createTransitRouterRouteEntryWithOptions(shared_ptr<CreateTransitRouterRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterRouteEntryDescription", *request->transitRouterRouteEntryDescription));
  query->insert(pair<string, string>("TransitRouterRouteEntryDestinationCidrBlock", *request->transitRouterRouteEntryDestinationCidrBlock));
  query->insert(pair<string, string>("TransitRouterRouteEntryName", *request->transitRouterRouteEntryName));
  query->insert(pair<string, string>("TransitRouterRouteEntryNextHopId", *request->transitRouterRouteEntryNextHopId));
  query->insert(pair<string, string>("TransitRouterRouteEntryNextHopType", *request->transitRouterRouteEntryNextHopType));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTransitRouterRouteEntry"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTransitRouterRouteEntryResponse(callApi(params, req, runtime));
}

CreateTransitRouterRouteEntryResponse Alibabacloud_Cbn20170912::Client::createTransitRouterRouteEntry(shared_ptr<CreateTransitRouterRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTransitRouterRouteEntryWithOptions(request, runtime);
}

CreateTransitRouterRouteTableResponse Alibabacloud_Cbn20170912::Client::createTransitRouterRouteTableWithOptions(shared_ptr<CreateTransitRouterRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  query->insert(pair<string, string>("TransitRouterRouteTableDescription", *request->transitRouterRouteTableDescription));
  query->insert(pair<string, string>("TransitRouterRouteTableName", *request->transitRouterRouteTableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTransitRouterRouteTable"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTransitRouterRouteTableResponse(callApi(params, req, runtime));
}

CreateTransitRouterRouteTableResponse Alibabacloud_Cbn20170912::Client::createTransitRouterRouteTable(shared_ptr<CreateTransitRouterRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTransitRouterRouteTableWithOptions(request, runtime);
}

CreateTransitRouterVbrAttachmentResponse Alibabacloud_Cbn20170912::Client::createTransitRouterVbrAttachmentWithOptions(shared_ptr<CreateTransitRouterVbrAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPublishRouteEnabled", *request->autoPublishRouteEnabled));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentDescription", *request->transitRouterAttachmentDescription));
  query->insert(pair<string, string>("TransitRouterAttachmentName", *request->transitRouterAttachmentName));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  query->insert(pair<string, string>("VbrId", *request->vbrId));
  query->insert(pair<string, long>("VbrOwnerId", *request->vbrOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTransitRouterVbrAttachment"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTransitRouterVbrAttachmentResponse(callApi(params, req, runtime));
}

CreateTransitRouterVbrAttachmentResponse Alibabacloud_Cbn20170912::Client::createTransitRouterVbrAttachment(shared_ptr<CreateTransitRouterVbrAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTransitRouterVbrAttachmentWithOptions(request, runtime);
}

CreateTransitRouterVpcAttachmentResponse Alibabacloud_Cbn20170912::Client::createTransitRouterVpcAttachmentWithOptions(shared_ptr<CreateTransitRouterVpcAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ChargeType", *request->chargeType));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentDescription", *request->transitRouterAttachmentDescription));
  query->insert(pair<string, string>("TransitRouterAttachmentName", *request->transitRouterAttachmentName));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  query->insert(pair<string, long>("VpcOwnerId", *request->vpcOwnerId));
  query->insert(pair<string, vector<CreateTransitRouterVpcAttachmentRequestZoneMappings>>("ZoneMappings", *request->zoneMappings));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTransitRouterVpcAttachment"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTransitRouterVpcAttachmentResponse(callApi(params, req, runtime));
}

CreateTransitRouterVpcAttachmentResponse Alibabacloud_Cbn20170912::Client::createTransitRouterVpcAttachment(shared_ptr<CreateTransitRouterVpcAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTransitRouterVpcAttachmentWithOptions(request, runtime);
}

DeactiveFlowLogResponse Alibabacloud_Cbn20170912::Client::deactiveFlowLogWithOptions(shared_ptr<DeactiveFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("FlowLogId", *request->flowLogId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeactiveFlowLog"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeactiveFlowLogResponse(callApi(params, req, runtime));
}

DeactiveFlowLogResponse Alibabacloud_Cbn20170912::Client::deactiveFlowLog(shared_ptr<DeactiveFlowLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deactiveFlowLogWithOptions(request, runtime);
}

DeleteCenResponse Alibabacloud_Cbn20170912::Client::deleteCenWithOptions(shared_ptr<DeleteCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCen"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCenResponse(callApi(params, req, runtime));
}

DeleteCenResponse Alibabacloud_Cbn20170912::Client::deleteCen(shared_ptr<DeleteCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCenWithOptions(request, runtime);
}

DeleteCenBandwidthPackageResponse Alibabacloud_Cbn20170912::Client::deleteCenBandwidthPackageWithOptions(shared_ptr<DeleteCenBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenBandwidthPackageId", *request->cenBandwidthPackageId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCenBandwidthPackage"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCenBandwidthPackageResponse(callApi(params, req, runtime));
}

DeleteCenBandwidthPackageResponse Alibabacloud_Cbn20170912::Client::deleteCenBandwidthPackage(shared_ptr<DeleteCenBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCenBandwidthPackageWithOptions(request, runtime);
}

DeleteCenChildInstanceRouteEntryToAttachmentResponse Alibabacloud_Cbn20170912::Client::deleteCenChildInstanceRouteEntryToAttachmentWithOptions(shared_ptr<DeleteCenChildInstanceRouteEntryToAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RouteTableId", *request->routeTableId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCenChildInstanceRouteEntryToAttachment"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCenChildInstanceRouteEntryToAttachmentResponse(callApi(params, req, runtime));
}

DeleteCenChildInstanceRouteEntryToAttachmentResponse Alibabacloud_Cbn20170912::Client::deleteCenChildInstanceRouteEntryToAttachment(shared_ptr<DeleteCenChildInstanceRouteEntryToAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCenChildInstanceRouteEntryToAttachmentWithOptions(request, runtime);
}

DeleteCenChildInstanceRouteEntryToCenResponse Alibabacloud_Cbn20170912::Client::deleteCenChildInstanceRouteEntryToCenWithOptions(shared_ptr<DeleteCenChildInstanceRouteEntryToCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, long>("ChildInstanceAliUid", *request->childInstanceAliUid));
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RouteTableId", *request->routeTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCenChildInstanceRouteEntryToCen"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCenChildInstanceRouteEntryToCenResponse(callApi(params, req, runtime));
}

DeleteCenChildInstanceRouteEntryToCenResponse Alibabacloud_Cbn20170912::Client::deleteCenChildInstanceRouteEntryToCen(shared_ptr<DeleteCenChildInstanceRouteEntryToCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCenChildInstanceRouteEntryToCenWithOptions(request, runtime);
}

DeleteCenInterRegionTrafficQosPolicyResponse Alibabacloud_Cbn20170912::Client::deleteCenInterRegionTrafficQosPolicyWithOptions(shared_ptr<DeleteCenInterRegionTrafficQosPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TrafficQosPolicyId", *request->trafficQosPolicyId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCenInterRegionTrafficQosPolicy"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCenInterRegionTrafficQosPolicyResponse(callApi(params, req, runtime));
}

DeleteCenInterRegionTrafficQosPolicyResponse Alibabacloud_Cbn20170912::Client::deleteCenInterRegionTrafficQosPolicy(shared_ptr<DeleteCenInterRegionTrafficQosPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCenInterRegionTrafficQosPolicyWithOptions(request, runtime);
}

DeleteCenInterRegionTrafficQosQueueResponse Alibabacloud_Cbn20170912::Client::deleteCenInterRegionTrafficQosQueueWithOptions(shared_ptr<DeleteCenInterRegionTrafficQosQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("QosQueueId", *request->qosQueueId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCenInterRegionTrafficQosQueue"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCenInterRegionTrafficQosQueueResponse(callApi(params, req, runtime));
}

DeleteCenInterRegionTrafficQosQueueResponse Alibabacloud_Cbn20170912::Client::deleteCenInterRegionTrafficQosQueue(shared_ptr<DeleteCenInterRegionTrafficQosQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCenInterRegionTrafficQosQueueWithOptions(request, runtime);
}

DeleteCenRouteMapResponse Alibabacloud_Cbn20170912::Client::deleteCenRouteMapWithOptions(shared_ptr<DeleteCenRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("CenRegionId", *request->cenRegionId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RouteMapId", *request->routeMapId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCenRouteMap"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCenRouteMapResponse(callApi(params, req, runtime));
}

DeleteCenRouteMapResponse Alibabacloud_Cbn20170912::Client::deleteCenRouteMap(shared_ptr<DeleteCenRouteMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCenRouteMapWithOptions(request, runtime);
}

DeleteFlowlogResponse Alibabacloud_Cbn20170912::Client::deleteFlowlogWithOptions(shared_ptr<DeleteFlowlogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("FlowLogId", *request->flowLogId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlowlog"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFlowlogResponse(callApi(params, req, runtime));
}

DeleteFlowlogResponse Alibabacloud_Cbn20170912::Client::deleteFlowlog(shared_ptr<DeleteFlowlogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowlogWithOptions(request, runtime);
}

DeleteRouteServiceInCenResponse Alibabacloud_Cbn20170912::Client::deleteRouteServiceInCenWithOptions(shared_ptr<DeleteRouteServiceInCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccessRegionId", *request->accessRegionId));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("Host", *request->host));
  query->insert(pair<string, string>("HostRegionId", *request->hostRegionId));
  query->insert(pair<string, string>("HostVpcId", *request->hostVpcId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRouteServiceInCen"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRouteServiceInCenResponse(callApi(params, req, runtime));
}

DeleteRouteServiceInCenResponse Alibabacloud_Cbn20170912::Client::deleteRouteServiceInCen(shared_ptr<DeleteRouteServiceInCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRouteServiceInCenWithOptions(request, runtime);
}

DeleteTrafficMarkingPolicyResponse Alibabacloud_Cbn20170912::Client::deleteTrafficMarkingPolicyWithOptions(shared_ptr<DeleteTrafficMarkingPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TrafficMarkingPolicyId", *request->trafficMarkingPolicyId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrafficMarkingPolicy"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrafficMarkingPolicyResponse(callApi(params, req, runtime));
}

DeleteTrafficMarkingPolicyResponse Alibabacloud_Cbn20170912::Client::deleteTrafficMarkingPolicy(shared_ptr<DeleteTrafficMarkingPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrafficMarkingPolicyWithOptions(request, runtime);
}

DeleteTransitRouterPeerAttachmentResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterPeerAttachmentWithOptions(shared_ptr<DeleteTransitRouterPeerAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTransitRouterPeerAttachment"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTransitRouterPeerAttachmentResponse(callApi(params, req, runtime));
}

DeleteTransitRouterPeerAttachmentResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterPeerAttachment(shared_ptr<DeleteTransitRouterPeerAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTransitRouterPeerAttachmentWithOptions(request, runtime);
}

DeleteTransitRouterRouteEntryResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterRouteEntryWithOptions(shared_ptr<DeleteTransitRouterRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterRouteEntryDestinationCidrBlock", *request->transitRouterRouteEntryDestinationCidrBlock));
  query->insert(pair<string, string>("TransitRouterRouteEntryId", *request->transitRouterRouteEntryId));
  query->insert(pair<string, string>("TransitRouterRouteEntryNextHopId", *request->transitRouterRouteEntryNextHopId));
  query->insert(pair<string, string>("TransitRouterRouteEntryNextHopType", *request->transitRouterRouteEntryNextHopType));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTransitRouterRouteEntry"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTransitRouterRouteEntryResponse(callApi(params, req, runtime));
}

DeleteTransitRouterRouteEntryResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterRouteEntry(shared_ptr<DeleteTransitRouterRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTransitRouterRouteEntryWithOptions(request, runtime);
}

DeleteTransitRouterRouteTableResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterRouteTableWithOptions(shared_ptr<DeleteTransitRouterRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTransitRouterRouteTable"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTransitRouterRouteTableResponse(callApi(params, req, runtime));
}

DeleteTransitRouterRouteTableResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterRouteTable(shared_ptr<DeleteTransitRouterRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTransitRouterRouteTableWithOptions(request, runtime);
}

DeleteTransitRouterVbrAttachmentResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterVbrAttachmentWithOptions(shared_ptr<DeleteTransitRouterVbrAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTransitRouterVbrAttachment"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTransitRouterVbrAttachmentResponse(callApi(params, req, runtime));
}

DeleteTransitRouterVbrAttachmentResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterVbrAttachment(shared_ptr<DeleteTransitRouterVbrAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTransitRouterVbrAttachmentWithOptions(request, runtime);
}

DeleteTransitRouterVpcAttachmentResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterVpcAttachmentWithOptions(shared_ptr<DeleteTransitRouterVpcAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTransitRouterVpcAttachment"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTransitRouterVpcAttachmentResponse(callApi(params, req, runtime));
}

DeleteTransitRouterVpcAttachmentResponse Alibabacloud_Cbn20170912::Client::deleteTransitRouterVpcAttachment(shared_ptr<DeleteTransitRouterVpcAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTransitRouterVpcAttachmentWithOptions(request, runtime);
}

DescribeCenAttachedChildInstanceAttributeResponse Alibabacloud_Cbn20170912::Client::describeCenAttachedChildInstanceAttributeWithOptions(shared_ptr<DescribeCenAttachedChildInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenAttachedChildInstanceAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenAttachedChildInstanceAttributeResponse(callApi(params, req, runtime));
}

DescribeCenAttachedChildInstanceAttributeResponse Alibabacloud_Cbn20170912::Client::describeCenAttachedChildInstanceAttribute(shared_ptr<DescribeCenAttachedChildInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenAttachedChildInstanceAttributeWithOptions(request, runtime);
}

DescribeCenAttachedChildInstancesResponse Alibabacloud_Cbn20170912::Client::describeCenAttachedChildInstancesWithOptions(shared_ptr<DescribeCenAttachedChildInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenAttachedChildInstances"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenAttachedChildInstancesResponse(callApi(params, req, runtime));
}

DescribeCenAttachedChildInstancesResponse Alibabacloud_Cbn20170912::Client::describeCenAttachedChildInstances(shared_ptr<DescribeCenAttachedChildInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenAttachedChildInstancesWithOptions(request, runtime);
}

DescribeCenBandwidthPackagesResponse Alibabacloud_Cbn20170912::Client::describeCenBandwidthPackagesWithOptions(shared_ptr<DescribeCenBandwidthPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<DescribeCenBandwidthPackagesRequestFilter>>("Filter", *request->filter));
  query->insert(pair<string, bool>("IncludeReservationData", *request->includeReservationData));
  query->insert(pair<string, bool>("IsOrKey", *request->isOrKey));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenBandwidthPackages"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenBandwidthPackagesResponse(callApi(params, req, runtime));
}

DescribeCenBandwidthPackagesResponse Alibabacloud_Cbn20170912::Client::describeCenBandwidthPackages(shared_ptr<DescribeCenBandwidthPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenBandwidthPackagesWithOptions(request, runtime);
}

DescribeCenChildInstanceRouteEntriesResponse Alibabacloud_Cbn20170912::Client::describeCenChildInstanceRouteEntriesWithOptions(shared_ptr<DescribeCenChildInstanceRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenChildInstanceRouteEntries"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenChildInstanceRouteEntriesResponse(callApi(params, req, runtime));
}

DescribeCenChildInstanceRouteEntriesResponse Alibabacloud_Cbn20170912::Client::describeCenChildInstanceRouteEntries(shared_ptr<DescribeCenChildInstanceRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenChildInstanceRouteEntriesWithOptions(request, runtime);
}

DescribeCenGeographicSpanRemainingBandwidthResponse Alibabacloud_Cbn20170912::Client::describeCenGeographicSpanRemainingBandwidthWithOptions(shared_ptr<DescribeCenGeographicSpanRemainingBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("GeographicRegionAId", *request->geographicRegionAId));
  query->insert(pair<string, string>("GeographicRegionBId", *request->geographicRegionBId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenGeographicSpanRemainingBandwidth"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenGeographicSpanRemainingBandwidthResponse(callApi(params, req, runtime));
}

DescribeCenGeographicSpanRemainingBandwidthResponse Alibabacloud_Cbn20170912::Client::describeCenGeographicSpanRemainingBandwidth(shared_ptr<DescribeCenGeographicSpanRemainingBandwidthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenGeographicSpanRemainingBandwidthWithOptions(request, runtime);
}

DescribeCenGeographicSpansResponse Alibabacloud_Cbn20170912::Client::describeCenGeographicSpansWithOptions(shared_ptr<DescribeCenGeographicSpansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GeographicSpanId", *request->geographicSpanId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenGeographicSpans"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenGeographicSpansResponse(callApi(params, req, runtime));
}

DescribeCenGeographicSpansResponse Alibabacloud_Cbn20170912::Client::describeCenGeographicSpans(shared_ptr<DescribeCenGeographicSpansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenGeographicSpansWithOptions(request, runtime);
}

DescribeCenInterRegionBandwidthLimitsResponse Alibabacloud_Cbn20170912::Client::describeCenInterRegionBandwidthLimitsWithOptions(shared_ptr<DescribeCenInterRegionBandwidthLimitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenInterRegionBandwidthLimits"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenInterRegionBandwidthLimitsResponse(callApi(params, req, runtime));
}

DescribeCenInterRegionBandwidthLimitsResponse Alibabacloud_Cbn20170912::Client::describeCenInterRegionBandwidthLimits(shared_ptr<DescribeCenInterRegionBandwidthLimitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenInterRegionBandwidthLimitsWithOptions(request, runtime);
}

DescribeCenPrivateZoneRoutesResponse Alibabacloud_Cbn20170912::Client::describeCenPrivateZoneRoutesWithOptions(shared_ptr<DescribeCenPrivateZoneRoutesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccessRegionId", *request->accessRegionId));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("HostRegionId", *request->hostRegionId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenPrivateZoneRoutes"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenPrivateZoneRoutesResponse(callApi(params, req, runtime));
}

DescribeCenPrivateZoneRoutesResponse Alibabacloud_Cbn20170912::Client::describeCenPrivateZoneRoutes(shared_ptr<DescribeCenPrivateZoneRoutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenPrivateZoneRoutesWithOptions(request, runtime);
}

DescribeCenRegionDomainRouteEntriesResponse Alibabacloud_Cbn20170912::Client::describeCenRegionDomainRouteEntriesWithOptions(shared_ptr<DescribeCenRegionDomainRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("CenRegionId", *request->cenRegionId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenRegionDomainRouteEntries"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenRegionDomainRouteEntriesResponse(callApi(params, req, runtime));
}

DescribeCenRegionDomainRouteEntriesResponse Alibabacloud_Cbn20170912::Client::describeCenRegionDomainRouteEntries(shared_ptr<DescribeCenRegionDomainRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenRegionDomainRouteEntriesWithOptions(request, runtime);
}

DescribeCenRouteMapsResponse Alibabacloud_Cbn20170912::Client::describeCenRouteMapsWithOptions(shared_ptr<DescribeCenRouteMapsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("CenRegionId", *request->cenRegionId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RouteMapId", *request->routeMapId));
  query->insert(pair<string, string>("TransmitDirection", *request->transmitDirection));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenRouteMaps"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenRouteMapsResponse(callApi(params, req, runtime));
}

DescribeCenRouteMapsResponse Alibabacloud_Cbn20170912::Client::describeCenRouteMaps(shared_ptr<DescribeCenRouteMapsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenRouteMapsWithOptions(request, runtime);
}

DescribeCenVbrHealthCheckResponse Alibabacloud_Cbn20170912::Client::describeCenVbrHealthCheckWithOptions(shared_ptr<DescribeCenVbrHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("VbrInstanceId", *request->vbrInstanceId));
  query->insert(pair<string, long>("VbrInstanceOwnerId", *request->vbrInstanceOwnerId));
  query->insert(pair<string, string>("VbrInstanceRegionId", *request->vbrInstanceRegionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCenVbrHealthCheck"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCenVbrHealthCheckResponse(callApi(params, req, runtime));
}

DescribeCenVbrHealthCheckResponse Alibabacloud_Cbn20170912::Client::describeCenVbrHealthCheck(shared_ptr<DescribeCenVbrHealthCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCenVbrHealthCheckWithOptions(request, runtime);
}

DescribeCensResponse Alibabacloud_Cbn20170912::Client::describeCensWithOptions(shared_ptr<DescribeCensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<DescribeCensRequestFilter>>("Filter", *request->filter));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, vector<DescribeCensRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCens"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCensResponse(callApi(params, req, runtime));
}

DescribeCensResponse Alibabacloud_Cbn20170912::Client::describeCens(shared_ptr<DescribeCensRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCensWithOptions(request, runtime);
}

DescribeChildInstanceRegionsResponse Alibabacloud_Cbn20170912::Client::describeChildInstanceRegionsWithOptions(shared_ptr<DescribeChildInstanceRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProductType", *request->productType));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChildInstanceRegions"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChildInstanceRegionsResponse(callApi(params, req, runtime));
}

DescribeChildInstanceRegionsResponse Alibabacloud_Cbn20170912::Client::describeChildInstanceRegions(shared_ptr<DescribeChildInstanceRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChildInstanceRegionsWithOptions(request, runtime);
}

DescribeFlowlogsResponse Alibabacloud_Cbn20170912::Client::describeFlowlogsWithOptions(shared_ptr<DescribeFlowlogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("FlowLogId", *request->flowLogId));
  query->insert(pair<string, string>("FlowLogName", *request->flowLogName));
  query->insert(pair<string, string>("LogStoreName", *request->logStoreName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowlogs"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowlogsResponse(callApi(params, req, runtime));
}

DescribeFlowlogsResponse Alibabacloud_Cbn20170912::Client::describeFlowlogs(shared_ptr<DescribeFlowlogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowlogsWithOptions(request, runtime);
}

DescribeGeographicRegionMembershipResponse Alibabacloud_Cbn20170912::Client::describeGeographicRegionMembershipWithOptions(shared_ptr<DescribeGeographicRegionMembershipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GeographicRegionId", *request->geographicRegionId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGeographicRegionMembership"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGeographicRegionMembershipResponse(callApi(params, req, runtime));
}

DescribeGeographicRegionMembershipResponse Alibabacloud_Cbn20170912::Client::describeGeographicRegionMembership(shared_ptr<DescribeGeographicRegionMembershipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGeographicRegionMembershipWithOptions(request, runtime);
}

DescribeGrantRulesToCenResponse Alibabacloud_Cbn20170912::Client::describeGrantRulesToCenWithOptions(shared_ptr<DescribeGrantRulesToCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProductType", *request->productType));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGrantRulesToCen"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGrantRulesToCenResponse(callApi(params, req, runtime));
}

DescribeGrantRulesToCenResponse Alibabacloud_Cbn20170912::Client::describeGrantRulesToCen(shared_ptr<DescribeGrantRulesToCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGrantRulesToCenWithOptions(request, runtime);
}

DescribePublishedRouteEntriesResponse Alibabacloud_Cbn20170912::Client::describePublishedRouteEntriesWithOptions(shared_ptr<DescribePublishedRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceRouteTableId", *request->childInstanceRouteTableId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePublishedRouteEntries"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePublishedRouteEntriesResponse(callApi(params, req, runtime));
}

DescribePublishedRouteEntriesResponse Alibabacloud_Cbn20170912::Client::describePublishedRouteEntries(shared_ptr<DescribePublishedRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePublishedRouteEntriesWithOptions(request, runtime);
}

DescribeRouteConflictResponse Alibabacloud_Cbn20170912::Client::describeRouteConflictWithOptions(shared_ptr<DescribeRouteConflictRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceRouteTableId", *request->childInstanceRouteTableId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRouteConflict"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRouteConflictResponse(callApi(params, req, runtime));
}

DescribeRouteConflictResponse Alibabacloud_Cbn20170912::Client::describeRouteConflict(shared_ptr<DescribeRouteConflictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRouteConflictWithOptions(request, runtime);
}

DescribeRouteServicesInCenResponse Alibabacloud_Cbn20170912::Client::describeRouteServicesInCenWithOptions(shared_ptr<DescribeRouteServicesInCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccessRegionId", *request->accessRegionId));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("Host", *request->host));
  query->insert(pair<string, string>("HostRegionId", *request->hostRegionId));
  query->insert(pair<string, string>("HostVpcId", *request->hostVpcId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRouteServicesInCen"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRouteServicesInCenResponse(callApi(params, req, runtime));
}

DescribeRouteServicesInCenResponse Alibabacloud_Cbn20170912::Client::describeRouteServicesInCen(shared_ptr<DescribeRouteServicesInCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRouteServicesInCenWithOptions(request, runtime);
}

DetachCenChildInstanceResponse Alibabacloud_Cbn20170912::Client::detachCenChildInstanceWithOptions(shared_ptr<DetachCenChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, long>("CenOwnerId", *request->cenOwnerId));
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, long>("ChildInstanceOwnerId", *request->childInstanceOwnerId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachCenChildInstance"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachCenChildInstanceResponse(callApi(params, req, runtime));
}

DetachCenChildInstanceResponse Alibabacloud_Cbn20170912::Client::detachCenChildInstance(shared_ptr<DetachCenChildInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachCenChildInstanceWithOptions(request, runtime);
}

DisableCenVbrHealthCheckResponse Alibabacloud_Cbn20170912::Client::disableCenVbrHealthCheckWithOptions(shared_ptr<DisableCenVbrHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("VbrInstanceId", *request->vbrInstanceId));
  query->insert(pair<string, long>("VbrInstanceOwnerId", *request->vbrInstanceOwnerId));
  query->insert(pair<string, string>("VbrInstanceRegionId", *request->vbrInstanceRegionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableCenVbrHealthCheck"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableCenVbrHealthCheckResponse(callApi(params, req, runtime));
}

DisableCenVbrHealthCheckResponse Alibabacloud_Cbn20170912::Client::disableCenVbrHealthCheck(shared_ptr<DisableCenVbrHealthCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableCenVbrHealthCheckWithOptions(request, runtime);
}

DisableTransitRouterRouteTablePropagationResponse Alibabacloud_Cbn20170912::Client::disableTransitRouterRouteTablePropagationWithOptions(shared_ptr<DisableTransitRouterRouteTablePropagationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableTransitRouterRouteTablePropagation"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableTransitRouterRouteTablePropagationResponse(callApi(params, req, runtime));
}

DisableTransitRouterRouteTablePropagationResponse Alibabacloud_Cbn20170912::Client::disableTransitRouterRouteTablePropagation(shared_ptr<DisableTransitRouterRouteTablePropagationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableTransitRouterRouteTablePropagationWithOptions(request, runtime);
}

DissociateTransitRouterAttachmentFromRouteTableResponse Alibabacloud_Cbn20170912::Client::dissociateTransitRouterAttachmentFromRouteTableWithOptions(shared_ptr<DissociateTransitRouterAttachmentFromRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateTransitRouterAttachmentFromRouteTable"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateTransitRouterAttachmentFromRouteTableResponse(callApi(params, req, runtime));
}

DissociateTransitRouterAttachmentFromRouteTableResponse Alibabacloud_Cbn20170912::Client::dissociateTransitRouterAttachmentFromRouteTable(shared_ptr<DissociateTransitRouterAttachmentFromRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateTransitRouterAttachmentFromRouteTableWithOptions(request, runtime);
}

EnableCenVbrHealthCheckResponse Alibabacloud_Cbn20170912::Client::enableCenVbrHealthCheckWithOptions(shared_ptr<EnableCenVbrHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  query->insert(pair<string, bool>("HealthCheckOnly", *request->healthCheckOnly));
  query->insert(pair<string, string>("HealthCheckSourceIp", *request->healthCheckSourceIp));
  query->insert(pair<string, string>("HealthCheckTargetIp", *request->healthCheckTargetIp));
  query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("VbrInstanceId", *request->vbrInstanceId));
  query->insert(pair<string, long>("VbrInstanceOwnerId", *request->vbrInstanceOwnerId));
  query->insert(pair<string, string>("VbrInstanceRegionId", *request->vbrInstanceRegionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableCenVbrHealthCheck"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableCenVbrHealthCheckResponse(callApi(params, req, runtime));
}

EnableCenVbrHealthCheckResponse Alibabacloud_Cbn20170912::Client::enableCenVbrHealthCheck(shared_ptr<EnableCenVbrHealthCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableCenVbrHealthCheckWithOptions(request, runtime);
}

EnableTransitRouterRouteTablePropagationResponse Alibabacloud_Cbn20170912::Client::enableTransitRouterRouteTablePropagationWithOptions(shared_ptr<EnableTransitRouterRouteTablePropagationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableTransitRouterRouteTablePropagation"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableTransitRouterRouteTablePropagationResponse(callApi(params, req, runtime));
}

EnableTransitRouterRouteTablePropagationResponse Alibabacloud_Cbn20170912::Client::enableTransitRouterRouteTablePropagation(shared_ptr<EnableTransitRouterRouteTablePropagationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableTransitRouterRouteTablePropagationWithOptions(request, runtime);
}

GrantInstanceToTransitRouterResponse Alibabacloud_Cbn20170912::Client::grantInstanceToTransitRouterWithOptions(shared_ptr<GrantInstanceToTransitRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, long>("CenOwnerId", *request->cenOwnerId));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("InstanceType", *request->instanceType));
  query->insert(pair<string, string>("OrderType", *request->orderType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantInstanceToTransitRouter"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantInstanceToTransitRouterResponse(callApi(params, req, runtime));
}

GrantInstanceToTransitRouterResponse Alibabacloud_Cbn20170912::Client::grantInstanceToTransitRouter(shared_ptr<GrantInstanceToTransitRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantInstanceToTransitRouterWithOptions(request, runtime);
}

ListCenInterRegionTrafficQosPoliciesResponse Alibabacloud_Cbn20170912::Client::listCenInterRegionTrafficQosPoliciesWithOptions(shared_ptr<ListCenInterRegionTrafficQosPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TrafficQosPolicyDescription", *request->trafficQosPolicyDescription));
  query->insert(pair<string, string>("TrafficQosPolicyId", *request->trafficQosPolicyId));
  query->insert(pair<string, string>("TrafficQosPolicyName", *request->trafficQosPolicyName));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCenInterRegionTrafficQosPolicies"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCenInterRegionTrafficQosPoliciesResponse(callApi(params, req, runtime));
}

ListCenInterRegionTrafficQosPoliciesResponse Alibabacloud_Cbn20170912::Client::listCenInterRegionTrafficQosPolicies(shared_ptr<ListCenInterRegionTrafficQosPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCenInterRegionTrafficQosPoliciesWithOptions(request, runtime);
}

ListGrantVSwitchesToCenResponse Alibabacloud_Cbn20170912::Client::listGrantVSwitchesToCenWithOptions(shared_ptr<ListGrantVSwitchesToCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGrantVSwitchesToCen"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGrantVSwitchesToCenResponse(callApi(params, req, runtime));
}

ListGrantVSwitchesToCenResponse Alibabacloud_Cbn20170912::Client::listGrantVSwitchesToCen(shared_ptr<ListGrantVSwitchesToCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGrantVSwitchesToCenWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Cbn20170912::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Cbn20170912::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTrafficMarkingPoliciesResponse Alibabacloud_Cbn20170912::Client::listTrafficMarkingPoliciesWithOptions(shared_ptr<ListTrafficMarkingPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TrafficMarkingPolicyDescription", *request->trafficMarkingPolicyDescription));
  query->insert(pair<string, string>("TrafficMarkingPolicyId", *request->trafficMarkingPolicyId));
  query->insert(pair<string, string>("TrafficMarkingPolicyName", *request->trafficMarkingPolicyName));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrafficMarkingPolicies"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrafficMarkingPoliciesResponse(callApi(params, req, runtime));
}

ListTrafficMarkingPoliciesResponse Alibabacloud_Cbn20170912::Client::listTrafficMarkingPolicies(shared_ptr<ListTrafficMarkingPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrafficMarkingPoliciesWithOptions(request, runtime);
}

ListTransitRouterAvailableResourceResponse Alibabacloud_Cbn20170912::Client::listTransitRouterAvailableResourceWithOptions(shared_ptr<ListTransitRouterAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTransitRouterAvailableResource"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTransitRouterAvailableResourceResponse(callApi(params, req, runtime));
}

ListTransitRouterAvailableResourceResponse Alibabacloud_Cbn20170912::Client::listTransitRouterAvailableResource(shared_ptr<ListTransitRouterAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransitRouterAvailableResourceWithOptions(request, runtime);
}

ListTransitRouterPeerAttachmentsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterPeerAttachmentsWithOptions(shared_ptr<ListTransitRouterPeerAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTransitRouterPeerAttachments"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTransitRouterPeerAttachmentsResponse(callApi(params, req, runtime));
}

ListTransitRouterPeerAttachmentsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterPeerAttachments(shared_ptr<ListTransitRouterPeerAttachmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransitRouterPeerAttachmentsWithOptions(request, runtime);
}

ListTransitRouterRouteEntriesResponse Alibabacloud_Cbn20170912::Client::listTransitRouterRouteEntriesWithOptions(shared_ptr<ListTransitRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterRouteEntryDestinationCidrBlock", *request->transitRouterRouteEntryDestinationCidrBlock));
  query->insert(pair<string, vector<string>>("TransitRouterRouteEntryIds", *request->transitRouterRouteEntryIds));
  query->insert(pair<string, vector<string>>("TransitRouterRouteEntryNames", *request->transitRouterRouteEntryNames));
  query->insert(pair<string, string>("TransitRouterRouteEntryStatus", *request->transitRouterRouteEntryStatus));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTransitRouterRouteEntries"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTransitRouterRouteEntriesResponse(callApi(params, req, runtime));
}

ListTransitRouterRouteEntriesResponse Alibabacloud_Cbn20170912::Client::listTransitRouterRouteEntries(shared_ptr<ListTransitRouterRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransitRouterRouteEntriesWithOptions(request, runtime);
}

ListTransitRouterRouteTableAssociationsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterRouteTableAssociationsWithOptions(shared_ptr<ListTransitRouterRouteTableAssociationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTransitRouterRouteTableAssociations"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTransitRouterRouteTableAssociationsResponse(callApi(params, req, runtime));
}

ListTransitRouterRouteTableAssociationsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterRouteTableAssociations(shared_ptr<ListTransitRouterRouteTableAssociationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransitRouterRouteTableAssociationsWithOptions(request, runtime);
}

ListTransitRouterRouteTablePropagationsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterRouteTablePropagationsWithOptions(shared_ptr<ListTransitRouterRouteTablePropagationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTransitRouterRouteTablePropagations"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTransitRouterRouteTablePropagationsResponse(callApi(params, req, runtime));
}

ListTransitRouterRouteTablePropagationsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterRouteTablePropagations(shared_ptr<ListTransitRouterRouteTablePropagationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransitRouterRouteTablePropagationsWithOptions(request, runtime);
}

ListTransitRouterRouteTablesResponse Alibabacloud_Cbn20170912::Client::listTransitRouterRouteTablesWithOptions(shared_ptr<ListTransitRouterRouteTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  query->insert(pair<string, vector<string>>("TransitRouterRouteTableIds", *request->transitRouterRouteTableIds));
  query->insert(pair<string, vector<string>>("TransitRouterRouteTableNames", *request->transitRouterRouteTableNames));
  query->insert(pair<string, string>("TransitRouterRouteTableStatus", *request->transitRouterRouteTableStatus));
  query->insert(pair<string, string>("TransitRouterRouteTableType", *request->transitRouterRouteTableType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTransitRouterRouteTables"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTransitRouterRouteTablesResponse(callApi(params, req, runtime));
}

ListTransitRouterRouteTablesResponse Alibabacloud_Cbn20170912::Client::listTransitRouterRouteTables(shared_ptr<ListTransitRouterRouteTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransitRouterRouteTablesWithOptions(request, runtime);
}

ListTransitRouterVbrAttachmentsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterVbrAttachmentsWithOptions(shared_ptr<ListTransitRouterVbrAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTransitRouterVbrAttachments"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTransitRouterVbrAttachmentsResponse(callApi(params, req, runtime));
}

ListTransitRouterVbrAttachmentsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterVbrAttachments(shared_ptr<ListTransitRouterVbrAttachmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransitRouterVbrAttachmentsWithOptions(request, runtime);
}

ListTransitRouterVpcAttachmentsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterVpcAttachmentsWithOptions(shared_ptr<ListTransitRouterVpcAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTransitRouterVpcAttachments"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTransitRouterVpcAttachmentsResponse(callApi(params, req, runtime));
}

ListTransitRouterVpcAttachmentsResponse Alibabacloud_Cbn20170912::Client::listTransitRouterVpcAttachments(shared_ptr<ListTransitRouterVpcAttachmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransitRouterVpcAttachmentsWithOptions(request, runtime);
}

ListTransitRoutersResponse Alibabacloud_Cbn20170912::Client::listTransitRoutersWithOptions(shared_ptr<ListTransitRoutersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTransitRouters"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTransitRoutersResponse(callApi(params, req, runtime));
}

ListTransitRoutersResponse Alibabacloud_Cbn20170912::Client::listTransitRouters(shared_ptr<ListTransitRoutersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransitRoutersWithOptions(request, runtime);
}

ModifyCenAttributeResponse Alibabacloud_Cbn20170912::Client::modifyCenAttributeWithOptions(shared_ptr<ModifyCenAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ProtectionLevel", *request->protectionLevel));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCenAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCenAttributeResponse(callApi(params, req, runtime));
}

ModifyCenAttributeResponse Alibabacloud_Cbn20170912::Client::modifyCenAttribute(shared_ptr<ModifyCenAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCenAttributeWithOptions(request, runtime);
}

ModifyCenBandwidthPackageAttributeResponse Alibabacloud_Cbn20170912::Client::modifyCenBandwidthPackageAttributeWithOptions(shared_ptr<ModifyCenBandwidthPackageAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenBandwidthPackageId", *request->cenBandwidthPackageId));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCenBandwidthPackageAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCenBandwidthPackageAttributeResponse(callApi(params, req, runtime));
}

ModifyCenBandwidthPackageAttributeResponse Alibabacloud_Cbn20170912::Client::modifyCenBandwidthPackageAttribute(shared_ptr<ModifyCenBandwidthPackageAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCenBandwidthPackageAttributeWithOptions(request, runtime);
}

ModifyCenBandwidthPackageSpecResponse Alibabacloud_Cbn20170912::Client::modifyCenBandwidthPackageSpecWithOptions(shared_ptr<ModifyCenBandwidthPackageSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("CenBandwidthPackageId", *request->cenBandwidthPackageId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCenBandwidthPackageSpec"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCenBandwidthPackageSpecResponse(callApi(params, req, runtime));
}

ModifyCenBandwidthPackageSpecResponse Alibabacloud_Cbn20170912::Client::modifyCenBandwidthPackageSpec(shared_ptr<ModifyCenBandwidthPackageSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCenBandwidthPackageSpecWithOptions(request, runtime);
}

ModifyCenRouteMapResponse Alibabacloud_Cbn20170912::Client::modifyCenRouteMapWithOptions(shared_ptr<ModifyCenRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AsPathMatchMode", *request->asPathMatchMode));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("CenRegionId", *request->cenRegionId));
  query->insert(pair<string, string>("CidrMatchMode", *request->cidrMatchMode));
  query->insert(pair<string, string>("CommunityMatchMode", *request->communityMatchMode));
  query->insert(pair<string, string>("CommunityOperateMode", *request->communityOperateMode));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, vector<string>>("DestinationChildInstanceTypes", *request->destinationChildInstanceTypes));
  query->insert(pair<string, vector<string>>("DestinationCidrBlocks", *request->destinationCidrBlocks));
  query->insert(pair<string, vector<string>>("DestinationInstanceIds", *request->destinationInstanceIds));
  query->insert(pair<string, bool>("DestinationInstanceIdsReverseMatch", *request->destinationInstanceIdsReverseMatch));
  query->insert(pair<string, vector<string>>("DestinationRouteTableIds", *request->destinationRouteTableIds));
  query->insert(pair<string, string>("MapResult", *request->mapResult));
  query->insert(pair<string, vector<long>>("MatchAsns", *request->matchAsns));
  query->insert(pair<string, vector<string>>("MatchCommunitySet", *request->matchCommunitySet));
  query->insert(pair<string, long>("NextPriority", *request->nextPriority));
  query->insert(pair<string, vector<string>>("OperateCommunitySet", *request->operateCommunitySet));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("Preference", *request->preference));
  query->insert(pair<string, vector<long>>("PrependAsPath", *request->prependAsPath));
  query->insert(pair<string, long>("Priority", *request->priority));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RouteMapId", *request->routeMapId));
  query->insert(pair<string, vector<string>>("RouteTypes", *request->routeTypes));
  query->insert(pair<string, vector<string>>("SourceChildInstanceTypes", *request->sourceChildInstanceTypes));
  query->insert(pair<string, vector<string>>("SourceInstanceIds", *request->sourceInstanceIds));
  query->insert(pair<string, bool>("SourceInstanceIdsReverseMatch", *request->sourceInstanceIdsReverseMatch));
  query->insert(pair<string, vector<string>>("SourceRegionIds", *request->sourceRegionIds));
  query->insert(pair<string, vector<string>>("SourceRouteTableIds", *request->sourceRouteTableIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCenRouteMap"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCenRouteMapResponse(callApi(params, req, runtime));
}

ModifyCenRouteMapResponse Alibabacloud_Cbn20170912::Client::modifyCenRouteMap(shared_ptr<ModifyCenRouteMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCenRouteMapWithOptions(request, runtime);
}

ModifyFlowLogAttributeResponse Alibabacloud_Cbn20170912::Client::modifyFlowLogAttributeWithOptions(shared_ptr<ModifyFlowLogAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("FlowLogId", *request->flowLogId));
  query->insert(pair<string, string>("FlowLogName", *request->flowLogName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyFlowLogAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyFlowLogAttributeResponse(callApi(params, req, runtime));
}

ModifyFlowLogAttributeResponse Alibabacloud_Cbn20170912::Client::modifyFlowLogAttribute(shared_ptr<ModifyFlowLogAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowLogAttributeWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_Cbn20170912::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveResourceGroup"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveResourceGroupResponse(callApi(params, req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Cbn20170912::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

OpenTransitRouterServiceResponse Alibabacloud_Cbn20170912::Client::openTransitRouterServiceWithOptions(shared_ptr<OpenTransitRouterServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenTransitRouterService"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenTransitRouterServiceResponse(callApi(params, req, runtime));
}

OpenTransitRouterServiceResponse Alibabacloud_Cbn20170912::Client::openTransitRouterService(shared_ptr<OpenTransitRouterServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openTransitRouterServiceWithOptions(request, runtime);
}

PublishRouteEntriesResponse Alibabacloud_Cbn20170912::Client::publishRouteEntriesWithOptions(shared_ptr<PublishRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceRouteTableId", *request->childInstanceRouteTableId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishRouteEntries"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishRouteEntriesResponse(callApi(params, req, runtime));
}

PublishRouteEntriesResponse Alibabacloud_Cbn20170912::Client::publishRouteEntries(shared_ptr<PublishRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishRouteEntriesWithOptions(request, runtime);
}

RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse Alibabacloud_Cbn20170912::Client::removeTraficMatchRuleFromTrafficMarkingPolicyWithOptions(shared_ptr<RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, vector<string>>("TrafficMarkRuleIds", *request->trafficMarkRuleIds));
  query->insert(pair<string, string>("TrafficMarkingPolicyId", *request->trafficMarkingPolicyId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTraficMatchRuleFromTrafficMarkingPolicy"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse(callApi(params, req, runtime));
}

RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse Alibabacloud_Cbn20170912::Client::removeTraficMatchRuleFromTrafficMarkingPolicy(shared_ptr<RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTraficMatchRuleFromTrafficMarkingPolicyWithOptions(request, runtime);
}

ReplaceTransitRouterRouteTableAssociationResponse Alibabacloud_Cbn20170912::Client::replaceTransitRouterRouteTableAssociationWithOptions(shared_ptr<ReplaceTransitRouterRouteTableAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceTransitRouterRouteTableAssociation"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceTransitRouterRouteTableAssociationResponse(callApi(params, req, runtime));
}

ReplaceTransitRouterRouteTableAssociationResponse Alibabacloud_Cbn20170912::Client::replaceTransitRouterRouteTableAssociation(shared_ptr<ReplaceTransitRouterRouteTableAssociationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceTransitRouterRouteTableAssociationWithOptions(request, runtime);
}

ResolveAndRouteServiceInCenResponse Alibabacloud_Cbn20170912::Client::resolveAndRouteServiceInCenWithOptions(shared_ptr<ResolveAndRouteServiceInCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("AccessRegionIds", *request->accessRegionIds));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Host", *request->host));
  query->insert(pair<string, string>("HostRegionId", *request->hostRegionId));
  query->insert(pair<string, string>("HostVpcId", *request->hostVpcId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResolveAndRouteServiceInCen"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResolveAndRouteServiceInCenResponse(callApi(params, req, runtime));
}

ResolveAndRouteServiceInCenResponse Alibabacloud_Cbn20170912::Client::resolveAndRouteServiceInCen(shared_ptr<ResolveAndRouteServiceInCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resolveAndRouteServiceInCenWithOptions(request, runtime);
}

RevokeInstanceFromTransitRouterResponse Alibabacloud_Cbn20170912::Client::revokeInstanceFromTransitRouterWithOptions(shared_ptr<RevokeInstanceFromTransitRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, long>("CenOwnerId", *request->cenOwnerId));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("InstanceType", *request->instanceType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeInstanceFromTransitRouter"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeInstanceFromTransitRouterResponse(callApi(params, req, runtime));
}

RevokeInstanceFromTransitRouterResponse Alibabacloud_Cbn20170912::Client::revokeInstanceFromTransitRouter(shared_ptr<RevokeInstanceFromTransitRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeInstanceFromTransitRouterWithOptions(request, runtime);
}

RoutePrivateZoneInCenToVpcResponse Alibabacloud_Cbn20170912::Client::routePrivateZoneInCenToVpcWithOptions(shared_ptr<RoutePrivateZoneInCenToVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccessRegionId", *request->accessRegionId));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("HostRegionId", *request->hostRegionId));
  query->insert(pair<string, string>("HostVpcId", *request->hostVpcId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RoutePrivateZoneInCenToVpc"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RoutePrivateZoneInCenToVpcResponse(callApi(params, req, runtime));
}

RoutePrivateZoneInCenToVpcResponse Alibabacloud_Cbn20170912::Client::routePrivateZoneInCenToVpc(shared_ptr<RoutePrivateZoneInCenToVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return routePrivateZoneInCenToVpcWithOptions(request, runtime);
}

SetCenInterRegionBandwidthLimitResponse Alibabacloud_Cbn20170912::Client::setCenInterRegionBandwidthLimitWithOptions(shared_ptr<SetCenInterRegionBandwidthLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("BandwidthLimit", *request->bandwidthLimit));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("LocalRegionId", *request->localRegionId));
  query->insert(pair<string, string>("OppositeRegionId", *request->oppositeRegionId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCenInterRegionBandwidthLimit"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCenInterRegionBandwidthLimitResponse(callApi(params, req, runtime));
}

SetCenInterRegionBandwidthLimitResponse Alibabacloud_Cbn20170912::Client::setCenInterRegionBandwidthLimit(shared_ptr<SetCenInterRegionBandwidthLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCenInterRegionBandwidthLimitWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Cbn20170912::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Cbn20170912::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

TempUpgradeCenBandwidthPackageSpecResponse Alibabacloud_Cbn20170912::Client::tempUpgradeCenBandwidthPackageSpecWithOptions(shared_ptr<TempUpgradeCenBandwidthPackageSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("CenBandwidthPackageId", *request->cenBandwidthPackageId));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TempUpgradeCenBandwidthPackageSpec"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TempUpgradeCenBandwidthPackageSpecResponse(callApi(params, req, runtime));
}

TempUpgradeCenBandwidthPackageSpecResponse Alibabacloud_Cbn20170912::Client::tempUpgradeCenBandwidthPackageSpec(shared_ptr<TempUpgradeCenBandwidthPackageSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tempUpgradeCenBandwidthPackageSpecWithOptions(request, runtime);
}

UnassociateCenBandwidthPackageResponse Alibabacloud_Cbn20170912::Client::unassociateCenBandwidthPackageWithOptions(shared_ptr<UnassociateCenBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenBandwidthPackageId", *request->cenBandwidthPackageId));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnassociateCenBandwidthPackage"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnassociateCenBandwidthPackageResponse(callApi(params, req, runtime));
}

UnassociateCenBandwidthPackageResponse Alibabacloud_Cbn20170912::Client::unassociateCenBandwidthPackage(shared_ptr<UnassociateCenBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassociateCenBandwidthPackageWithOptions(request, runtime);
}

UnroutePrivateZoneInCenToVpcResponse Alibabacloud_Cbn20170912::Client::unroutePrivateZoneInCenToVpcWithOptions(shared_ptr<UnroutePrivateZoneInCenToVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccessRegionId", *request->accessRegionId));
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnroutePrivateZoneInCenToVpc"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnroutePrivateZoneInCenToVpcResponse(callApi(params, req, runtime));
}

UnroutePrivateZoneInCenToVpcResponse Alibabacloud_Cbn20170912::Client::unroutePrivateZoneInCenToVpc(shared_ptr<UnroutePrivateZoneInCenToVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unroutePrivateZoneInCenToVpcWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Cbn20170912::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("All", *request->all));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Cbn20170912::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateCenInterRegionTrafficQosPolicyAttributeResponse Alibabacloud_Cbn20170912::Client::updateCenInterRegionTrafficQosPolicyAttributeWithOptions(shared_ptr<UpdateCenInterRegionTrafficQosPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TrafficQosPolicyDescription", *request->trafficQosPolicyDescription));
  query->insert(pair<string, string>("TrafficQosPolicyId", *request->trafficQosPolicyId));
  query->insert(pair<string, string>("TrafficQosPolicyName", *request->trafficQosPolicyName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCenInterRegionTrafficQosPolicyAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCenInterRegionTrafficQosPolicyAttributeResponse(callApi(params, req, runtime));
}

UpdateCenInterRegionTrafficQosPolicyAttributeResponse Alibabacloud_Cbn20170912::Client::updateCenInterRegionTrafficQosPolicyAttribute(shared_ptr<UpdateCenInterRegionTrafficQosPolicyAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCenInterRegionTrafficQosPolicyAttributeWithOptions(request, runtime);
}

UpdateCenInterRegionTrafficQosQueueAttributeResponse Alibabacloud_Cbn20170912::Client::updateCenInterRegionTrafficQosQueueAttributeWithOptions(shared_ptr<UpdateCenInterRegionTrafficQosQueueAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, vector<long>>("Dscps", *request->dscps));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("QosQueueDescription", *request->qosQueueDescription));
  query->insert(pair<string, string>("QosQueueId", *request->qosQueueId));
  query->insert(pair<string, string>("QosQueueName", *request->qosQueueName));
  query->insert(pair<string, string>("RemainBandwidthPercent", *request->remainBandwidthPercent));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCenInterRegionTrafficQosQueueAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCenInterRegionTrafficQosQueueAttributeResponse(callApi(params, req, runtime));
}

UpdateCenInterRegionTrafficQosQueueAttributeResponse Alibabacloud_Cbn20170912::Client::updateCenInterRegionTrafficQosQueueAttribute(shared_ptr<UpdateCenInterRegionTrafficQosQueueAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCenInterRegionTrafficQosQueueAttributeWithOptions(request, runtime);
}

UpdateTrafficMarkingPolicyAttributeResponse Alibabacloud_Cbn20170912::Client::updateTrafficMarkingPolicyAttributeWithOptions(shared_ptr<UpdateTrafficMarkingPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TrafficMarkingPolicyDescription", *request->trafficMarkingPolicyDescription));
  query->insert(pair<string, string>("TrafficMarkingPolicyId", *request->trafficMarkingPolicyId));
  query->insert(pair<string, string>("TrafficMarkingPolicyName", *request->trafficMarkingPolicyName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrafficMarkingPolicyAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTrafficMarkingPolicyAttributeResponse(callApi(params, req, runtime));
}

UpdateTrafficMarkingPolicyAttributeResponse Alibabacloud_Cbn20170912::Client::updateTrafficMarkingPolicyAttribute(shared_ptr<UpdateTrafficMarkingPolicyAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTrafficMarkingPolicyAttributeWithOptions(request, runtime);
}

UpdateTransitRouterResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterWithOptions(shared_ptr<UpdateTransitRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterDescription", *request->transitRouterDescription));
  query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  query->insert(pair<string, string>("TransitRouterName", *request->transitRouterName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTransitRouter"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTransitRouterResponse(callApi(params, req, runtime));
}

UpdateTransitRouterResponse Alibabacloud_Cbn20170912::Client::updateTransitRouter(shared_ptr<UpdateTransitRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTransitRouterWithOptions(request, runtime);
}

UpdateTransitRouterPeerAttachmentAttributeResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterPeerAttachmentAttributeWithOptions(shared_ptr<UpdateTransitRouterPeerAttachmentAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPublishRouteEnabled", *request->autoPublishRouteEnabled));
  query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("BandwidthType", *request->bandwidthType));
  query->insert(pair<string, string>("CenBandwidthPackageId", *request->cenBandwidthPackageId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentDescription", *request->transitRouterAttachmentDescription));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterAttachmentName", *request->transitRouterAttachmentName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTransitRouterPeerAttachmentAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTransitRouterPeerAttachmentAttributeResponse(callApi(params, req, runtime));
}

UpdateTransitRouterPeerAttachmentAttributeResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterPeerAttachmentAttribute(shared_ptr<UpdateTransitRouterPeerAttachmentAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTransitRouterPeerAttachmentAttributeWithOptions(request, runtime);
}

UpdateTransitRouterRouteEntryResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterRouteEntryWithOptions(shared_ptr<UpdateTransitRouterRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterRouteEntryDescription", *request->transitRouterRouteEntryDescription));
  query->insert(pair<string, string>("TransitRouterRouteEntryId", *request->transitRouterRouteEntryId));
  query->insert(pair<string, string>("TransitRouterRouteEntryName", *request->transitRouterRouteEntryName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTransitRouterRouteEntry"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTransitRouterRouteEntryResponse(callApi(params, req, runtime));
}

UpdateTransitRouterRouteEntryResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterRouteEntry(shared_ptr<UpdateTransitRouterRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTransitRouterRouteEntryWithOptions(request, runtime);
}

UpdateTransitRouterRouteTableResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterRouteTableWithOptions(shared_ptr<UpdateTransitRouterRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterRouteTableDescription", *request->transitRouterRouteTableDescription));
  query->insert(pair<string, string>("TransitRouterRouteTableId", *request->transitRouterRouteTableId));
  query->insert(pair<string, string>("TransitRouterRouteTableName", *request->transitRouterRouteTableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTransitRouterRouteTable"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTransitRouterRouteTableResponse(callApi(params, req, runtime));
}

UpdateTransitRouterRouteTableResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterRouteTable(shared_ptr<UpdateTransitRouterRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTransitRouterRouteTableWithOptions(request, runtime);
}

UpdateTransitRouterVbrAttachmentAttributeResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterVbrAttachmentAttributeWithOptions(shared_ptr<UpdateTransitRouterVbrAttachmentAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentDescription", *request->transitRouterAttachmentDescription));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterAttachmentName", *request->transitRouterAttachmentName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTransitRouterVbrAttachmentAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTransitRouterVbrAttachmentAttributeResponse(callApi(params, req, runtime));
}

UpdateTransitRouterVbrAttachmentAttributeResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterVbrAttachmentAttribute(shared_ptr<UpdateTransitRouterVbrAttachmentAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTransitRouterVbrAttachmentAttributeWithOptions(request, runtime);
}

UpdateTransitRouterVpcAttachmentAttributeResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterVpcAttachmentAttributeWithOptions(shared_ptr<UpdateTransitRouterVpcAttachmentAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("TransitRouterAttachmentDescription", *request->transitRouterAttachmentDescription));
  query->insert(pair<string, string>("TransitRouterAttachmentId", *request->transitRouterAttachmentId));
  query->insert(pair<string, string>("TransitRouterAttachmentName", *request->transitRouterAttachmentName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTransitRouterVpcAttachmentAttribute"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTransitRouterVpcAttachmentAttributeResponse(callApi(params, req, runtime));
}

UpdateTransitRouterVpcAttachmentAttributeResponse Alibabacloud_Cbn20170912::Client::updateTransitRouterVpcAttachmentAttribute(shared_ptr<UpdateTransitRouterVpcAttachmentAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTransitRouterVpcAttachmentAttributeWithOptions(request, runtime);
}

WithdrawPublishedRouteEntriesResponse Alibabacloud_Cbn20170912::Client::withdrawPublishedRouteEntriesWithOptions(shared_ptr<WithdrawPublishedRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CenId", *request->cenId));
  query->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  query->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  query->insert(pair<string, string>("ChildInstanceRouteTableId", *request->childInstanceRouteTableId));
  query->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  query->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WithdrawPublishedRouteEntries"))},
    {"version", boost::any(string("2017-09-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WithdrawPublishedRouteEntriesResponse(callApi(params, req, runtime));
}

WithdrawPublishedRouteEntriesResponse Alibabacloud_Cbn20170912::Client::withdrawPublishedRouteEntries(shared_ptr<WithdrawPublishedRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return withdrawPublishedRouteEntriesWithOptions(request, runtime);
}

