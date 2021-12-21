// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CBN20170912_H_
#define ALIBABACLOUD_CBN20170912_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cbn20170912 {
class ActiveFlowLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> flowLogId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ActiveFlowLogRequest() {}

  explicit ActiveFlowLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (flowLogId) {
      res["FlowLogId"] = boost::any(*flowLogId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FlowLogId") != m.end() && !m["FlowLogId"].empty()) {
      flowLogId = make_shared<string>(boost::any_cast<string>(m["FlowLogId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ActiveFlowLogRequest() = default;
};
class ActiveFlowLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ActiveFlowLogResponseBody() {}

  explicit ActiveFlowLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ActiveFlowLogResponseBody() = default;
};
class ActiveFlowLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ActiveFlowLogResponseBody> body{};

  ActiveFlowLogResponse() {}

  explicit ActiveFlowLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ActiveFlowLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActiveFlowLogResponseBody>(model1);
      }
    }
  }


  virtual ~ActiveFlowLogResponse() = default;
};
class AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules : public Darabonba::Model {
public:
  shared_ptr<string> dstCidr{};
  shared_ptr<vector<long>> dstPortRange{};
  shared_ptr<long> matchDscp{};
  shared_ptr<string> protocol{};
  shared_ptr<string> srcCidr{};
  shared_ptr<vector<long>> srcPortRange{};
  shared_ptr<string> trafficMatchRuleDescription{};
  shared_ptr<string> trafficMatchRuleName{};

  AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules() {}

  explicit AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstCidr) {
      res["DstCidr"] = boost::any(*dstCidr);
    }
    if (dstPortRange) {
      res["DstPortRange"] = boost::any(*dstPortRange);
    }
    if (matchDscp) {
      res["MatchDscp"] = boost::any(*matchDscp);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (srcCidr) {
      res["SrcCidr"] = boost::any(*srcCidr);
    }
    if (srcPortRange) {
      res["SrcPortRange"] = boost::any(*srcPortRange);
    }
    if (trafficMatchRuleDescription) {
      res["TrafficMatchRuleDescription"] = boost::any(*trafficMatchRuleDescription);
    }
    if (trafficMatchRuleName) {
      res["TrafficMatchRuleName"] = boost::any(*trafficMatchRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstCidr") != m.end() && !m["DstCidr"].empty()) {
      dstCidr = make_shared<string>(boost::any_cast<string>(m["DstCidr"]));
    }
    if (m.find("DstPortRange") != m.end() && !m["DstPortRange"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DstPortRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DstPortRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dstPortRange = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MatchDscp") != m.end() && !m["MatchDscp"].empty()) {
      matchDscp = make_shared<long>(boost::any_cast<long>(m["MatchDscp"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("SrcCidr") != m.end() && !m["SrcCidr"].empty()) {
      srcCidr = make_shared<string>(boost::any_cast<string>(m["SrcCidr"]));
    }
    if (m.find("SrcPortRange") != m.end() && !m["SrcPortRange"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SrcPortRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SrcPortRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      srcPortRange = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TrafficMatchRuleDescription") != m.end() && !m["TrafficMatchRuleDescription"].empty()) {
      trafficMatchRuleDescription = make_shared<string>(boost::any_cast<string>(m["TrafficMatchRuleDescription"]));
    }
    if (m.find("TrafficMatchRuleName") != m.end() && !m["TrafficMatchRuleName"].empty()) {
      trafficMatchRuleName = make_shared<string>(boost::any_cast<string>(m["TrafficMatchRuleName"]));
    }
  }


  virtual ~AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules() = default;
};
class AddTraficMatchRuleToTrafficMarkingPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trafficMarkingPolicyId{};
  shared_ptr<vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules>> trafficMatchRules{};

  AddTraficMatchRuleToTrafficMarkingPolicyRequest() {}

  explicit AddTraficMatchRuleToTrafficMarkingPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficMarkingPolicyId) {
      res["TrafficMarkingPolicyId"] = boost::any(*trafficMarkingPolicyId);
    }
    if (trafficMatchRules) {
      vector<boost::any> temp1;
      for(auto item1:*trafficMatchRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrafficMatchRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficMarkingPolicyId") != m.end() && !m["TrafficMarkingPolicyId"].empty()) {
      trafficMarkingPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyId"]));
    }
    if (m.find("TrafficMatchRules") != m.end() && !m["TrafficMatchRules"].empty()) {
      if (typeid(vector<boost::any>) == m["TrafficMatchRules"].type()) {
        vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrafficMatchRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trafficMatchRules = make_shared<vector<AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules>>(expect1);
      }
    }
  }


  virtual ~AddTraficMatchRuleToTrafficMarkingPolicyRequest() = default;
};
class AddTraficMatchRuleToTrafficMarkingPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddTraficMatchRuleToTrafficMarkingPolicyResponseBody() {}

  explicit AddTraficMatchRuleToTrafficMarkingPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddTraficMatchRuleToTrafficMarkingPolicyResponseBody() = default;
};
class AddTraficMatchRuleToTrafficMarkingPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddTraficMatchRuleToTrafficMarkingPolicyResponseBody> body{};

  AddTraficMatchRuleToTrafficMarkingPolicyResponse() {}

  explicit AddTraficMatchRuleToTrafficMarkingPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddTraficMatchRuleToTrafficMarkingPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTraficMatchRuleToTrafficMarkingPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~AddTraficMatchRuleToTrafficMarkingPolicyResponse() = default;
};
class AssociateCenBandwidthPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AssociateCenBandwidthPackageRequest() {}

  explicit AssociateCenBandwidthPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~AssociateCenBandwidthPackageRequest() = default;
};
class AssociateCenBandwidthPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateCenBandwidthPackageResponseBody() {}

  explicit AssociateCenBandwidthPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssociateCenBandwidthPackageResponseBody() = default;
};
class AssociateCenBandwidthPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateCenBandwidthPackageResponseBody> body{};

  AssociateCenBandwidthPackageResponse() {}

  explicit AssociateCenBandwidthPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AssociateCenBandwidthPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateCenBandwidthPackageResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateCenBandwidthPackageResponse() = default;
};
class AssociateTransitRouterAttachmentWithRouteTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterRouteTableId{};

  AssociateTransitRouterAttachmentWithRouteTableRequest() {}

  explicit AssociateTransitRouterAttachmentWithRouteTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~AssociateTransitRouterAttachmentWithRouteTableRequest() = default;
};
class AssociateTransitRouterAttachmentWithRouteTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateTransitRouterAttachmentWithRouteTableResponseBody() {}

  explicit AssociateTransitRouterAttachmentWithRouteTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssociateTransitRouterAttachmentWithRouteTableResponseBody() = default;
};
class AssociateTransitRouterAttachmentWithRouteTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateTransitRouterAttachmentWithRouteTableResponseBody> body{};

  AssociateTransitRouterAttachmentWithRouteTableResponse() {}

  explicit AssociateTransitRouterAttachmentWithRouteTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AssociateTransitRouterAttachmentWithRouteTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateTransitRouterAttachmentWithRouteTableResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateTransitRouterAttachmentWithRouteTableResponse() = default;
};
class AttachCenChildInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<long> childInstanceOwnerId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AttachCenChildInstanceRequest() {}

  explicit AttachCenChildInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceOwnerId) {
      res["ChildInstanceOwnerId"] = boost::any(*childInstanceOwnerId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceOwnerId") != m.end() && !m["ChildInstanceOwnerId"].empty()) {
      childInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["ChildInstanceOwnerId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~AttachCenChildInstanceRequest() = default;
};
class AttachCenChildInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachCenChildInstanceResponseBody() {}

  explicit AttachCenChildInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachCenChildInstanceResponseBody() = default;
};
class AttachCenChildInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachCenChildInstanceResponseBody> body{};

  AttachCenChildInstanceResponse() {}

  explicit AttachCenChildInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachCenChildInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachCenChildInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~AttachCenChildInstanceResponse() = default;
};
class CheckTransitRouterServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckTransitRouterServiceRequest() {}

  explicit CheckTransitRouterServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CheckTransitRouterServiceRequest() = default;
};
class CheckTransitRouterServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> enabled{};
  shared_ptr<string> requestId{};

  CheckTransitRouterServiceResponseBody() {}

  explicit CheckTransitRouterServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckTransitRouterServiceResponseBody() = default;
};
class CheckTransitRouterServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckTransitRouterServiceResponseBody> body{};

  CheckTransitRouterServiceResponse() {}

  explicit CheckTransitRouterServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckTransitRouterServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckTransitRouterServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CheckTransitRouterServiceResponse() = default;
};
class CreateCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateCenRequest() {}

  explicit CreateCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateCenRequest() = default;
};
class CreateCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> requestId{};

  CreateCenResponseBody() {}

  explicit CreateCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCenResponseBody() = default;
};
class CreateCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCenResponseBody> body{};

  CreateCenResponse() {}

  explicit CreateCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCenResponse() = default;
};
class CreateCenBandwidthPackageRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewDuration{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bandwidthPackageChargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> geographicRegionAId{};
  shared_ptr<string> geographicRegionBId{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> period{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateCenBandwidthPackageRequest() {}

  explicit CreateCenBandwidthPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewDuration) {
      res["AutoRenewDuration"] = boost::any(*autoRenewDuration);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bandwidthPackageChargeType) {
      res["BandwidthPackageChargeType"] = boost::any(*bandwidthPackageChargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (geographicRegionAId) {
      res["GeographicRegionAId"] = boost::any(*geographicRegionAId);
    }
    if (geographicRegionBId) {
      res["GeographicRegionBId"] = boost::any(*geographicRegionBId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewDuration") != m.end() && !m["AutoRenewDuration"].empty()) {
      autoRenewDuration = make_shared<long>(boost::any_cast<long>(m["AutoRenewDuration"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BandwidthPackageChargeType") != m.end() && !m["BandwidthPackageChargeType"].empty()) {
      bandwidthPackageChargeType = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GeographicRegionAId") != m.end() && !m["GeographicRegionAId"].empty()) {
      geographicRegionAId = make_shared<string>(boost::any_cast<string>(m["GeographicRegionAId"]));
    }
    if (m.find("GeographicRegionBId") != m.end() && !m["GeographicRegionBId"].empty()) {
      geographicRegionBId = make_shared<string>(boost::any_cast<string>(m["GeographicRegionBId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateCenBandwidthPackageRequest() = default;
};
class CreateCenBandwidthPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> cenBandwidthPackageOrderId{};
  shared_ptr<string> requestId{};

  CreateCenBandwidthPackageResponseBody() {}

  explicit CreateCenBandwidthPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (cenBandwidthPackageOrderId) {
      res["CenBandwidthPackageOrderId"] = boost::any(*cenBandwidthPackageOrderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("CenBandwidthPackageOrderId") != m.end() && !m["CenBandwidthPackageOrderId"].empty()) {
      cenBandwidthPackageOrderId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageOrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCenBandwidthPackageResponseBody() = default;
};
class CreateCenBandwidthPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCenBandwidthPackageResponseBody> body{};

  CreateCenBandwidthPackageResponse() {}

  explicit CreateCenBandwidthPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCenBandwidthPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCenBandwidthPackageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCenBandwidthPackageResponse() = default;
};
class CreateCenChildInstanceRouteEntryToAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> routeTableId{};
  shared_ptr<string> transitRouterAttachmentId{};

  CreateCenChildInstanceRouteEntryToAttachmentRequest() {}

  explicit CreateCenChildInstanceRouteEntryToAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
  }


  virtual ~CreateCenChildInstanceRouteEntryToAttachmentRequest() = default;
};
class CreateCenChildInstanceRouteEntryToAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateCenChildInstanceRouteEntryToAttachmentResponseBody() {}

  explicit CreateCenChildInstanceRouteEntryToAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCenChildInstanceRouteEntryToAttachmentResponseBody() = default;
};
class CreateCenChildInstanceRouteEntryToAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCenChildInstanceRouteEntryToAttachmentResponseBody> body{};

  CreateCenChildInstanceRouteEntryToAttachmentResponse() {}

  explicit CreateCenChildInstanceRouteEntryToAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCenChildInstanceRouteEntryToAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCenChildInstanceRouteEntryToAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCenChildInstanceRouteEntryToAttachmentResponse() = default;
};
class CreateCenChildInstanceRouteEntryToCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> childInstanceAliUid{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> routeTableId{};

  CreateCenChildInstanceRouteEntryToCenRequest() {}

  explicit CreateCenChildInstanceRouteEntryToCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceAliUid) {
      res["ChildInstanceAliUid"] = boost::any(*childInstanceAliUid);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceAliUid") != m.end() && !m["ChildInstanceAliUid"].empty()) {
      childInstanceAliUid = make_shared<long>(boost::any_cast<long>(m["ChildInstanceAliUid"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~CreateCenChildInstanceRouteEntryToCenRequest() = default;
};
class CreateCenChildInstanceRouteEntryToCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateCenChildInstanceRouteEntryToCenResponseBody() {}

  explicit CreateCenChildInstanceRouteEntryToCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCenChildInstanceRouteEntryToCenResponseBody() = default;
};
class CreateCenChildInstanceRouteEntryToCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCenChildInstanceRouteEntryToCenResponseBody> body{};

  CreateCenChildInstanceRouteEntryToCenResponse() {}

  explicit CreateCenChildInstanceRouteEntryToCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCenChildInstanceRouteEntryToCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCenChildInstanceRouteEntryToCenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCenChildInstanceRouteEntryToCenResponse() = default;
};
class CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dscps{};
  shared_ptr<string> qosQueueDescription{};
  shared_ptr<string> qosQueueName{};
  shared_ptr<string> remainBandwidthPercent{};

  CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues() {}

  explicit CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dscps) {
      res["Dscps"] = boost::any(*dscps);
    }
    if (qosQueueDescription) {
      res["QosQueueDescription"] = boost::any(*qosQueueDescription);
    }
    if (qosQueueName) {
      res["QosQueueName"] = boost::any(*qosQueueName);
    }
    if (remainBandwidthPercent) {
      res["RemainBandwidthPercent"] = boost::any(*remainBandwidthPercent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dscps") != m.end() && !m["Dscps"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Dscps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dscps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dscps = make_shared<vector<long>>(toVec1);
    }
    if (m.find("QosQueueDescription") != m.end() && !m["QosQueueDescription"].empty()) {
      qosQueueDescription = make_shared<string>(boost::any_cast<string>(m["QosQueueDescription"]));
    }
    if (m.find("QosQueueName") != m.end() && !m["QosQueueName"].empty()) {
      qosQueueName = make_shared<string>(boost::any_cast<string>(m["QosQueueName"]));
    }
    if (m.find("RemainBandwidthPercent") != m.end() && !m["RemainBandwidthPercent"].empty()) {
      remainBandwidthPercent = make_shared<string>(boost::any_cast<string>(m["RemainBandwidthPercent"]));
    }
  }


  virtual ~CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues() = default;
};
class CreateCenInterRegionTrafficQosPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trafficQosPolicyDescription{};
  shared_ptr<string> trafficQosPolicyName{};
  shared_ptr<vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues>> trafficQosQueues{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterId{};

  CreateCenInterRegionTrafficQosPolicyRequest() {}

  explicit CreateCenInterRegionTrafficQosPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficQosPolicyDescription) {
      res["TrafficQosPolicyDescription"] = boost::any(*trafficQosPolicyDescription);
    }
    if (trafficQosPolicyName) {
      res["TrafficQosPolicyName"] = boost::any(*trafficQosPolicyName);
    }
    if (trafficQosQueues) {
      vector<boost::any> temp1;
      for(auto item1:*trafficQosQueues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrafficQosQueues"] = boost::any(temp1);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficQosPolicyDescription") != m.end() && !m["TrafficQosPolicyDescription"].empty()) {
      trafficQosPolicyDescription = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyDescription"]));
    }
    if (m.find("TrafficQosPolicyName") != m.end() && !m["TrafficQosPolicyName"].empty()) {
      trafficQosPolicyName = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyName"]));
    }
    if (m.find("TrafficQosQueues") != m.end() && !m["TrafficQosQueues"].empty()) {
      if (typeid(vector<boost::any>) == m["TrafficQosQueues"].type()) {
        vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrafficQosQueues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trafficQosQueues = make_shared<vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues>>(expect1);
      }
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~CreateCenInterRegionTrafficQosPolicyRequest() = default;
};
class CreateCenInterRegionTrafficQosPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> trafficQosPolicyId{};

  CreateCenInterRegionTrafficQosPolicyResponseBody() {}

  explicit CreateCenInterRegionTrafficQosPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trafficQosPolicyId) {
      res["TrafficQosPolicyId"] = boost::any(*trafficQosPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrafficQosPolicyId") != m.end() && !m["TrafficQosPolicyId"].empty()) {
      trafficQosPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyId"]));
    }
  }


  virtual ~CreateCenInterRegionTrafficQosPolicyResponseBody() = default;
};
class CreateCenInterRegionTrafficQosPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCenInterRegionTrafficQosPolicyResponseBody> body{};

  CreateCenInterRegionTrafficQosPolicyResponse() {}

  explicit CreateCenInterRegionTrafficQosPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCenInterRegionTrafficQosPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCenInterRegionTrafficQosPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCenInterRegionTrafficQosPolicyResponse() = default;
};
class CreateCenRouteMapRequest : public Darabonba::Model {
public:
  shared_ptr<string> asPathMatchMode{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cenRegionId{};
  shared_ptr<string> cidrMatchMode{};
  shared_ptr<string> communityMatchMode{};
  shared_ptr<string> communityOperateMode{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> destinationChildInstanceTypes{};
  shared_ptr<vector<string>> destinationCidrBlocks{};
  shared_ptr<vector<string>> destinationInstanceIds{};
  shared_ptr<bool> destinationInstanceIdsReverseMatch{};
  shared_ptr<vector<string>> destinationRouteTableIds{};
  shared_ptr<string> mapResult{};
  shared_ptr<vector<long>> matchAsns{};
  shared_ptr<vector<string>> matchCommunitySet{};
  shared_ptr<long> nextPriority{};
  shared_ptr<vector<string>> operateCommunitySet{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> preference{};
  shared_ptr<vector<long>> prependAsPath{};
  shared_ptr<long> priority{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<string>> routeTypes{};
  shared_ptr<vector<string>> sourceChildInstanceTypes{};
  shared_ptr<vector<string>> sourceInstanceIds{};
  shared_ptr<bool> sourceInstanceIdsReverseMatch{};
  shared_ptr<vector<string>> sourceRegionIds{};
  shared_ptr<vector<string>> sourceRouteTableIds{};
  shared_ptr<string> transmitDirection{};

  CreateCenRouteMapRequest() {}

  explicit CreateCenRouteMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPathMatchMode) {
      res["AsPathMatchMode"] = boost::any(*asPathMatchMode);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenRegionId) {
      res["CenRegionId"] = boost::any(*cenRegionId);
    }
    if (cidrMatchMode) {
      res["CidrMatchMode"] = boost::any(*cidrMatchMode);
    }
    if (communityMatchMode) {
      res["CommunityMatchMode"] = boost::any(*communityMatchMode);
    }
    if (communityOperateMode) {
      res["CommunityOperateMode"] = boost::any(*communityOperateMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationChildInstanceTypes) {
      res["DestinationChildInstanceTypes"] = boost::any(*destinationChildInstanceTypes);
    }
    if (destinationCidrBlocks) {
      res["DestinationCidrBlocks"] = boost::any(*destinationCidrBlocks);
    }
    if (destinationInstanceIds) {
      res["DestinationInstanceIds"] = boost::any(*destinationInstanceIds);
    }
    if (destinationInstanceIdsReverseMatch) {
      res["DestinationInstanceIdsReverseMatch"] = boost::any(*destinationInstanceIdsReverseMatch);
    }
    if (destinationRouteTableIds) {
      res["DestinationRouteTableIds"] = boost::any(*destinationRouteTableIds);
    }
    if (mapResult) {
      res["MapResult"] = boost::any(*mapResult);
    }
    if (matchAsns) {
      res["MatchAsns"] = boost::any(*matchAsns);
    }
    if (matchCommunitySet) {
      res["MatchCommunitySet"] = boost::any(*matchCommunitySet);
    }
    if (nextPriority) {
      res["NextPriority"] = boost::any(*nextPriority);
    }
    if (operateCommunitySet) {
      res["OperateCommunitySet"] = boost::any(*operateCommunitySet);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (preference) {
      res["Preference"] = boost::any(*preference);
    }
    if (prependAsPath) {
      res["PrependAsPath"] = boost::any(*prependAsPath);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeTypes) {
      res["RouteTypes"] = boost::any(*routeTypes);
    }
    if (sourceChildInstanceTypes) {
      res["SourceChildInstanceTypes"] = boost::any(*sourceChildInstanceTypes);
    }
    if (sourceInstanceIds) {
      res["SourceInstanceIds"] = boost::any(*sourceInstanceIds);
    }
    if (sourceInstanceIdsReverseMatch) {
      res["SourceInstanceIdsReverseMatch"] = boost::any(*sourceInstanceIdsReverseMatch);
    }
    if (sourceRegionIds) {
      res["SourceRegionIds"] = boost::any(*sourceRegionIds);
    }
    if (sourceRouteTableIds) {
      res["SourceRouteTableIds"] = boost::any(*sourceRouteTableIds);
    }
    if (transmitDirection) {
      res["TransmitDirection"] = boost::any(*transmitDirection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPathMatchMode") != m.end() && !m["AsPathMatchMode"].empty()) {
      asPathMatchMode = make_shared<string>(boost::any_cast<string>(m["AsPathMatchMode"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenRegionId") != m.end() && !m["CenRegionId"].empty()) {
      cenRegionId = make_shared<string>(boost::any_cast<string>(m["CenRegionId"]));
    }
    if (m.find("CidrMatchMode") != m.end() && !m["CidrMatchMode"].empty()) {
      cidrMatchMode = make_shared<string>(boost::any_cast<string>(m["CidrMatchMode"]));
    }
    if (m.find("CommunityMatchMode") != m.end() && !m["CommunityMatchMode"].empty()) {
      communityMatchMode = make_shared<string>(boost::any_cast<string>(m["CommunityMatchMode"]));
    }
    if (m.find("CommunityOperateMode") != m.end() && !m["CommunityOperateMode"].empty()) {
      communityOperateMode = make_shared<string>(boost::any_cast<string>(m["CommunityOperateMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationChildInstanceTypes") != m.end() && !m["DestinationChildInstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationChildInstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationChildInstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationChildInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationCidrBlocks") != m.end() && !m["DestinationCidrBlocks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationCidrBlocks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationCidrBlocks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationCidrBlocks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationInstanceIds") != m.end() && !m["DestinationInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationInstanceIdsReverseMatch") != m.end() && !m["DestinationInstanceIdsReverseMatch"].empty()) {
      destinationInstanceIdsReverseMatch = make_shared<bool>(boost::any_cast<bool>(m["DestinationInstanceIdsReverseMatch"]));
    }
    if (m.find("DestinationRouteTableIds") != m.end() && !m["DestinationRouteTableIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationRouteTableIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationRouteTableIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationRouteTableIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MapResult") != m.end() && !m["MapResult"].empty()) {
      mapResult = make_shared<string>(boost::any_cast<string>(m["MapResult"]));
    }
    if (m.find("MatchAsns") != m.end() && !m["MatchAsns"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["MatchAsns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MatchAsns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      matchAsns = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MatchCommunitySet") != m.end() && !m["MatchCommunitySet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MatchCommunitySet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MatchCommunitySet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      matchCommunitySet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NextPriority") != m.end() && !m["NextPriority"].empty()) {
      nextPriority = make_shared<long>(boost::any_cast<long>(m["NextPriority"]));
    }
    if (m.find("OperateCommunitySet") != m.end() && !m["OperateCommunitySet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperateCommunitySet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperateCommunitySet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operateCommunitySet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Preference") != m.end() && !m["Preference"].empty()) {
      preference = make_shared<long>(boost::any_cast<long>(m["Preference"]));
    }
    if (m.find("PrependAsPath") != m.end() && !m["PrependAsPath"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["PrependAsPath"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrependAsPath"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      prependAsPath = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteTypes") != m.end() && !m["RouteTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RouteTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RouteTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      routeTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceChildInstanceTypes") != m.end() && !m["SourceChildInstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceChildInstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceChildInstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceChildInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceInstanceIds") != m.end() && !m["SourceInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceInstanceIdsReverseMatch") != m.end() && !m["SourceInstanceIdsReverseMatch"].empty()) {
      sourceInstanceIdsReverseMatch = make_shared<bool>(boost::any_cast<bool>(m["SourceInstanceIdsReverseMatch"]));
    }
    if (m.find("SourceRegionIds") != m.end() && !m["SourceRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceRouteTableIds") != m.end() && !m["SourceRouteTableIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceRouteTableIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceRouteTableIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceRouteTableIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TransmitDirection") != m.end() && !m["TransmitDirection"].empty()) {
      transmitDirection = make_shared<string>(boost::any_cast<string>(m["TransmitDirection"]));
    }
  }


  virtual ~CreateCenRouteMapRequest() = default;
};
class CreateCenRouteMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> routeMapId{};

  CreateCenRouteMapResponseBody() {}

  explicit CreateCenRouteMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (routeMapId) {
      res["RouteMapId"] = boost::any(*routeMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RouteMapId") != m.end() && !m["RouteMapId"].empty()) {
      routeMapId = make_shared<string>(boost::any_cast<string>(m["RouteMapId"]));
    }
  }


  virtual ~CreateCenRouteMapResponseBody() = default;
};
class CreateCenRouteMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCenRouteMapResponseBody> body{};

  CreateCenRouteMapResponse() {}

  explicit CreateCenRouteMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCenRouteMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCenRouteMapResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCenRouteMapResponse() = default;
};
class CreateFlowlogRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> flowLogName{};
  shared_ptr<string> logStoreName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateFlowlogRequest() {}

  explicit CreateFlowlogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flowLogName) {
      res["FlowLogName"] = boost::any(*flowLogName);
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FlowLogName") != m.end() && !m["FlowLogName"].empty()) {
      flowLogName = make_shared<string>(boost::any_cast<string>(m["FlowLogName"]));
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateFlowlogRequest() = default;
};
class CreateFlowlogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> flowLogId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateFlowlogResponseBody() {}

  explicit CreateFlowlogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowLogId) {
      res["FlowLogId"] = boost::any(*flowLogId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowLogId") != m.end() && !m["FlowLogId"].empty()) {
      flowLogId = make_shared<string>(boost::any_cast<string>(m["FlowLogId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~CreateFlowlogResponseBody() = default;
};
class CreateFlowlogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFlowlogResponseBody> body{};

  CreateFlowlogResponse() {}

  explicit CreateFlowlogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFlowlogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowlogResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowlogResponse() = default;
};
class CreateTrafficMarkingPolicyRequestTrafficMatchRules : public Darabonba::Model {
public:
  shared_ptr<string> dstCidr{};
  shared_ptr<vector<long>> dstPortRange{};
  shared_ptr<long> matchDscp{};
  shared_ptr<string> protocol{};
  shared_ptr<string> srcCidr{};
  shared_ptr<vector<long>> srcPortRange{};
  shared_ptr<string> trafficMatchRuleDescription{};
  shared_ptr<string> trafficMatchRuleName{};

  CreateTrafficMarkingPolicyRequestTrafficMatchRules() {}

  explicit CreateTrafficMarkingPolicyRequestTrafficMatchRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstCidr) {
      res["DstCidr"] = boost::any(*dstCidr);
    }
    if (dstPortRange) {
      res["DstPortRange"] = boost::any(*dstPortRange);
    }
    if (matchDscp) {
      res["MatchDscp"] = boost::any(*matchDscp);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (srcCidr) {
      res["SrcCidr"] = boost::any(*srcCidr);
    }
    if (srcPortRange) {
      res["SrcPortRange"] = boost::any(*srcPortRange);
    }
    if (trafficMatchRuleDescription) {
      res["TrafficMatchRuleDescription"] = boost::any(*trafficMatchRuleDescription);
    }
    if (trafficMatchRuleName) {
      res["TrafficMatchRuleName"] = boost::any(*trafficMatchRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstCidr") != m.end() && !m["DstCidr"].empty()) {
      dstCidr = make_shared<string>(boost::any_cast<string>(m["DstCidr"]));
    }
    if (m.find("DstPortRange") != m.end() && !m["DstPortRange"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DstPortRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DstPortRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dstPortRange = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MatchDscp") != m.end() && !m["MatchDscp"].empty()) {
      matchDscp = make_shared<long>(boost::any_cast<long>(m["MatchDscp"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("SrcCidr") != m.end() && !m["SrcCidr"].empty()) {
      srcCidr = make_shared<string>(boost::any_cast<string>(m["SrcCidr"]));
    }
    if (m.find("SrcPortRange") != m.end() && !m["SrcPortRange"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SrcPortRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SrcPortRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      srcPortRange = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TrafficMatchRuleDescription") != m.end() && !m["TrafficMatchRuleDescription"].empty()) {
      trafficMatchRuleDescription = make_shared<string>(boost::any_cast<string>(m["TrafficMatchRuleDescription"]));
    }
    if (m.find("TrafficMatchRuleName") != m.end() && !m["TrafficMatchRuleName"].empty()) {
      trafficMatchRuleName = make_shared<string>(boost::any_cast<string>(m["TrafficMatchRuleName"]));
    }
  }


  virtual ~CreateTrafficMarkingPolicyRequestTrafficMatchRules() = default;
};
class CreateTrafficMarkingPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> markingDscp{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> priority{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trafficMarkingPolicyDescription{};
  shared_ptr<string> trafficMarkingPolicyName{};
  shared_ptr<vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules>> trafficMatchRules{};
  shared_ptr<string> transitRouterId{};

  CreateTrafficMarkingPolicyRequest() {}

  explicit CreateTrafficMarkingPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (markingDscp) {
      res["MarkingDscp"] = boost::any(*markingDscp);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficMarkingPolicyDescription) {
      res["TrafficMarkingPolicyDescription"] = boost::any(*trafficMarkingPolicyDescription);
    }
    if (trafficMarkingPolicyName) {
      res["TrafficMarkingPolicyName"] = boost::any(*trafficMarkingPolicyName);
    }
    if (trafficMatchRules) {
      vector<boost::any> temp1;
      for(auto item1:*trafficMatchRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrafficMatchRules"] = boost::any(temp1);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("MarkingDscp") != m.end() && !m["MarkingDscp"].empty()) {
      markingDscp = make_shared<long>(boost::any_cast<long>(m["MarkingDscp"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficMarkingPolicyDescription") != m.end() && !m["TrafficMarkingPolicyDescription"].empty()) {
      trafficMarkingPolicyDescription = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyDescription"]));
    }
    if (m.find("TrafficMarkingPolicyName") != m.end() && !m["TrafficMarkingPolicyName"].empty()) {
      trafficMarkingPolicyName = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyName"]));
    }
    if (m.find("TrafficMatchRules") != m.end() && !m["TrafficMatchRules"].empty()) {
      if (typeid(vector<boost::any>) == m["TrafficMatchRules"].type()) {
        vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrafficMatchRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTrafficMarkingPolicyRequestTrafficMatchRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trafficMatchRules = make_shared<vector<CreateTrafficMarkingPolicyRequestTrafficMatchRules>>(expect1);
      }
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~CreateTrafficMarkingPolicyRequest() = default;
};
class CreateTrafficMarkingPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> trafficMarkingPolicyId{};

  CreateTrafficMarkingPolicyResponseBody() {}

  explicit CreateTrafficMarkingPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trafficMarkingPolicyId) {
      res["TrafficMarkingPolicyId"] = boost::any(*trafficMarkingPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrafficMarkingPolicyId") != m.end() && !m["TrafficMarkingPolicyId"].empty()) {
      trafficMarkingPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyId"]));
    }
  }


  virtual ~CreateTrafficMarkingPolicyResponseBody() = default;
};
class CreateTrafficMarkingPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTrafficMarkingPolicyResponseBody> body{};

  CreateTrafficMarkingPolicyResponse() {}

  explicit CreateTrafficMarkingPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTrafficMarkingPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTrafficMarkingPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTrafficMarkingPolicyResponse() = default;
};
class CreateTransitRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterDescription{};
  shared_ptr<string> transitRouterName{};

  CreateTransitRouterRequest() {}

  explicit CreateTransitRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterDescription) {
      res["TransitRouterDescription"] = boost::any(*transitRouterDescription);
    }
    if (transitRouterName) {
      res["TransitRouterName"] = boost::any(*transitRouterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterDescription") != m.end() && !m["TransitRouterDescription"].empty()) {
      transitRouterDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterDescription"]));
    }
    if (m.find("TransitRouterName") != m.end() && !m["TransitRouterName"].empty()) {
      transitRouterName = make_shared<string>(boost::any_cast<string>(m["TransitRouterName"]));
    }
  }


  virtual ~CreateTransitRouterRequest() = default;
};
class CreateTransitRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> transitRouterId{};

  CreateTransitRouterResponseBody() {}

  explicit CreateTransitRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~CreateTransitRouterResponseBody() = default;
};
class CreateTransitRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTransitRouterResponseBody> body{};

  CreateTransitRouterResponse() {}

  explicit CreateTransitRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTransitRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTransitRouterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTransitRouterResponse() = default;
};
class CreateTransitRouterPeerAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPublishRouteEnabled{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bandwidthType{};
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> peerTransitRouterId{};
  shared_ptr<string> peerTransitRouterRegionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentDescription{};
  shared_ptr<string> transitRouterAttachmentName{};
  shared_ptr<string> transitRouterId{};

  CreateTransitRouterPeerAttachmentRequest() {}

  explicit CreateTransitRouterPeerAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPublishRouteEnabled) {
      res["AutoPublishRouteEnabled"] = boost::any(*autoPublishRouteEnabled);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bandwidthType) {
      res["BandwidthType"] = boost::any(*bandwidthType);
    }
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (peerTransitRouterId) {
      res["PeerTransitRouterId"] = boost::any(*peerTransitRouterId);
    }
    if (peerTransitRouterRegionId) {
      res["PeerTransitRouterRegionId"] = boost::any(*peerTransitRouterRegionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentDescription) {
      res["TransitRouterAttachmentDescription"] = boost::any(*transitRouterAttachmentDescription);
    }
    if (transitRouterAttachmentName) {
      res["TransitRouterAttachmentName"] = boost::any(*transitRouterAttachmentName);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPublishRouteEnabled") != m.end() && !m["AutoPublishRouteEnabled"].empty()) {
      autoPublishRouteEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoPublishRouteEnabled"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BandwidthType") != m.end() && !m["BandwidthType"].empty()) {
      bandwidthType = make_shared<string>(boost::any_cast<string>(m["BandwidthType"]));
    }
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PeerTransitRouterId") != m.end() && !m["PeerTransitRouterId"].empty()) {
      peerTransitRouterId = make_shared<string>(boost::any_cast<string>(m["PeerTransitRouterId"]));
    }
    if (m.find("PeerTransitRouterRegionId") != m.end() && !m["PeerTransitRouterRegionId"].empty()) {
      peerTransitRouterRegionId = make_shared<string>(boost::any_cast<string>(m["PeerTransitRouterRegionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentDescription") != m.end() && !m["TransitRouterAttachmentDescription"].empty()) {
      transitRouterAttachmentDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentDescription"]));
    }
    if (m.find("TransitRouterAttachmentName") != m.end() && !m["TransitRouterAttachmentName"].empty()) {
      transitRouterAttachmentName = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentName"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~CreateTransitRouterPeerAttachmentRequest() = default;
};
class CreateTransitRouterPeerAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> transitRouterAttachmentId{};

  CreateTransitRouterPeerAttachmentResponseBody() {}

  explicit CreateTransitRouterPeerAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
  }


  virtual ~CreateTransitRouterPeerAttachmentResponseBody() = default;
};
class CreateTransitRouterPeerAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTransitRouterPeerAttachmentResponseBody> body{};

  CreateTransitRouterPeerAttachmentResponse() {}

  explicit CreateTransitRouterPeerAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTransitRouterPeerAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTransitRouterPeerAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTransitRouterPeerAttachmentResponse() = default;
};
class CreateTransitRouterRouteEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterRouteEntryDescription{};
  shared_ptr<string> transitRouterRouteEntryDestinationCidrBlock{};
  shared_ptr<string> transitRouterRouteEntryName{};
  shared_ptr<string> transitRouterRouteEntryNextHopId{};
  shared_ptr<string> transitRouterRouteEntryNextHopType{};
  shared_ptr<string> transitRouterRouteTableId{};

  CreateTransitRouterRouteEntryRequest() {}

  explicit CreateTransitRouterRouteEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterRouteEntryDescription) {
      res["TransitRouterRouteEntryDescription"] = boost::any(*transitRouterRouteEntryDescription);
    }
    if (transitRouterRouteEntryDestinationCidrBlock) {
      res["TransitRouterRouteEntryDestinationCidrBlock"] = boost::any(*transitRouterRouteEntryDestinationCidrBlock);
    }
    if (transitRouterRouteEntryName) {
      res["TransitRouterRouteEntryName"] = boost::any(*transitRouterRouteEntryName);
    }
    if (transitRouterRouteEntryNextHopId) {
      res["TransitRouterRouteEntryNextHopId"] = boost::any(*transitRouterRouteEntryNextHopId);
    }
    if (transitRouterRouteEntryNextHopType) {
      res["TransitRouterRouteEntryNextHopType"] = boost::any(*transitRouterRouteEntryNextHopType);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterRouteEntryDescription") != m.end() && !m["TransitRouterRouteEntryDescription"].empty()) {
      transitRouterRouteEntryDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryDescription"]));
    }
    if (m.find("TransitRouterRouteEntryDestinationCidrBlock") != m.end() && !m["TransitRouterRouteEntryDestinationCidrBlock"].empty()) {
      transitRouterRouteEntryDestinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryDestinationCidrBlock"]));
    }
    if (m.find("TransitRouterRouteEntryName") != m.end() && !m["TransitRouterRouteEntryName"].empty()) {
      transitRouterRouteEntryName = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryName"]));
    }
    if (m.find("TransitRouterRouteEntryNextHopId") != m.end() && !m["TransitRouterRouteEntryNextHopId"].empty()) {
      transitRouterRouteEntryNextHopId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryNextHopId"]));
    }
    if (m.find("TransitRouterRouteEntryNextHopType") != m.end() && !m["TransitRouterRouteEntryNextHopType"].empty()) {
      transitRouterRouteEntryNextHopType = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryNextHopType"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~CreateTransitRouterRouteEntryRequest() = default;
};
class CreateTransitRouterRouteEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> transitRouterRouteEntryId{};

  CreateTransitRouterRouteEntryResponseBody() {}

  explicit CreateTransitRouterRouteEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transitRouterRouteEntryId) {
      res["TransitRouterRouteEntryId"] = boost::any(*transitRouterRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransitRouterRouteEntryId") != m.end() && !m["TransitRouterRouteEntryId"].empty()) {
      transitRouterRouteEntryId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryId"]));
    }
  }


  virtual ~CreateTransitRouterRouteEntryResponseBody() = default;
};
class CreateTransitRouterRouteEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTransitRouterRouteEntryResponseBody> body{};

  CreateTransitRouterRouteEntryResponse() {}

  explicit CreateTransitRouterRouteEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTransitRouterRouteEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTransitRouterRouteEntryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTransitRouterRouteEntryResponse() = default;
};
class CreateTransitRouterRouteTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<string> transitRouterRouteTableDescription{};
  shared_ptr<string> transitRouterRouteTableName{};

  CreateTransitRouterRouteTableRequest() {}

  explicit CreateTransitRouterRouteTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (transitRouterRouteTableDescription) {
      res["TransitRouterRouteTableDescription"] = boost::any(*transitRouterRouteTableDescription);
    }
    if (transitRouterRouteTableName) {
      res["TransitRouterRouteTableName"] = boost::any(*transitRouterRouteTableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("TransitRouterRouteTableDescription") != m.end() && !m["TransitRouterRouteTableDescription"].empty()) {
      transitRouterRouteTableDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableDescription"]));
    }
    if (m.find("TransitRouterRouteTableName") != m.end() && !m["TransitRouterRouteTableName"].empty()) {
      transitRouterRouteTableName = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableName"]));
    }
  }


  virtual ~CreateTransitRouterRouteTableRequest() = default;
};
class CreateTransitRouterRouteTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> transitRouterRouteTableId{};

  CreateTransitRouterRouteTableResponseBody() {}

  explicit CreateTransitRouterRouteTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~CreateTransitRouterRouteTableResponseBody() = default;
};
class CreateTransitRouterRouteTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTransitRouterRouteTableResponseBody> body{};

  CreateTransitRouterRouteTableResponse() {}

  explicit CreateTransitRouterRouteTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTransitRouterRouteTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTransitRouterRouteTableResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTransitRouterRouteTableResponse() = default;
};
class CreateTransitRouterVbrAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPublishRouteEnabled{};
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentDescription{};
  shared_ptr<string> transitRouterAttachmentName{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<string> vbrId{};
  shared_ptr<long> vbrOwnerId{};

  CreateTransitRouterVbrAttachmentRequest() {}

  explicit CreateTransitRouterVbrAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPublishRouteEnabled) {
      res["AutoPublishRouteEnabled"] = boost::any(*autoPublishRouteEnabled);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentDescription) {
      res["TransitRouterAttachmentDescription"] = boost::any(*transitRouterAttachmentDescription);
    }
    if (transitRouterAttachmentName) {
      res["TransitRouterAttachmentName"] = boost::any(*transitRouterAttachmentName);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (vbrId) {
      res["VbrId"] = boost::any(*vbrId);
    }
    if (vbrOwnerId) {
      res["VbrOwnerId"] = boost::any(*vbrOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPublishRouteEnabled") != m.end() && !m["AutoPublishRouteEnabled"].empty()) {
      autoPublishRouteEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoPublishRouteEnabled"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentDescription") != m.end() && !m["TransitRouterAttachmentDescription"].empty()) {
      transitRouterAttachmentDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentDescription"]));
    }
    if (m.find("TransitRouterAttachmentName") != m.end() && !m["TransitRouterAttachmentName"].empty()) {
      transitRouterAttachmentName = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentName"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("VbrId") != m.end() && !m["VbrId"].empty()) {
      vbrId = make_shared<string>(boost::any_cast<string>(m["VbrId"]));
    }
    if (m.find("VbrOwnerId") != m.end() && !m["VbrOwnerId"].empty()) {
      vbrOwnerId = make_shared<long>(boost::any_cast<long>(m["VbrOwnerId"]));
    }
  }


  virtual ~CreateTransitRouterVbrAttachmentRequest() = default;
};
class CreateTransitRouterVbrAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> transitRouterAttachmentId{};

  CreateTransitRouterVbrAttachmentResponseBody() {}

  explicit CreateTransitRouterVbrAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
  }


  virtual ~CreateTransitRouterVbrAttachmentResponseBody() = default;
};
class CreateTransitRouterVbrAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTransitRouterVbrAttachmentResponseBody> body{};

  CreateTransitRouterVbrAttachmentResponse() {}

  explicit CreateTransitRouterVbrAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTransitRouterVbrAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTransitRouterVbrAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTransitRouterVbrAttachmentResponse() = default;
};
class CreateTransitRouterVpcAttachmentRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateTransitRouterVpcAttachmentRequestZoneMappings() {}

  explicit CreateTransitRouterVpcAttachmentRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateTransitRouterVpcAttachmentRequestZoneMappings() = default;
};
class CreateTransitRouterVpcAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentDescription{};
  shared_ptr<string> transitRouterAttachmentName{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> vpcOwnerId{};
  shared_ptr<vector<CreateTransitRouterVpcAttachmentRequestZoneMappings>> zoneMappings{};

  CreateTransitRouterVpcAttachmentRequest() {}

  explicit CreateTransitRouterVpcAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentDescription) {
      res["TransitRouterAttachmentDescription"] = boost::any(*transitRouterAttachmentDescription);
    }
    if (transitRouterAttachmentName) {
      res["TransitRouterAttachmentName"] = boost::any(*transitRouterAttachmentName);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcOwnerId) {
      res["VpcOwnerId"] = boost::any(*vpcOwnerId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentDescription") != m.end() && !m["TransitRouterAttachmentDescription"].empty()) {
      transitRouterAttachmentDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentDescription"]));
    }
    if (m.find("TransitRouterAttachmentName") != m.end() && !m["TransitRouterAttachmentName"].empty()) {
      transitRouterAttachmentName = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentName"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcOwnerId") != m.end() && !m["VpcOwnerId"].empty()) {
      vpcOwnerId = make_shared<long>(boost::any_cast<long>(m["VpcOwnerId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<CreateTransitRouterVpcAttachmentRequestZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTransitRouterVpcAttachmentRequestZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<CreateTransitRouterVpcAttachmentRequestZoneMappings>>(expect1);
      }
    }
  }


  virtual ~CreateTransitRouterVpcAttachmentRequest() = default;
};
class CreateTransitRouterVpcAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> transitRouterAttachmentId{};

  CreateTransitRouterVpcAttachmentResponseBody() {}

  explicit CreateTransitRouterVpcAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
  }


  virtual ~CreateTransitRouterVpcAttachmentResponseBody() = default;
};
class CreateTransitRouterVpcAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTransitRouterVpcAttachmentResponseBody> body{};

  CreateTransitRouterVpcAttachmentResponse() {}

  explicit CreateTransitRouterVpcAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTransitRouterVpcAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTransitRouterVpcAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTransitRouterVpcAttachmentResponse() = default;
};
class DeactiveFlowLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> flowLogId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeactiveFlowLogRequest() {}

  explicit DeactiveFlowLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (flowLogId) {
      res["FlowLogId"] = boost::any(*flowLogId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FlowLogId") != m.end() && !m["FlowLogId"].empty()) {
      flowLogId = make_shared<string>(boost::any_cast<string>(m["FlowLogId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeactiveFlowLogRequest() = default;
};
class DeactiveFlowLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DeactiveFlowLogResponseBody() {}

  explicit DeactiveFlowLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DeactiveFlowLogResponseBody() = default;
};
class DeactiveFlowLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeactiveFlowLogResponseBody> body{};

  DeactiveFlowLogResponse() {}

  explicit DeactiveFlowLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeactiveFlowLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeactiveFlowLogResponseBody>(model1);
      }
    }
  }


  virtual ~DeactiveFlowLogResponse() = default;
};
class DeleteCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteCenRequest() {}

  explicit DeleteCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteCenRequest() = default;
};
class DeleteCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCenResponseBody() {}

  explicit DeleteCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCenResponseBody() = default;
};
class DeleteCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCenResponseBody> body{};

  DeleteCenResponse() {}

  explicit DeleteCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCenResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCenResponse() = default;
};
class DeleteCenBandwidthPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteCenBandwidthPackageRequest() {}

  explicit DeleteCenBandwidthPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteCenBandwidthPackageRequest() = default;
};
class DeleteCenBandwidthPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCenBandwidthPackageResponseBody() {}

  explicit DeleteCenBandwidthPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCenBandwidthPackageResponseBody() = default;
};
class DeleteCenBandwidthPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCenBandwidthPackageResponseBody> body{};

  DeleteCenBandwidthPackageResponse() {}

  explicit DeleteCenBandwidthPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCenBandwidthPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCenBandwidthPackageResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCenBandwidthPackageResponse() = default;
};
class DeleteCenChildInstanceRouteEntryToAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> routeTableId{};
  shared_ptr<string> transitRouterAttachmentId{};

  DeleteCenChildInstanceRouteEntryToAttachmentRequest() {}

  explicit DeleteCenChildInstanceRouteEntryToAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
  }


  virtual ~DeleteCenChildInstanceRouteEntryToAttachmentRequest() = default;
};
class DeleteCenChildInstanceRouteEntryToAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCenChildInstanceRouteEntryToAttachmentResponseBody() {}

  explicit DeleteCenChildInstanceRouteEntryToAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCenChildInstanceRouteEntryToAttachmentResponseBody() = default;
};
class DeleteCenChildInstanceRouteEntryToAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCenChildInstanceRouteEntryToAttachmentResponseBody> body{};

  DeleteCenChildInstanceRouteEntryToAttachmentResponse() {}

  explicit DeleteCenChildInstanceRouteEntryToAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCenChildInstanceRouteEntryToAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCenChildInstanceRouteEntryToAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCenChildInstanceRouteEntryToAttachmentResponse() = default;
};
class DeleteCenChildInstanceRouteEntryToCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> childInstanceAliUid{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> routeTableId{};

  DeleteCenChildInstanceRouteEntryToCenRequest() {}

  explicit DeleteCenChildInstanceRouteEntryToCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceAliUid) {
      res["ChildInstanceAliUid"] = boost::any(*childInstanceAliUid);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceAliUid") != m.end() && !m["ChildInstanceAliUid"].empty()) {
      childInstanceAliUid = make_shared<long>(boost::any_cast<long>(m["ChildInstanceAliUid"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~DeleteCenChildInstanceRouteEntryToCenRequest() = default;
};
class DeleteCenChildInstanceRouteEntryToCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCenChildInstanceRouteEntryToCenResponseBody() {}

  explicit DeleteCenChildInstanceRouteEntryToCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCenChildInstanceRouteEntryToCenResponseBody() = default;
};
class DeleteCenChildInstanceRouteEntryToCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCenChildInstanceRouteEntryToCenResponseBody> body{};

  DeleteCenChildInstanceRouteEntryToCenResponse() {}

  explicit DeleteCenChildInstanceRouteEntryToCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCenChildInstanceRouteEntryToCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCenChildInstanceRouteEntryToCenResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCenChildInstanceRouteEntryToCenResponse() = default;
};
class DeleteCenInterRegionTrafficQosPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trafficQosPolicyId{};

  DeleteCenInterRegionTrafficQosPolicyRequest() {}

  explicit DeleteCenInterRegionTrafficQosPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficQosPolicyId) {
      res["TrafficQosPolicyId"] = boost::any(*trafficQosPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficQosPolicyId") != m.end() && !m["TrafficQosPolicyId"].empty()) {
      trafficQosPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyId"]));
    }
  }


  virtual ~DeleteCenInterRegionTrafficQosPolicyRequest() = default;
};
class DeleteCenInterRegionTrafficQosPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCenInterRegionTrafficQosPolicyResponseBody() {}

  explicit DeleteCenInterRegionTrafficQosPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCenInterRegionTrafficQosPolicyResponseBody() = default;
};
class DeleteCenInterRegionTrafficQosPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCenInterRegionTrafficQosPolicyResponseBody> body{};

  DeleteCenInterRegionTrafficQosPolicyResponse() {}

  explicit DeleteCenInterRegionTrafficQosPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCenInterRegionTrafficQosPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCenInterRegionTrafficQosPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCenInterRegionTrafficQosPolicyResponse() = default;
};
class DeleteCenInterRegionTrafficQosQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> qosQueueId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteCenInterRegionTrafficQosQueueRequest() {}

  explicit DeleteCenInterRegionTrafficQosQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (qosQueueId) {
      res["QosQueueId"] = boost::any(*qosQueueId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QosQueueId") != m.end() && !m["QosQueueId"].empty()) {
      qosQueueId = make_shared<string>(boost::any_cast<string>(m["QosQueueId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteCenInterRegionTrafficQosQueueRequest() = default;
};
class DeleteCenInterRegionTrafficQosQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCenInterRegionTrafficQosQueueResponseBody() {}

  explicit DeleteCenInterRegionTrafficQosQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCenInterRegionTrafficQosQueueResponseBody() = default;
};
class DeleteCenInterRegionTrafficQosQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCenInterRegionTrafficQosQueueResponseBody> body{};

  DeleteCenInterRegionTrafficQosQueueResponse() {}

  explicit DeleteCenInterRegionTrafficQosQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCenInterRegionTrafficQosQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCenInterRegionTrafficQosQueueResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCenInterRegionTrafficQosQueueResponse() = default;
};
class DeleteCenRouteMapRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> cenRegionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> routeMapId{};

  DeleteCenRouteMapRequest() {}

  explicit DeleteCenRouteMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenRegionId) {
      res["CenRegionId"] = boost::any(*cenRegionId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeMapId) {
      res["RouteMapId"] = boost::any(*routeMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenRegionId") != m.end() && !m["CenRegionId"].empty()) {
      cenRegionId = make_shared<string>(boost::any_cast<string>(m["CenRegionId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteMapId") != m.end() && !m["RouteMapId"].empty()) {
      routeMapId = make_shared<string>(boost::any_cast<string>(m["RouteMapId"]));
    }
  }


  virtual ~DeleteCenRouteMapRequest() = default;
};
class DeleteCenRouteMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCenRouteMapResponseBody() {}

  explicit DeleteCenRouteMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCenRouteMapResponseBody() = default;
};
class DeleteCenRouteMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCenRouteMapResponseBody> body{};

  DeleteCenRouteMapResponse() {}

  explicit DeleteCenRouteMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCenRouteMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCenRouteMapResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCenRouteMapResponse() = default;
};
class DeleteFlowlogRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> flowLogId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteFlowlogRequest() {}

  explicit DeleteFlowlogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (flowLogId) {
      res["FlowLogId"] = boost::any(*flowLogId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FlowLogId") != m.end() && !m["FlowLogId"].empty()) {
      flowLogId = make_shared<string>(boost::any_cast<string>(m["FlowLogId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteFlowlogRequest() = default;
};
class DeleteFlowlogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DeleteFlowlogResponseBody() {}

  explicit DeleteFlowlogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DeleteFlowlogResponseBody() = default;
};
class DeleteFlowlogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFlowlogResponseBody> body{};

  DeleteFlowlogResponse() {}

  explicit DeleteFlowlogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFlowlogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFlowlogResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFlowlogResponse() = default;
};
class DeleteRouteServiceInCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessRegionId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> host{};
  shared_ptr<string> hostRegionId{};
  shared_ptr<string> hostVpcId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteRouteServiceInCenRequest() {}

  explicit DeleteRouteServiceInCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRegionId) {
      res["AccessRegionId"] = boost::any(*accessRegionId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (hostRegionId) {
      res["HostRegionId"] = boost::any(*hostRegionId);
    }
    if (hostVpcId) {
      res["HostVpcId"] = boost::any(*hostVpcId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRegionId") != m.end() && !m["AccessRegionId"].empty()) {
      accessRegionId = make_shared<string>(boost::any_cast<string>(m["AccessRegionId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HostRegionId") != m.end() && !m["HostRegionId"].empty()) {
      hostRegionId = make_shared<string>(boost::any_cast<string>(m["HostRegionId"]));
    }
    if (m.find("HostVpcId") != m.end() && !m["HostVpcId"].empty()) {
      hostVpcId = make_shared<string>(boost::any_cast<string>(m["HostVpcId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteRouteServiceInCenRequest() = default;
};
class DeleteRouteServiceInCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRouteServiceInCenResponseBody() {}

  explicit DeleteRouteServiceInCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRouteServiceInCenResponseBody() = default;
};
class DeleteRouteServiceInCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRouteServiceInCenResponseBody> body{};

  DeleteRouteServiceInCenResponse() {}

  explicit DeleteRouteServiceInCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRouteServiceInCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRouteServiceInCenResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRouteServiceInCenResponse() = default;
};
class DeleteTrafficMarkingPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trafficMarkingPolicyId{};

  DeleteTrafficMarkingPolicyRequest() {}

  explicit DeleteTrafficMarkingPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficMarkingPolicyId) {
      res["TrafficMarkingPolicyId"] = boost::any(*trafficMarkingPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficMarkingPolicyId") != m.end() && !m["TrafficMarkingPolicyId"].empty()) {
      trafficMarkingPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyId"]));
    }
  }


  virtual ~DeleteTrafficMarkingPolicyRequest() = default;
};
class DeleteTrafficMarkingPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTrafficMarkingPolicyResponseBody() {}

  explicit DeleteTrafficMarkingPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTrafficMarkingPolicyResponseBody() = default;
};
class DeleteTrafficMarkingPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTrafficMarkingPolicyResponseBody> body{};

  DeleteTrafficMarkingPolicyResponse() {}

  explicit DeleteTrafficMarkingPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTrafficMarkingPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTrafficMarkingPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTrafficMarkingPolicyResponse() = default;
};
class DeleteTransitRouterPeerAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};

  DeleteTransitRouterPeerAttachmentRequest() {}

  explicit DeleteTransitRouterPeerAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
  }


  virtual ~DeleteTransitRouterPeerAttachmentRequest() = default;
};
class DeleteTransitRouterPeerAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTransitRouterPeerAttachmentResponseBody() {}

  explicit DeleteTransitRouterPeerAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTransitRouterPeerAttachmentResponseBody() = default;
};
class DeleteTransitRouterPeerAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTransitRouterPeerAttachmentResponseBody> body{};

  DeleteTransitRouterPeerAttachmentResponse() {}

  explicit DeleteTransitRouterPeerAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTransitRouterPeerAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTransitRouterPeerAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTransitRouterPeerAttachmentResponse() = default;
};
class DeleteTransitRouterRouteEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterRouteEntryDestinationCidrBlock{};
  shared_ptr<string> transitRouterRouteEntryId{};
  shared_ptr<string> transitRouterRouteEntryNextHopId{};
  shared_ptr<string> transitRouterRouteEntryNextHopType{};
  shared_ptr<string> transitRouterRouteTableId{};

  DeleteTransitRouterRouteEntryRequest() {}

  explicit DeleteTransitRouterRouteEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterRouteEntryDestinationCidrBlock) {
      res["TransitRouterRouteEntryDestinationCidrBlock"] = boost::any(*transitRouterRouteEntryDestinationCidrBlock);
    }
    if (transitRouterRouteEntryId) {
      res["TransitRouterRouteEntryId"] = boost::any(*transitRouterRouteEntryId);
    }
    if (transitRouterRouteEntryNextHopId) {
      res["TransitRouterRouteEntryNextHopId"] = boost::any(*transitRouterRouteEntryNextHopId);
    }
    if (transitRouterRouteEntryNextHopType) {
      res["TransitRouterRouteEntryNextHopType"] = boost::any(*transitRouterRouteEntryNextHopType);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterRouteEntryDestinationCidrBlock") != m.end() && !m["TransitRouterRouteEntryDestinationCidrBlock"].empty()) {
      transitRouterRouteEntryDestinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryDestinationCidrBlock"]));
    }
    if (m.find("TransitRouterRouteEntryId") != m.end() && !m["TransitRouterRouteEntryId"].empty()) {
      transitRouterRouteEntryId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryId"]));
    }
    if (m.find("TransitRouterRouteEntryNextHopId") != m.end() && !m["TransitRouterRouteEntryNextHopId"].empty()) {
      transitRouterRouteEntryNextHopId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryNextHopId"]));
    }
    if (m.find("TransitRouterRouteEntryNextHopType") != m.end() && !m["TransitRouterRouteEntryNextHopType"].empty()) {
      transitRouterRouteEntryNextHopType = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryNextHopType"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~DeleteTransitRouterRouteEntryRequest() = default;
};
class DeleteTransitRouterRouteEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTransitRouterRouteEntryResponseBody() {}

  explicit DeleteTransitRouterRouteEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTransitRouterRouteEntryResponseBody() = default;
};
class DeleteTransitRouterRouteEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTransitRouterRouteEntryResponseBody> body{};

  DeleteTransitRouterRouteEntryResponse() {}

  explicit DeleteTransitRouterRouteEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTransitRouterRouteEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTransitRouterRouteEntryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTransitRouterRouteEntryResponse() = default;
};
class DeleteTransitRouterRouteTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterRouteTableId{};

  DeleteTransitRouterRouteTableRequest() {}

  explicit DeleteTransitRouterRouteTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~DeleteTransitRouterRouteTableRequest() = default;
};
class DeleteTransitRouterRouteTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTransitRouterRouteTableResponseBody() {}

  explicit DeleteTransitRouterRouteTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTransitRouterRouteTableResponseBody() = default;
};
class DeleteTransitRouterRouteTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTransitRouterRouteTableResponseBody> body{};

  DeleteTransitRouterRouteTableResponse() {}

  explicit DeleteTransitRouterRouteTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTransitRouterRouteTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTransitRouterRouteTableResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTransitRouterRouteTableResponse() = default;
};
class DeleteTransitRouterVbrAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};

  DeleteTransitRouterVbrAttachmentRequest() {}

  explicit DeleteTransitRouterVbrAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
  }


  virtual ~DeleteTransitRouterVbrAttachmentRequest() = default;
};
class DeleteTransitRouterVbrAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTransitRouterVbrAttachmentResponseBody() {}

  explicit DeleteTransitRouterVbrAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTransitRouterVbrAttachmentResponseBody() = default;
};
class DeleteTransitRouterVbrAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTransitRouterVbrAttachmentResponseBody> body{};

  DeleteTransitRouterVbrAttachmentResponse() {}

  explicit DeleteTransitRouterVbrAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTransitRouterVbrAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTransitRouterVbrAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTransitRouterVbrAttachmentResponse() = default;
};
class DeleteTransitRouterVpcAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};

  DeleteTransitRouterVpcAttachmentRequest() {}

  explicit DeleteTransitRouterVpcAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
  }


  virtual ~DeleteTransitRouterVpcAttachmentRequest() = default;
};
class DeleteTransitRouterVpcAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTransitRouterVpcAttachmentResponseBody() {}

  explicit DeleteTransitRouterVpcAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTransitRouterVpcAttachmentResponseBody() = default;
};
class DeleteTransitRouterVpcAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTransitRouterVpcAttachmentResponseBody> body{};

  DeleteTransitRouterVpcAttachmentResponse() {}

  explicit DeleteTransitRouterVpcAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTransitRouterVpcAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTransitRouterVpcAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTransitRouterVpcAttachmentResponse() = default;
};
class DescribeCenAttachedChildInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeCenAttachedChildInstanceAttributeRequest() {}

  explicit DescribeCenAttachedChildInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeCenAttachedChildInstanceAttributeRequest() = default;
};
class DescribeCenAttachedChildInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceAttachTime{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceName{};
  shared_ptr<long> childInstanceOwnerId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeCenAttachedChildInstanceAttributeResponseBody() {}

  explicit DescribeCenAttachedChildInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceAttachTime) {
      res["ChildInstanceAttachTime"] = boost::any(*childInstanceAttachTime);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceName) {
      res["ChildInstanceName"] = boost::any(*childInstanceName);
    }
    if (childInstanceOwnerId) {
      res["ChildInstanceOwnerId"] = boost::any(*childInstanceOwnerId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceAttachTime") != m.end() && !m["ChildInstanceAttachTime"].empty()) {
      childInstanceAttachTime = make_shared<string>(boost::any_cast<string>(m["ChildInstanceAttachTime"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceName") != m.end() && !m["ChildInstanceName"].empty()) {
      childInstanceName = make_shared<string>(boost::any_cast<string>(m["ChildInstanceName"]));
    }
    if (m.find("ChildInstanceOwnerId") != m.end() && !m["ChildInstanceOwnerId"].empty()) {
      childInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["ChildInstanceOwnerId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCenAttachedChildInstanceAttributeResponseBody() = default;
};
class DescribeCenAttachedChildInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenAttachedChildInstanceAttributeResponseBody> body{};

  DescribeCenAttachedChildInstanceAttributeResponse() {}

  explicit DescribeCenAttachedChildInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenAttachedChildInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenAttachedChildInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenAttachedChildInstanceAttributeResponse() = default;
};
class DescribeCenAttachedChildInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeCenAttachedChildInstancesRequest() {}

  explicit DescribeCenAttachedChildInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeCenAttachedChildInstancesRequest() = default;
};
class DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceAttachTime{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<long> childInstanceOwnerId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> status{};

  DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance() {}

  explicit DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceAttachTime) {
      res["ChildInstanceAttachTime"] = boost::any(*childInstanceAttachTime);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceOwnerId) {
      res["ChildInstanceOwnerId"] = boost::any(*childInstanceOwnerId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceAttachTime") != m.end() && !m["ChildInstanceAttachTime"].empty()) {
      childInstanceAttachTime = make_shared<string>(boost::any_cast<string>(m["ChildInstanceAttachTime"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceOwnerId") != m.end() && !m["ChildInstanceOwnerId"].empty()) {
      childInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["ChildInstanceOwnerId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance() = default;
};
class DescribeCenAttachedChildInstancesResponseBodyChildInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance>> childInstance{};

  DescribeCenAttachedChildInstancesResponseBodyChildInstances() {}

  explicit DescribeCenAttachedChildInstancesResponseBodyChildInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childInstance) {
      vector<boost::any> temp1;
      for(auto item1:*childInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChildInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildInstance") != m.end() && !m["ChildInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["ChildInstance"].type()) {
        vector<DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChildInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childInstance = make_shared<vector<DescribeCenAttachedChildInstancesResponseBodyChildInstancesChildInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeCenAttachedChildInstancesResponseBodyChildInstances() = default;
};
class DescribeCenAttachedChildInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCenAttachedChildInstancesResponseBodyChildInstances> childInstances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCenAttachedChildInstancesResponseBody() {}

  explicit DescribeCenAttachedChildInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childInstances) {
      res["ChildInstances"] = childInstances ? boost::any(childInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildInstances") != m.end() && !m["ChildInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChildInstances"].type()) {
        DescribeCenAttachedChildInstancesResponseBodyChildInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChildInstances"]));
        childInstances = make_shared<DescribeCenAttachedChildInstancesResponseBodyChildInstances>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCenAttachedChildInstancesResponseBody() = default;
};
class DescribeCenAttachedChildInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenAttachedChildInstancesResponseBody> body{};

  DescribeCenAttachedChildInstancesResponse() {}

  explicit DescribeCenAttachedChildInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenAttachedChildInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenAttachedChildInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenAttachedChildInstancesResponse() = default;
};
class DescribeCenBandwidthPackagesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> value{};

  DescribeCenBandwidthPackagesRequestFilter() {}

  explicit DescribeCenBandwidthPackagesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenBandwidthPackagesRequestFilter() = default;
};
class DescribeCenBandwidthPackagesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenBandwidthPackagesRequestFilter>> filter{};
  shared_ptr<bool> includeReservationData{};
  shared_ptr<bool> isOrKey{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeCenBandwidthPackagesRequest() {}

  explicit DescribeCenBandwidthPackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    if (includeReservationData) {
      res["IncludeReservationData"] = boost::any(*includeReservationData);
    }
    if (isOrKey) {
      res["IsOrKey"] = boost::any(*isOrKey);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<DescribeCenBandwidthPackagesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenBandwidthPackagesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<DescribeCenBandwidthPackagesRequestFilter>>(expect1);
      }
    }
    if (m.find("IncludeReservationData") != m.end() && !m["IncludeReservationData"].empty()) {
      includeReservationData = make_shared<bool>(boost::any_cast<bool>(m["IncludeReservationData"]));
    }
    if (m.find("IsOrKey") != m.end() && !m["IsOrKey"].empty()) {
      isOrKey = make_shared<bool>(boost::any_cast<bool>(m["IsOrKey"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeCenBandwidthPackagesRequest() = default;
};
class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cenId{};

  DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds() {}

  explicit DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CenId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CenId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cenId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds() = default;
};
class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthLimit{};
  shared_ptr<string> geographicSpanId{};
  shared_ptr<string> localRegionId{};
  shared_ptr<string> oppositeRegionId{};

  DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit() {}

  explicit DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthLimit) {
      res["BandwidthLimit"] = boost::any(*bandwidthLimit);
    }
    if (geographicSpanId) {
      res["GeographicSpanId"] = boost::any(*geographicSpanId);
    }
    if (localRegionId) {
      res["LocalRegionId"] = boost::any(*localRegionId);
    }
    if (oppositeRegionId) {
      res["OppositeRegionId"] = boost::any(*oppositeRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthLimit") != m.end() && !m["BandwidthLimit"].empty()) {
      bandwidthLimit = make_shared<string>(boost::any_cast<string>(m["BandwidthLimit"]));
    }
    if (m.find("GeographicSpanId") != m.end() && !m["GeographicSpanId"].empty()) {
      geographicSpanId = make_shared<string>(boost::any_cast<string>(m["GeographicSpanId"]));
    }
    if (m.find("LocalRegionId") != m.end() && !m["LocalRegionId"].empty()) {
      localRegionId = make_shared<string>(boost::any_cast<string>(m["LocalRegionId"]));
    }
    if (m.find("OppositeRegionId") != m.end() && !m["OppositeRegionId"].empty()) {
      oppositeRegionId = make_shared<string>(boost::any_cast<string>(m["OppositeRegionId"]));
    }
  }


  virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit() = default;
};
class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit>> orginInterRegionBandwidthLimit{};

  DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits() {}

  explicit DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orginInterRegionBandwidthLimit) {
      vector<boost::any> temp1;
      for(auto item1:*orginInterRegionBandwidthLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrginInterRegionBandwidthLimit"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrginInterRegionBandwidthLimit") != m.end() && !m["OrginInterRegionBandwidthLimit"].empty()) {
      if (typeid(vector<boost::any>) == m["OrginInterRegionBandwidthLimit"].type()) {
        vector<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrginInterRegionBandwidthLimit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orginInterRegionBandwidthLimit = make_shared<vector<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit>>(expect1);
      }
    }
  }


  virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits() = default;
};
class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bandwidthPackageChargeType{};
  shared_ptr<string> businessStatus{};
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds> cenIds{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> geographicRegionAId{};
  shared_ptr<string> geographicRegionBId{};
  shared_ptr<string> geographicSpanId{};
  shared_ptr<string> hasReservationData{};
  shared_ptr<bool> isCrossBorder{};
  shared_ptr<string> name{};
  shared_ptr<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits> orginInterRegionBandwidthLimits{};
  shared_ptr<string> reservationActiveTime{};
  shared_ptr<string> reservationBandwidth{};
  shared_ptr<string> reservationInternetChargeType{};
  shared_ptr<string> reservationOrderType{};
  shared_ptr<string> status{};

  DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage() {}

  explicit DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bandwidthPackageChargeType) {
      res["BandwidthPackageChargeType"] = boost::any(*bandwidthPackageChargeType);
    }
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (cenIds) {
      res["CenIds"] = cenIds ? boost::any(cenIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (geographicRegionAId) {
      res["GeographicRegionAId"] = boost::any(*geographicRegionAId);
    }
    if (geographicRegionBId) {
      res["GeographicRegionBId"] = boost::any(*geographicRegionBId);
    }
    if (geographicSpanId) {
      res["GeographicSpanId"] = boost::any(*geographicSpanId);
    }
    if (hasReservationData) {
      res["HasReservationData"] = boost::any(*hasReservationData);
    }
    if (isCrossBorder) {
      res["IsCrossBorder"] = boost::any(*isCrossBorder);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orginInterRegionBandwidthLimits) {
      res["OrginInterRegionBandwidthLimits"] = orginInterRegionBandwidthLimits ? boost::any(orginInterRegionBandwidthLimits->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reservationActiveTime) {
      res["ReservationActiveTime"] = boost::any(*reservationActiveTime);
    }
    if (reservationBandwidth) {
      res["ReservationBandwidth"] = boost::any(*reservationBandwidth);
    }
    if (reservationInternetChargeType) {
      res["ReservationInternetChargeType"] = boost::any(*reservationInternetChargeType);
    }
    if (reservationOrderType) {
      res["ReservationOrderType"] = boost::any(*reservationOrderType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BandwidthPackageChargeType") != m.end() && !m["BandwidthPackageChargeType"].empty()) {
      bandwidthPackageChargeType = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageChargeType"]));
    }
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("CenIds") != m.end() && !m["CenIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["CenIds"].type()) {
        DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CenIds"]));
        cenIds = make_shared<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds>(model1);
      }
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("GeographicRegionAId") != m.end() && !m["GeographicRegionAId"].empty()) {
      geographicRegionAId = make_shared<string>(boost::any_cast<string>(m["GeographicRegionAId"]));
    }
    if (m.find("GeographicRegionBId") != m.end() && !m["GeographicRegionBId"].empty()) {
      geographicRegionBId = make_shared<string>(boost::any_cast<string>(m["GeographicRegionBId"]));
    }
    if (m.find("GeographicSpanId") != m.end() && !m["GeographicSpanId"].empty()) {
      geographicSpanId = make_shared<string>(boost::any_cast<string>(m["GeographicSpanId"]));
    }
    if (m.find("HasReservationData") != m.end() && !m["HasReservationData"].empty()) {
      hasReservationData = make_shared<string>(boost::any_cast<string>(m["HasReservationData"]));
    }
    if (m.find("IsCrossBorder") != m.end() && !m["IsCrossBorder"].empty()) {
      isCrossBorder = make_shared<bool>(boost::any_cast<bool>(m["IsCrossBorder"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrginInterRegionBandwidthLimits") != m.end() && !m["OrginInterRegionBandwidthLimits"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrginInterRegionBandwidthLimits"].type()) {
        DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrginInterRegionBandwidthLimits"]));
        orginInterRegionBandwidthLimits = make_shared<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits>(model1);
      }
    }
    if (m.find("ReservationActiveTime") != m.end() && !m["ReservationActiveTime"].empty()) {
      reservationActiveTime = make_shared<string>(boost::any_cast<string>(m["ReservationActiveTime"]));
    }
    if (m.find("ReservationBandwidth") != m.end() && !m["ReservationBandwidth"].empty()) {
      reservationBandwidth = make_shared<string>(boost::any_cast<string>(m["ReservationBandwidth"]));
    }
    if (m.find("ReservationInternetChargeType") != m.end() && !m["ReservationInternetChargeType"].empty()) {
      reservationInternetChargeType = make_shared<string>(boost::any_cast<string>(m["ReservationInternetChargeType"]));
    }
    if (m.find("ReservationOrderType") != m.end() && !m["ReservationOrderType"].empty()) {
      reservationOrderType = make_shared<string>(boost::any_cast<string>(m["ReservationOrderType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage() = default;
};
class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage>> cenBandwidthPackage{};

  DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages() {}

  explicit DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenBandwidthPackage) {
      vector<boost::any> temp1;
      for(auto item1:*cenBandwidthPackage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CenBandwidthPackage"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenBandwidthPackage") != m.end() && !m["CenBandwidthPackage"].empty()) {
      if (typeid(vector<boost::any>) == m["CenBandwidthPackage"].type()) {
        vector<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CenBandwidthPackage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cenBandwidthPackage = make_shared<vector<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage>>(expect1);
      }
    }
  }


  virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages() = default;
};
class DescribeCenBandwidthPackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages> cenBandwidthPackages{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCenBandwidthPackagesResponseBody() {}

  explicit DescribeCenBandwidthPackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenBandwidthPackages) {
      res["CenBandwidthPackages"] = cenBandwidthPackages ? boost::any(cenBandwidthPackages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenBandwidthPackages") != m.end() && !m["CenBandwidthPackages"].empty()) {
      if (typeid(map<string, boost::any>) == m["CenBandwidthPackages"].type()) {
        DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CenBandwidthPackages"]));
        cenBandwidthPackages = make_shared<DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackages>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCenBandwidthPackagesResponseBody() = default;
};
class DescribeCenBandwidthPackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenBandwidthPackagesResponseBody> body{};

  DescribeCenBandwidthPackagesResponse() {}

  explicit DescribeCenBandwidthPackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenBandwidthPackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenBandwidthPackagesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenBandwidthPackagesResponse() = default;
};
class DescribeCenChildInstanceRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  DescribeCenChildInstanceRouteEntriesRequest() {}

  explicit DescribeCenChildInstanceRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesRequest() = default;
};
class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths : public Darabonba::Model {
public:
  shared_ptr<vector<string>> asPath{};

  DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths() {}

  explicit DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPath) {
      res["AsPath"] = boost::any(*asPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPath") != m.end() && !m["AsPath"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AsPath"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AsPath"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      asPath = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths() = default;
};
class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> routeMapId{};

  DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord() {}

  explicit DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (routeMapId) {
      res["RouteMapId"] = boost::any(*routeMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RouteMapId") != m.end() && !m["RouteMapId"].empty()) {
      routeMapId = make_shared<string>(boost::any_cast<string>(m["RouteMapId"]));
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord() = default;
};
class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>> cenRouteMapRecord{};

  DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords() {}

  explicit DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenRouteMapRecord) {
      vector<boost::any> temp1;
      for(auto item1:*cenRouteMapRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CenRouteMapRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenRouteMapRecord") != m.end() && !m["CenRouteMapRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["CenRouteMapRecord"].type()) {
        vector<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CenRouteMapRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cenRouteMapRecord = make_shared<vector<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords() = default;
};
class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities : public Darabonba::Model {
public:
  shared_ptr<vector<string>> community{};

  DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities() {}

  explicit DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (community) {
      res["Community"] = boost::any(*community);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Community") != m.end() && !m["Community"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Community"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Community"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      community = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities() = default;
};
class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict() {}

  explicit DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict() = default;
};
class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict>> conflict{};

  DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts() {}

  explicit DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conflict) {
      vector<boost::any> temp1;
      for(auto item1:*conflict){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conflict"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conflict") != m.end() && !m["Conflict"].empty()) {
      if (typeid(vector<boost::any>) == m["Conflict"].type()) {
        vector<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conflict"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conflict = make_shared<vector<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflictsConflict>>(expect1);
      }
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts() = default;
};
class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry : public Darabonba::Model {
public:
  shared_ptr<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths> asPaths{};
  shared_ptr<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords> cenRouteMapRecords{};
  shared_ptr<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities> communities{};
  shared_ptr<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts> conflicts{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> nextHopInstanceId{};
  shared_ptr<string> nextHopRegionId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<bool> operationalMode{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> routeTableId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry() {}

  explicit DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPaths) {
      res["AsPaths"] = asPaths ? boost::any(asPaths->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cenRouteMapRecords) {
      res["CenRouteMapRecords"] = cenRouteMapRecords ? boost::any(cenRouteMapRecords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (communities) {
      res["Communities"] = communities ? boost::any(communities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (conflicts) {
      res["Conflicts"] = conflicts ? boost::any(conflicts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (nextHopInstanceId) {
      res["NextHopInstanceId"] = boost::any(*nextHopInstanceId);
    }
    if (nextHopRegionId) {
      res["NextHopRegionId"] = boost::any(*nextHopRegionId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (operationalMode) {
      res["OperationalMode"] = boost::any(*operationalMode);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPaths") != m.end() && !m["AsPaths"].empty()) {
      if (typeid(map<string, boost::any>) == m["AsPaths"].type()) {
        DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AsPaths"]));
        asPaths = make_shared<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths>(model1);
      }
    }
    if (m.find("CenRouteMapRecords") != m.end() && !m["CenRouteMapRecords"].empty()) {
      if (typeid(map<string, boost::any>) == m["CenRouteMapRecords"].type()) {
        DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CenRouteMapRecords"]));
        cenRouteMapRecords = make_shared<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords>(model1);
      }
    }
    if (m.find("Communities") != m.end() && !m["Communities"].empty()) {
      if (typeid(map<string, boost::any>) == m["Communities"].type()) {
        DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Communities"]));
        communities = make_shared<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities>(model1);
      }
    }
    if (m.find("Conflicts") != m.end() && !m["Conflicts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Conflicts"].type()) {
        DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Conflicts"]));
        conflicts = make_shared<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts>(model1);
      }
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("NextHopInstanceId") != m.end() && !m["NextHopInstanceId"].empty()) {
      nextHopInstanceId = make_shared<string>(boost::any_cast<string>(m["NextHopInstanceId"]));
    }
    if (m.find("NextHopRegionId") != m.end() && !m["NextHopRegionId"].empty()) {
      nextHopRegionId = make_shared<string>(boost::any_cast<string>(m["NextHopRegionId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("OperationalMode") != m.end() && !m["OperationalMode"].empty()) {
      operationalMode = make_shared<bool>(boost::any_cast<bool>(m["OperationalMode"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["PublishStatus"]));
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry() = default;
};
class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>> cenRouteEntry{};

  DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries() {}

  explicit DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenRouteEntry) {
      vector<boost::any> temp1;
      for(auto item1:*cenRouteEntry){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CenRouteEntry"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenRouteEntry") != m.end() && !m["CenRouteEntry"].empty()) {
      if (typeid(vector<boost::any>) == m["CenRouteEntry"].type()) {
        vector<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CenRouteEntry"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cenRouteEntry = make_shared<vector<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>>(expect1);
      }
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries() = default;
};
class DescribeCenChildInstanceRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries> cenRouteEntries{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCenChildInstanceRouteEntriesResponseBody() {}

  explicit DescribeCenChildInstanceRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenRouteEntries) {
      res["CenRouteEntries"] = cenRouteEntries ? boost::any(cenRouteEntries->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenRouteEntries") != m.end() && !m["CenRouteEntries"].empty()) {
      if (typeid(map<string, boost::any>) == m["CenRouteEntries"].type()) {
        DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CenRouteEntries"]));
        cenRouteEntries = make_shared<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponseBody() = default;
};
class DescribeCenChildInstanceRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenChildInstanceRouteEntriesResponseBody> body{};

  DescribeCenChildInstanceRouteEntriesResponse() {}

  explicit DescribeCenChildInstanceRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenChildInstanceRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenChildInstanceRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenChildInstanceRouteEntriesResponse() = default;
};
class DescribeCenGeographicSpanRemainingBandwidthRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> geographicRegionAId{};
  shared_ptr<string> geographicRegionBId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeCenGeographicSpanRemainingBandwidthRequest() {}

  explicit DescribeCenGeographicSpanRemainingBandwidthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (geographicRegionAId) {
      res["GeographicRegionAId"] = boost::any(*geographicRegionAId);
    }
    if (geographicRegionBId) {
      res["GeographicRegionBId"] = boost::any(*geographicRegionBId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("GeographicRegionAId") != m.end() && !m["GeographicRegionAId"].empty()) {
      geographicRegionAId = make_shared<string>(boost::any_cast<string>(m["GeographicRegionAId"]));
    }
    if (m.find("GeographicRegionBId") != m.end() && !m["GeographicRegionBId"].empty()) {
      geographicRegionBId = make_shared<string>(boost::any_cast<string>(m["GeographicRegionBId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeCenGeographicSpanRemainingBandwidthRequest() = default;
};
class DescribeCenGeographicSpanRemainingBandwidthResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> remainingBandwidth{};
  shared_ptr<string> requestId{};

  DescribeCenGeographicSpanRemainingBandwidthResponseBody() {}

  explicit DescribeCenGeographicSpanRemainingBandwidthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remainingBandwidth) {
      res["RemainingBandwidth"] = boost::any(*remainingBandwidth);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemainingBandwidth") != m.end() && !m["RemainingBandwidth"].empty()) {
      remainingBandwidth = make_shared<long>(boost::any_cast<long>(m["RemainingBandwidth"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCenGeographicSpanRemainingBandwidthResponseBody() = default;
};
class DescribeCenGeographicSpanRemainingBandwidthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenGeographicSpanRemainingBandwidthResponseBody> body{};

  DescribeCenGeographicSpanRemainingBandwidthResponse() {}

  explicit DescribeCenGeographicSpanRemainingBandwidthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenGeographicSpanRemainingBandwidthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenGeographicSpanRemainingBandwidthResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenGeographicSpanRemainingBandwidthResponse() = default;
};
class DescribeCenGeographicSpansRequest : public Darabonba::Model {
public:
  shared_ptr<string> geographicSpanId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeCenGeographicSpansRequest() {}

  explicit DescribeCenGeographicSpansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (geographicSpanId) {
      res["GeographicSpanId"] = boost::any(*geographicSpanId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeographicSpanId") != m.end() && !m["GeographicSpanId"].empty()) {
      geographicSpanId = make_shared<string>(boost::any_cast<string>(m["GeographicSpanId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeCenGeographicSpansRequest() = default;
};
class DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel : public Darabonba::Model {
public:
  shared_ptr<string> geographicSpanId{};
  shared_ptr<string> localGeoRegionId{};
  shared_ptr<string> oppositeGeoRegionId{};

  DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel() {}

  explicit DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (geographicSpanId) {
      res["GeographicSpanId"] = boost::any(*geographicSpanId);
    }
    if (localGeoRegionId) {
      res["LocalGeoRegionId"] = boost::any(*localGeoRegionId);
    }
    if (oppositeGeoRegionId) {
      res["OppositeGeoRegionId"] = boost::any(*oppositeGeoRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeographicSpanId") != m.end() && !m["GeographicSpanId"].empty()) {
      geographicSpanId = make_shared<string>(boost::any_cast<string>(m["GeographicSpanId"]));
    }
    if (m.find("LocalGeoRegionId") != m.end() && !m["LocalGeoRegionId"].empty()) {
      localGeoRegionId = make_shared<string>(boost::any_cast<string>(m["LocalGeoRegionId"]));
    }
    if (m.find("OppositeGeoRegionId") != m.end() && !m["OppositeGeoRegionId"].empty()) {
      oppositeGeoRegionId = make_shared<string>(boost::any_cast<string>(m["OppositeGeoRegionId"]));
    }
  }


  virtual ~DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel() = default;
};
class DescribeCenGeographicSpansResponseBodyGeographicSpanModels : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel>> geographicSpanModel{};

  DescribeCenGeographicSpansResponseBodyGeographicSpanModels() {}

  explicit DescribeCenGeographicSpansResponseBodyGeographicSpanModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (geographicSpanModel) {
      vector<boost::any> temp1;
      for(auto item1:*geographicSpanModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GeographicSpanModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeographicSpanModel") != m.end() && !m["GeographicSpanModel"].empty()) {
      if (typeid(vector<boost::any>) == m["GeographicSpanModel"].type()) {
        vector<DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GeographicSpanModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        geographicSpanModel = make_shared<vector<DescribeCenGeographicSpansResponseBodyGeographicSpanModelsGeographicSpanModel>>(expect1);
      }
    }
  }


  virtual ~DescribeCenGeographicSpansResponseBodyGeographicSpanModels() = default;
};
class DescribeCenGeographicSpansResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCenGeographicSpansResponseBodyGeographicSpanModels> geographicSpanModels{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCenGeographicSpansResponseBody() {}

  explicit DescribeCenGeographicSpansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (geographicSpanModels) {
      res["GeographicSpanModels"] = geographicSpanModels ? boost::any(geographicSpanModels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeographicSpanModels") != m.end() && !m["GeographicSpanModels"].empty()) {
      if (typeid(map<string, boost::any>) == m["GeographicSpanModels"].type()) {
        DescribeCenGeographicSpansResponseBodyGeographicSpanModels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GeographicSpanModels"]));
        geographicSpanModels = make_shared<DescribeCenGeographicSpansResponseBodyGeographicSpanModels>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCenGeographicSpansResponseBody() = default;
};
class DescribeCenGeographicSpansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenGeographicSpansResponseBody> body{};

  DescribeCenGeographicSpansResponse() {}

  explicit DescribeCenGeographicSpansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenGeographicSpansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenGeographicSpansResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenGeographicSpansResponse() = default;
};
class DescribeCenInterRegionBandwidthLimitsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeCenInterRegionBandwidthLimitsRequest() {}

  explicit DescribeCenInterRegionBandwidthLimitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeCenInterRegionBandwidthLimitsRequest() = default;
};
class DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit : public Darabonba::Model {
public:
  shared_ptr<long> bandwidthLimit{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> geographicSpanId{};
  shared_ptr<string> localRegionId{};
  shared_ptr<string> oppositeRegionId{};
  shared_ptr<string> status{};

  DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit() {}

  explicit DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthLimit) {
      res["BandwidthLimit"] = boost::any(*bandwidthLimit);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (geographicSpanId) {
      res["GeographicSpanId"] = boost::any(*geographicSpanId);
    }
    if (localRegionId) {
      res["LocalRegionId"] = boost::any(*localRegionId);
    }
    if (oppositeRegionId) {
      res["OppositeRegionId"] = boost::any(*oppositeRegionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthLimit") != m.end() && !m["BandwidthLimit"].empty()) {
      bandwidthLimit = make_shared<long>(boost::any_cast<long>(m["BandwidthLimit"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("GeographicSpanId") != m.end() && !m["GeographicSpanId"].empty()) {
      geographicSpanId = make_shared<string>(boost::any_cast<string>(m["GeographicSpanId"]));
    }
    if (m.find("LocalRegionId") != m.end() && !m["LocalRegionId"].empty()) {
      localRegionId = make_shared<string>(boost::any_cast<string>(m["LocalRegionId"]));
    }
    if (m.find("OppositeRegionId") != m.end() && !m["OppositeRegionId"].empty()) {
      oppositeRegionId = make_shared<string>(boost::any_cast<string>(m["OppositeRegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit() = default;
};
class DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit>> cenInterRegionBandwidthLimit{};

  DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits() {}

  explicit DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenInterRegionBandwidthLimit) {
      vector<boost::any> temp1;
      for(auto item1:*cenInterRegionBandwidthLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CenInterRegionBandwidthLimit"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenInterRegionBandwidthLimit") != m.end() && !m["CenInterRegionBandwidthLimit"].empty()) {
      if (typeid(vector<boost::any>) == m["CenInterRegionBandwidthLimit"].type()) {
        vector<DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CenInterRegionBandwidthLimit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cenInterRegionBandwidthLimit = make_shared<vector<DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit>>(expect1);
      }
    }
  }


  virtual ~DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits() = default;
};
class DescribeCenInterRegionBandwidthLimitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits> cenInterRegionBandwidthLimits{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCenInterRegionBandwidthLimitsResponseBody() {}

  explicit DescribeCenInterRegionBandwidthLimitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenInterRegionBandwidthLimits) {
      res["CenInterRegionBandwidthLimits"] = cenInterRegionBandwidthLimits ? boost::any(cenInterRegionBandwidthLimits->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenInterRegionBandwidthLimits") != m.end() && !m["CenInterRegionBandwidthLimits"].empty()) {
      if (typeid(map<string, boost::any>) == m["CenInterRegionBandwidthLimits"].type()) {
        DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CenInterRegionBandwidthLimits"]));
        cenInterRegionBandwidthLimits = make_shared<DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCenInterRegionBandwidthLimitsResponseBody() = default;
};
class DescribeCenInterRegionBandwidthLimitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenInterRegionBandwidthLimitsResponseBody> body{};

  DescribeCenInterRegionBandwidthLimitsResponse() {}

  explicit DescribeCenInterRegionBandwidthLimitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenInterRegionBandwidthLimitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenInterRegionBandwidthLimitsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenInterRegionBandwidthLimitsResponse() = default;
};
class DescribeCenPrivateZoneRoutesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessRegionId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> hostRegionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeCenPrivateZoneRoutesRequest() {}

  explicit DescribeCenPrivateZoneRoutesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRegionId) {
      res["AccessRegionId"] = boost::any(*accessRegionId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (hostRegionId) {
      res["HostRegionId"] = boost::any(*hostRegionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRegionId") != m.end() && !m["AccessRegionId"].empty()) {
      accessRegionId = make_shared<string>(boost::any_cast<string>(m["AccessRegionId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("HostRegionId") != m.end() && !m["HostRegionId"].empty()) {
      hostRegionId = make_shared<string>(boost::any_cast<string>(m["HostRegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeCenPrivateZoneRoutesRequest() = default;
};
class DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessRegionId{};
  shared_ptr<string> hostRegionId{};
  shared_ptr<string> hostVpcId{};
  shared_ptr<string> status{};

  DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo() {}

  explicit DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRegionId) {
      res["AccessRegionId"] = boost::any(*accessRegionId);
    }
    if (hostRegionId) {
      res["HostRegionId"] = boost::any(*hostRegionId);
    }
    if (hostVpcId) {
      res["HostVpcId"] = boost::any(*hostVpcId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRegionId") != m.end() && !m["AccessRegionId"].empty()) {
      accessRegionId = make_shared<string>(boost::any_cast<string>(m["AccessRegionId"]));
    }
    if (m.find("HostRegionId") != m.end() && !m["HostRegionId"].empty()) {
      hostRegionId = make_shared<string>(boost::any_cast<string>(m["HostRegionId"]));
    }
    if (m.find("HostVpcId") != m.end() && !m["HostVpcId"].empty()) {
      hostVpcId = make_shared<string>(boost::any_cast<string>(m["HostVpcId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo() = default;
};
class DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo>> privateZoneInfo{};

  DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos() {}

  explicit DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privateZoneInfo) {
      vector<boost::any> temp1;
      for(auto item1:*privateZoneInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrivateZoneInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivateZoneInfo") != m.end() && !m["PrivateZoneInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PrivateZoneInfo"].type()) {
        vector<DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrivateZoneInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateZoneInfo = make_shared<vector<DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos() = default;
};
class DescribeCenPrivateZoneRoutesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> privateZoneDnsServers{};
  shared_ptr<DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos> privateZoneInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCenPrivateZoneRoutesResponseBody() {}

  explicit DescribeCenPrivateZoneRoutesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (privateZoneDnsServers) {
      res["PrivateZoneDnsServers"] = boost::any(*privateZoneDnsServers);
    }
    if (privateZoneInfos) {
      res["PrivateZoneInfos"] = privateZoneInfos ? boost::any(privateZoneInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrivateZoneDnsServers") != m.end() && !m["PrivateZoneDnsServers"].empty()) {
      privateZoneDnsServers = make_shared<string>(boost::any_cast<string>(m["PrivateZoneDnsServers"]));
    }
    if (m.find("PrivateZoneInfos") != m.end() && !m["PrivateZoneInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivateZoneInfos"].type()) {
        DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivateZoneInfos"]));
        privateZoneInfos = make_shared<DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCenPrivateZoneRoutesResponseBody() = default;
};
class DescribeCenPrivateZoneRoutesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenPrivateZoneRoutesResponseBody> body{};

  DescribeCenPrivateZoneRoutesResponse() {}

  explicit DescribeCenPrivateZoneRoutesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenPrivateZoneRoutesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenPrivateZoneRoutesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenPrivateZoneRoutesResponse() = default;
};
class DescribeCenRegionDomainRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> cenRegionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  DescribeCenRegionDomainRouteEntriesRequest() {}

  explicit DescribeCenRegionDomainRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenRegionId) {
      res["CenRegionId"] = boost::any(*cenRegionId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenRegionId") != m.end() && !m["CenRegionId"].empty()) {
      cenRegionId = make_shared<string>(boost::any_cast<string>(m["CenRegionId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesRequest() = default;
};
class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths : public Darabonba::Model {
public:
  shared_ptr<vector<string>> asPath{};

  DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths() {}

  explicit DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPath) {
      res["AsPath"] = boost::any(*asPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPath") != m.end() && !m["AsPath"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AsPath"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AsPath"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      asPath = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths() = default;
};
class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> routeMapId{};

  DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord() {}

  explicit DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (routeMapId) {
      res["RouteMapId"] = boost::any(*routeMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RouteMapId") != m.end() && !m["RouteMapId"].empty()) {
      routeMapId = make_shared<string>(boost::any_cast<string>(m["RouteMapId"]));
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord() = default;
};
class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord>> cenOutRouteMapRecord{};

  DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords() {}

  explicit DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenOutRouteMapRecord) {
      vector<boost::any> temp1;
      for(auto item1:*cenOutRouteMapRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CenOutRouteMapRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenOutRouteMapRecord") != m.end() && !m["CenOutRouteMapRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["CenOutRouteMapRecord"].type()) {
        vector<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CenOutRouteMapRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cenOutRouteMapRecord = make_shared<vector<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecordsCenOutRouteMapRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords() = default;
};
class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> routeMapId{};

  DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord() {}

  explicit DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (routeMapId) {
      res["RouteMapId"] = boost::any(*routeMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RouteMapId") != m.end() && !m["RouteMapId"].empty()) {
      routeMapId = make_shared<string>(boost::any_cast<string>(m["RouteMapId"]));
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord() = default;
};
class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>> cenRouteMapRecord{};

  DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords() {}

  explicit DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenRouteMapRecord) {
      vector<boost::any> temp1;
      for(auto item1:*cenRouteMapRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CenRouteMapRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenRouteMapRecord") != m.end() && !m["CenRouteMapRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["CenRouteMapRecord"].type()) {
        vector<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CenRouteMapRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cenRouteMapRecord = make_shared<vector<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecordsCenRouteMapRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords() = default;
};
class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities : public Darabonba::Model {
public:
  shared_ptr<vector<string>> community{};

  DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities() {}

  explicit DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (community) {
      res["Community"] = boost::any(*community);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Community") != m.end() && !m["Community"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Community"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Community"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      community = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities() = default;
};
class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry : public Darabonba::Model {
public:
  shared_ptr<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths> asPaths{};
  shared_ptr<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords> cenOutRouteMapRecords{};
  shared_ptr<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords> cenRouteMapRecords{};
  shared_ptr<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities> communities{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> nextHopInstanceId{};
  shared_ptr<string> nextHopRegionId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<long> preference{};
  shared_ptr<string> status{};
  shared_ptr<string> toOtherRegionStatus{};
  shared_ptr<string> type{};

  DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry() {}

  explicit DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPaths) {
      res["AsPaths"] = asPaths ? boost::any(asPaths->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cenOutRouteMapRecords) {
      res["CenOutRouteMapRecords"] = cenOutRouteMapRecords ? boost::any(cenOutRouteMapRecords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cenRouteMapRecords) {
      res["CenRouteMapRecords"] = cenRouteMapRecords ? boost::any(cenRouteMapRecords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (communities) {
      res["Communities"] = communities ? boost::any(communities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (nextHopInstanceId) {
      res["NextHopInstanceId"] = boost::any(*nextHopInstanceId);
    }
    if (nextHopRegionId) {
      res["NextHopRegionId"] = boost::any(*nextHopRegionId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (preference) {
      res["Preference"] = boost::any(*preference);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (toOtherRegionStatus) {
      res["ToOtherRegionStatus"] = boost::any(*toOtherRegionStatus);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPaths") != m.end() && !m["AsPaths"].empty()) {
      if (typeid(map<string, boost::any>) == m["AsPaths"].type()) {
        DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AsPaths"]));
        asPaths = make_shared<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths>(model1);
      }
    }
    if (m.find("CenOutRouteMapRecords") != m.end() && !m["CenOutRouteMapRecords"].empty()) {
      if (typeid(map<string, boost::any>) == m["CenOutRouteMapRecords"].type()) {
        DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CenOutRouteMapRecords"]));
        cenOutRouteMapRecords = make_shared<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenOutRouteMapRecords>(model1);
      }
    }
    if (m.find("CenRouteMapRecords") != m.end() && !m["CenRouteMapRecords"].empty()) {
      if (typeid(map<string, boost::any>) == m["CenRouteMapRecords"].type()) {
        DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CenRouteMapRecords"]));
        cenRouteMapRecords = make_shared<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords>(model1);
      }
    }
    if (m.find("Communities") != m.end() && !m["Communities"].empty()) {
      if (typeid(map<string, boost::any>) == m["Communities"].type()) {
        DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Communities"]));
        communities = make_shared<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities>(model1);
      }
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("NextHopInstanceId") != m.end() && !m["NextHopInstanceId"].empty()) {
      nextHopInstanceId = make_shared<string>(boost::any_cast<string>(m["NextHopInstanceId"]));
    }
    if (m.find("NextHopRegionId") != m.end() && !m["NextHopRegionId"].empty()) {
      nextHopRegionId = make_shared<string>(boost::any_cast<string>(m["NextHopRegionId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("Preference") != m.end() && !m["Preference"].empty()) {
      preference = make_shared<long>(boost::any_cast<long>(m["Preference"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ToOtherRegionStatus") != m.end() && !m["ToOtherRegionStatus"].empty()) {
      toOtherRegionStatus = make_shared<string>(boost::any_cast<string>(m["ToOtherRegionStatus"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry() = default;
};
class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>> cenRouteEntry{};

  DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries() {}

  explicit DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenRouteEntry) {
      vector<boost::any> temp1;
      for(auto item1:*cenRouteEntry){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CenRouteEntry"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenRouteEntry") != m.end() && !m["CenRouteEntry"].empty()) {
      if (typeid(vector<boost::any>) == m["CenRouteEntry"].type()) {
        vector<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CenRouteEntry"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cenRouteEntry = make_shared<vector<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry>>(expect1);
      }
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries() = default;
};
class DescribeCenRegionDomainRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries> cenRouteEntries{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCenRegionDomainRouteEntriesResponseBody() {}

  explicit DescribeCenRegionDomainRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenRouteEntries) {
      res["CenRouteEntries"] = cenRouteEntries ? boost::any(cenRouteEntries->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenRouteEntries") != m.end() && !m["CenRouteEntries"].empty()) {
      if (typeid(map<string, boost::any>) == m["CenRouteEntries"].type()) {
        DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CenRouteEntries"]));
        cenRouteEntries = make_shared<DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntries>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponseBody() = default;
};
class DescribeCenRegionDomainRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenRegionDomainRouteEntriesResponseBody> body{};

  DescribeCenRegionDomainRouteEntriesResponse() {}

  explicit DescribeCenRegionDomainRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenRegionDomainRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenRegionDomainRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenRegionDomainRouteEntriesResponse() = default;
};
class DescribeCenRouteMapsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> cenRegionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> routeMapId{};
  shared_ptr<string> transmitDirection{};

  DescribeCenRouteMapsRequest() {}

  explicit DescribeCenRouteMapsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenRegionId) {
      res["CenRegionId"] = boost::any(*cenRegionId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeMapId) {
      res["RouteMapId"] = boost::any(*routeMapId);
    }
    if (transmitDirection) {
      res["TransmitDirection"] = boost::any(*transmitDirection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenRegionId") != m.end() && !m["CenRegionId"].empty()) {
      cenRegionId = make_shared<string>(boost::any_cast<string>(m["CenRegionId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteMapId") != m.end() && !m["RouteMapId"].empty()) {
      routeMapId = make_shared<string>(boost::any_cast<string>(m["RouteMapId"]));
    }
    if (m.find("TransmitDirection") != m.end() && !m["TransmitDirection"].empty()) {
      transmitDirection = make_shared<string>(boost::any_cast<string>(m["TransmitDirection"]));
    }
  }


  virtual ~DescribeCenRouteMapsRequest() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> destinationChildInstanceType{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationChildInstanceType) {
      res["DestinationChildInstanceType"] = boost::any(*destinationChildInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationChildInstanceType") != m.end() && !m["DestinationChildInstanceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationChildInstanceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationChildInstanceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationChildInstanceType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks : public Darabonba::Model {
public:
  shared_ptr<vector<string>> destinationCidrBlock{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationCidrBlock"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationCidrBlock"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationCidrBlock = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> destinationInstanceId{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationInstanceId) {
      res["DestinationInstanceId"] = boost::any(*destinationInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationInstanceId") != m.end() && !m["DestinationInstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> destinationRouteTableId{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationRouteTableId) {
      res["DestinationRouteTableId"] = boost::any(*destinationRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationRouteTableId") != m.end() && !m["DestinationRouteTableId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationRouteTableId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationRouteTableId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationRouteTableId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns : public Darabonba::Model {
public:
  shared_ptr<vector<string>> matchAsn{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchAsn) {
      res["MatchAsn"] = boost::any(*matchAsn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchAsn") != m.end() && !m["MatchAsn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MatchAsn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MatchAsn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      matchAsn = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet : public Darabonba::Model {
public:
  shared_ptr<vector<string>> matchCommunity{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchCommunity) {
      res["MatchCommunity"] = boost::any(*matchCommunity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchCommunity") != m.end() && !m["MatchCommunity"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MatchCommunity"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MatchCommunity"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      matchCommunity = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet : public Darabonba::Model {
public:
  shared_ptr<vector<string>> operateCommunity{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateCommunity) {
      res["OperateCommunity"] = boost::any(*operateCommunity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateCommunity") != m.end() && !m["OperateCommunity"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperateCommunity"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperateCommunity"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operateCommunity = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath : public Darabonba::Model {
public:
  shared_ptr<vector<string>> asPath{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPath) {
      res["AsPath"] = boost::any(*asPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPath") != m.end() && !m["AsPath"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AsPath"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AsPath"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      asPath = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> routeType{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RouteType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RouteType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      routeType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> sourceChildInstanceType{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceChildInstanceType) {
      res["SourceChildInstanceType"] = boost::any(*sourceChildInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceChildInstanceType") != m.end() && !m["SourceChildInstanceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceChildInstanceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceChildInstanceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceChildInstanceType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> sourceInstanceId{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceInstanceId) {
      res["SourceInstanceId"] = boost::any(*sourceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceInstanceId") != m.end() && !m["SourceInstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> sourceRegionId{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceRegionId) {
      res["SourceRegionId"] = boost::any(*sourceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceRegionId") != m.end() && !m["SourceRegionId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceRegionId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceRegionId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceRegionId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> sourceRouteTableId{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceRouteTableId) {
      res["SourceRouteTableId"] = boost::any(*sourceRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceRouteTableId") != m.end() && !m["SourceRouteTableId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceRouteTableId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceRouteTableId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceRouteTableId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMapsRouteMap : public Darabonba::Model {
public:
  shared_ptr<string> asPathMatchMode{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cenRegionId{};
  shared_ptr<string> cidrMatchMode{};
  shared_ptr<string> communityMatchMode{};
  shared_ptr<string> communityOperateMode{};
  shared_ptr<string> description{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes> destinationChildInstanceTypes{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks> destinationCidrBlocks{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds> destinationInstanceIds{};
  shared_ptr<bool> destinationInstanceIdsReverseMatch{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds> destinationRouteTableIds{};
  shared_ptr<string> mapResult{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns> matchAsns{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet> matchCommunitySet{};
  shared_ptr<long> nextPriority{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet> operateCommunitySet{};
  shared_ptr<long> preference{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath> prependAsPath{};
  shared_ptr<long> priority{};
  shared_ptr<string> routeMapId{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes> routeTypes{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes> sourceChildInstanceTypes{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds> sourceInstanceIds{};
  shared_ptr<bool> sourceInstanceIdsReverseMatch{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds> sourceRegionIds{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds> sourceRouteTableIds{};
  shared_ptr<string> status{};
  shared_ptr<string> transmitDirection{};

  DescribeCenRouteMapsResponseBodyRouteMapsRouteMap() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMapsRouteMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPathMatchMode) {
      res["AsPathMatchMode"] = boost::any(*asPathMatchMode);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenRegionId) {
      res["CenRegionId"] = boost::any(*cenRegionId);
    }
    if (cidrMatchMode) {
      res["CidrMatchMode"] = boost::any(*cidrMatchMode);
    }
    if (communityMatchMode) {
      res["CommunityMatchMode"] = boost::any(*communityMatchMode);
    }
    if (communityOperateMode) {
      res["CommunityOperateMode"] = boost::any(*communityOperateMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationChildInstanceTypes) {
      res["DestinationChildInstanceTypes"] = destinationChildInstanceTypes ? boost::any(destinationChildInstanceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationCidrBlocks) {
      res["DestinationCidrBlocks"] = destinationCidrBlocks ? boost::any(destinationCidrBlocks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationInstanceIds) {
      res["DestinationInstanceIds"] = destinationInstanceIds ? boost::any(destinationInstanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationInstanceIdsReverseMatch) {
      res["DestinationInstanceIdsReverseMatch"] = boost::any(*destinationInstanceIdsReverseMatch);
    }
    if (destinationRouteTableIds) {
      res["DestinationRouteTableIds"] = destinationRouteTableIds ? boost::any(destinationRouteTableIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mapResult) {
      res["MapResult"] = boost::any(*mapResult);
    }
    if (matchAsns) {
      res["MatchAsns"] = matchAsns ? boost::any(matchAsns->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (matchCommunitySet) {
      res["MatchCommunitySet"] = matchCommunitySet ? boost::any(matchCommunitySet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPriority) {
      res["NextPriority"] = boost::any(*nextPriority);
    }
    if (operateCommunitySet) {
      res["OperateCommunitySet"] = operateCommunitySet ? boost::any(operateCommunitySet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preference) {
      res["Preference"] = boost::any(*preference);
    }
    if (prependAsPath) {
      res["PrependAsPath"] = prependAsPath ? boost::any(prependAsPath->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (routeMapId) {
      res["RouteMapId"] = boost::any(*routeMapId);
    }
    if (routeTypes) {
      res["RouteTypes"] = routeTypes ? boost::any(routeTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceChildInstanceTypes) {
      res["SourceChildInstanceTypes"] = sourceChildInstanceTypes ? boost::any(sourceChildInstanceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceInstanceIds) {
      res["SourceInstanceIds"] = sourceInstanceIds ? boost::any(sourceInstanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceInstanceIdsReverseMatch) {
      res["SourceInstanceIdsReverseMatch"] = boost::any(*sourceInstanceIdsReverseMatch);
    }
    if (sourceRegionIds) {
      res["SourceRegionIds"] = sourceRegionIds ? boost::any(sourceRegionIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRouteTableIds) {
      res["SourceRouteTableIds"] = sourceRouteTableIds ? boost::any(sourceRouteTableIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transmitDirection) {
      res["TransmitDirection"] = boost::any(*transmitDirection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPathMatchMode") != m.end() && !m["AsPathMatchMode"].empty()) {
      asPathMatchMode = make_shared<string>(boost::any_cast<string>(m["AsPathMatchMode"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenRegionId") != m.end() && !m["CenRegionId"].empty()) {
      cenRegionId = make_shared<string>(boost::any_cast<string>(m["CenRegionId"]));
    }
    if (m.find("CidrMatchMode") != m.end() && !m["CidrMatchMode"].empty()) {
      cidrMatchMode = make_shared<string>(boost::any_cast<string>(m["CidrMatchMode"]));
    }
    if (m.find("CommunityMatchMode") != m.end() && !m["CommunityMatchMode"].empty()) {
      communityMatchMode = make_shared<string>(boost::any_cast<string>(m["CommunityMatchMode"]));
    }
    if (m.find("CommunityOperateMode") != m.end() && !m["CommunityOperateMode"].empty()) {
      communityOperateMode = make_shared<string>(boost::any_cast<string>(m["CommunityOperateMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationChildInstanceTypes") != m.end() && !m["DestinationChildInstanceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationChildInstanceTypes"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationChildInstanceTypes"]));
        destinationChildInstanceTypes = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes>(model1);
      }
    }
    if (m.find("DestinationCidrBlocks") != m.end() && !m["DestinationCidrBlocks"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationCidrBlocks"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationCidrBlocks"]));
        destinationCidrBlocks = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationCidrBlocks>(model1);
      }
    }
    if (m.find("DestinationInstanceIds") != m.end() && !m["DestinationInstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationInstanceIds"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationInstanceIds"]));
        destinationInstanceIds = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds>(model1);
      }
    }
    if (m.find("DestinationInstanceIdsReverseMatch") != m.end() && !m["DestinationInstanceIdsReverseMatch"].empty()) {
      destinationInstanceIdsReverseMatch = make_shared<bool>(boost::any_cast<bool>(m["DestinationInstanceIdsReverseMatch"]));
    }
    if (m.find("DestinationRouteTableIds") != m.end() && !m["DestinationRouteTableIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationRouteTableIds"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationRouteTableIds"]));
        destinationRouteTableIds = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds>(model1);
      }
    }
    if (m.find("MapResult") != m.end() && !m["MapResult"].empty()) {
      mapResult = make_shared<string>(boost::any_cast<string>(m["MapResult"]));
    }
    if (m.find("MatchAsns") != m.end() && !m["MatchAsns"].empty()) {
      if (typeid(map<string, boost::any>) == m["MatchAsns"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MatchAsns"]));
        matchAsns = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns>(model1);
      }
    }
    if (m.find("MatchCommunitySet") != m.end() && !m["MatchCommunitySet"].empty()) {
      if (typeid(map<string, boost::any>) == m["MatchCommunitySet"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MatchCommunitySet"]));
        matchCommunitySet = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet>(model1);
      }
    }
    if (m.find("NextPriority") != m.end() && !m["NextPriority"].empty()) {
      nextPriority = make_shared<long>(boost::any_cast<long>(m["NextPriority"]));
    }
    if (m.find("OperateCommunitySet") != m.end() && !m["OperateCommunitySet"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateCommunitySet"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateCommunitySet"]));
        operateCommunitySet = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet>(model1);
      }
    }
    if (m.find("Preference") != m.end() && !m["Preference"].empty()) {
      preference = make_shared<long>(boost::any_cast<long>(m["Preference"]));
    }
    if (m.find("PrependAsPath") != m.end() && !m["PrependAsPath"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrependAsPath"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrependAsPath"]));
        prependAsPath = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath>(model1);
      }
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RouteMapId") != m.end() && !m["RouteMapId"].empty()) {
      routeMapId = make_shared<string>(boost::any_cast<string>(m["RouteMapId"]));
    }
    if (m.find("RouteTypes") != m.end() && !m["RouteTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["RouteTypes"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RouteTypes"]));
        routeTypes = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes>(model1);
      }
    }
    if (m.find("SourceChildInstanceTypes") != m.end() && !m["SourceChildInstanceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceChildInstanceTypes"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceChildInstanceTypes"]));
        sourceChildInstanceTypes = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes>(model1);
      }
    }
    if (m.find("SourceInstanceIds") != m.end() && !m["SourceInstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceInstanceIds"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceInstanceIds"]));
        sourceInstanceIds = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds>(model1);
      }
    }
    if (m.find("SourceInstanceIdsReverseMatch") != m.end() && !m["SourceInstanceIdsReverseMatch"].empty()) {
      sourceInstanceIdsReverseMatch = make_shared<bool>(boost::any_cast<bool>(m["SourceInstanceIdsReverseMatch"]));
    }
    if (m.find("SourceRegionIds") != m.end() && !m["SourceRegionIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRegionIds"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRegionIds"]));
        sourceRegionIds = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds>(model1);
      }
    }
    if (m.find("SourceRouteTableIds") != m.end() && !m["SourceRouteTableIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRouteTableIds"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRouteTableIds"]));
        sourceRouteTableIds = make_shared<DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransmitDirection") != m.end() && !m["TransmitDirection"].empty()) {
      transmitDirection = make_shared<string>(boost::any_cast<string>(m["TransmitDirection"]));
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMap() = default;
};
class DescribeCenRouteMapsResponseBodyRouteMaps : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenRouteMapsResponseBodyRouteMapsRouteMap>> routeMap{};

  DescribeCenRouteMapsResponseBodyRouteMaps() {}

  explicit DescribeCenRouteMapsResponseBodyRouteMaps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeMap) {
      vector<boost::any> temp1;
      for(auto item1:*routeMap){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteMap"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteMap") != m.end() && !m["RouteMap"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteMap"].type()) {
        vector<DescribeCenRouteMapsResponseBodyRouteMapsRouteMap> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteMap"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenRouteMapsResponseBodyRouteMapsRouteMap model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeMap = make_shared<vector<DescribeCenRouteMapsResponseBodyRouteMapsRouteMap>>(expect1);
      }
    }
  }


  virtual ~DescribeCenRouteMapsResponseBodyRouteMaps() = default;
};
class DescribeCenRouteMapsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeCenRouteMapsResponseBodyRouteMaps> routeMaps{};
  shared_ptr<long> totalCount{};

  DescribeCenRouteMapsResponseBody() {}

  explicit DescribeCenRouteMapsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (routeMaps) {
      res["RouteMaps"] = routeMaps ? boost::any(routeMaps->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RouteMaps") != m.end() && !m["RouteMaps"].empty()) {
      if (typeid(map<string, boost::any>) == m["RouteMaps"].type()) {
        DescribeCenRouteMapsResponseBodyRouteMaps model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RouteMaps"]));
        routeMaps = make_shared<DescribeCenRouteMapsResponseBodyRouteMaps>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCenRouteMapsResponseBody() = default;
};
class DescribeCenRouteMapsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenRouteMapsResponseBody> body{};

  DescribeCenRouteMapsResponse() {}

  explicit DescribeCenRouteMapsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenRouteMapsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenRouteMapsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenRouteMapsResponse() = default;
};
class DescribeCenVbrHealthCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vbrInstanceId{};
  shared_ptr<long> vbrInstanceOwnerId{};
  shared_ptr<string> vbrInstanceRegionId{};

  DescribeCenVbrHealthCheckRequest() {}

  explicit DescribeCenVbrHealthCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (vbrInstanceId) {
      res["VbrInstanceId"] = boost::any(*vbrInstanceId);
    }
    if (vbrInstanceOwnerId) {
      res["VbrInstanceOwnerId"] = boost::any(*vbrInstanceOwnerId);
    }
    if (vbrInstanceRegionId) {
      res["VbrInstanceRegionId"] = boost::any(*vbrInstanceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VbrInstanceId") != m.end() && !m["VbrInstanceId"].empty()) {
      vbrInstanceId = make_shared<string>(boost::any_cast<string>(m["VbrInstanceId"]));
    }
    if (m.find("VbrInstanceOwnerId") != m.end() && !m["VbrInstanceOwnerId"].empty()) {
      vbrInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["VbrInstanceOwnerId"]));
    }
    if (m.find("VbrInstanceRegionId") != m.end() && !m["VbrInstanceRegionId"].empty()) {
      vbrInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["VbrInstanceRegionId"]));
    }
  }


  virtual ~DescribeCenVbrHealthCheckRequest() = default;
};
class DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<bool> healthCheckOnly{};
  shared_ptr<string> healthCheckSourceIp{};
  shared_ptr<string> healthCheckTargetIp{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> vbrInstanceId{};
  shared_ptr<string> vbrInstanceRegionId{};

  DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck() {}

  explicit DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckOnly) {
      res["HealthCheckOnly"] = boost::any(*healthCheckOnly);
    }
    if (healthCheckSourceIp) {
      res["HealthCheckSourceIp"] = boost::any(*healthCheckSourceIp);
    }
    if (healthCheckTargetIp) {
      res["HealthCheckTargetIp"] = boost::any(*healthCheckTargetIp);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (vbrInstanceId) {
      res["VbrInstanceId"] = boost::any(*vbrInstanceId);
    }
    if (vbrInstanceRegionId) {
      res["VbrInstanceRegionId"] = boost::any(*vbrInstanceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckOnly") != m.end() && !m["HealthCheckOnly"].empty()) {
      healthCheckOnly = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckOnly"]));
    }
    if (m.find("HealthCheckSourceIp") != m.end() && !m["HealthCheckSourceIp"].empty()) {
      healthCheckSourceIp = make_shared<string>(boost::any_cast<string>(m["HealthCheckSourceIp"]));
    }
    if (m.find("HealthCheckTargetIp") != m.end() && !m["HealthCheckTargetIp"].empty()) {
      healthCheckTargetIp = make_shared<string>(boost::any_cast<string>(m["HealthCheckTargetIp"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("VbrInstanceId") != m.end() && !m["VbrInstanceId"].empty()) {
      vbrInstanceId = make_shared<string>(boost::any_cast<string>(m["VbrInstanceId"]));
    }
    if (m.find("VbrInstanceRegionId") != m.end() && !m["VbrInstanceRegionId"].empty()) {
      vbrInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["VbrInstanceRegionId"]));
    }
  }


  virtual ~DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck() = default;
};
class DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck>> vbrHealthCheck{};

  DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks() {}

  explicit DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vbrHealthCheck) {
      vector<boost::any> temp1;
      for(auto item1:*vbrHealthCheck){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VbrHealthCheck"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VbrHealthCheck") != m.end() && !m["VbrHealthCheck"].empty()) {
      if (typeid(vector<boost::any>) == m["VbrHealthCheck"].type()) {
        vector<DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VbrHealthCheck"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vbrHealthCheck = make_shared<vector<DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck>>(expect1);
      }
    }
  }


  virtual ~DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks() = default;
};
class DescribeCenVbrHealthCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks> vbrHealthChecks{};

  DescribeCenVbrHealthCheckResponseBody() {}

  explicit DescribeCenVbrHealthCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vbrHealthChecks) {
      res["VbrHealthChecks"] = vbrHealthChecks ? boost::any(vbrHealthChecks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VbrHealthChecks") != m.end() && !m["VbrHealthChecks"].empty()) {
      if (typeid(map<string, boost::any>) == m["VbrHealthChecks"].type()) {
        DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VbrHealthChecks"]));
        vbrHealthChecks = make_shared<DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks>(model1);
      }
    }
  }


  virtual ~DescribeCenVbrHealthCheckResponseBody() = default;
};
class DescribeCenVbrHealthCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCenVbrHealthCheckResponseBody> body{};

  DescribeCenVbrHealthCheckResponse() {}

  explicit DescribeCenVbrHealthCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCenVbrHealthCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCenVbrHealthCheckResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCenVbrHealthCheckResponse() = default;
};
class DescribeCensRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> value{};

  DescribeCensRequestFilter() {}

  explicit DescribeCensRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCensRequestFilter() = default;
};
class DescribeCensRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeCensRequestTag() {}

  explicit DescribeCensRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeCensRequestTag() = default;
};
class DescribeCensRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCensRequestFilter>> filter{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<DescribeCensRequestTag>> tag{};

  DescribeCensRequest() {}

  explicit DescribeCensRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<DescribeCensRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCensRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<DescribeCensRequestFilter>>(expect1);
      }
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeCensRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCensRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeCensRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeCensRequest() = default;
};
class DescribeCensResponseBodyCensCenCenBandwidthPackageIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cenBandwidthPackageId{};

  DescribeCensResponseBodyCensCenCenBandwidthPackageIds() {}

  explicit DescribeCensResponseBodyCensCenCenBandwidthPackageIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CenBandwidthPackageId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CenBandwidthPackageId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cenBandwidthPackageId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCensResponseBodyCensCenCenBandwidthPackageIds() = default;
};
class DescribeCensResponseBodyCensCenTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeCensResponseBodyCensCenTagsTag() {}

  explicit DescribeCensResponseBodyCensCenTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeCensResponseBodyCensCenTagsTag() = default;
};
class DescribeCensResponseBodyCensCenTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCensResponseBodyCensCenTagsTag>> tag{};

  DescribeCensResponseBodyCensCenTags() {}

  explicit DescribeCensResponseBodyCensCenTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeCensResponseBodyCensCenTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCensResponseBodyCensCenTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeCensResponseBodyCensCenTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeCensResponseBodyCensCenTags() = default;
};
class DescribeCensResponseBodyCensCen : public Darabonba::Model {
public:
  shared_ptr<DescribeCensResponseBodyCensCenCenBandwidthPackageIds> cenBandwidthPackageIds{};
  shared_ptr<string> cenId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> status{};
  shared_ptr<DescribeCensResponseBodyCensCenTags> tags{};

  DescribeCensResponseBodyCensCen() {}

  explicit DescribeCensResponseBodyCensCen(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenBandwidthPackageIds) {
      res["CenBandwidthPackageIds"] = cenBandwidthPackageIds ? boost::any(cenBandwidthPackageIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenBandwidthPackageIds") != m.end() && !m["CenBandwidthPackageIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["CenBandwidthPackageIds"].type()) {
        DescribeCensResponseBodyCensCenCenBandwidthPackageIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CenBandwidthPackageIds"]));
        cenBandwidthPackageIds = make_shared<DescribeCensResponseBodyCensCenCenBandwidthPackageIds>(model1);
      }
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeCensResponseBodyCensCenTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeCensResponseBodyCensCenTags>(model1);
      }
    }
  }


  virtual ~DescribeCensResponseBodyCensCen() = default;
};
class DescribeCensResponseBodyCens : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCensResponseBodyCensCen>> cen{};

  DescribeCensResponseBodyCens() {}

  explicit DescribeCensResponseBodyCens(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cen) {
      vector<boost::any> temp1;
      for(auto item1:*cen){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cen"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cen") != m.end() && !m["Cen"].empty()) {
      if (typeid(vector<boost::any>) == m["Cen"].type()) {
        vector<DescribeCensResponseBodyCensCen> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cen"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCensResponseBodyCensCen model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cen = make_shared<vector<DescribeCensResponseBodyCensCen>>(expect1);
      }
    }
  }


  virtual ~DescribeCensResponseBodyCens() = default;
};
class DescribeCensResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCensResponseBodyCens> cens{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCensResponseBody() {}

  explicit DescribeCensResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cens) {
      res["Cens"] = cens ? boost::any(cens->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cens") != m.end() && !m["Cens"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cens"].type()) {
        DescribeCensResponseBodyCens model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cens"]));
        cens = make_shared<DescribeCensResponseBodyCens>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCensResponseBody() = default;
};
class DescribeCensResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCensResponseBody> body{};

  DescribeCensResponse() {}

  explicit DescribeCensResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCensResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCensResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCensResponse() = default;
};
class DescribeChildInstanceRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeChildInstanceRegionsRequest() {}

  explicit DescribeChildInstanceRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeChildInstanceRegionsRequest() = default;
};
class DescribeChildInstanceRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeChildInstanceRegionsResponseBodyRegionsRegion() {}

  explicit DescribeChildInstanceRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeChildInstanceRegionsResponseBodyRegionsRegion() = default;
};
class DescribeChildInstanceRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChildInstanceRegionsResponseBodyRegionsRegion>> region{};

  DescribeChildInstanceRegionsResponseBodyRegions() {}

  explicit DescribeChildInstanceRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeChildInstanceRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChildInstanceRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeChildInstanceRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeChildInstanceRegionsResponseBodyRegions() = default;
};
class DescribeChildInstanceRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeChildInstanceRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeChildInstanceRegionsResponseBody() {}

  explicit DescribeChildInstanceRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeChildInstanceRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeChildInstanceRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeChildInstanceRegionsResponseBody() = default;
};
class DescribeChildInstanceRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeChildInstanceRegionsResponseBody> body{};

  DescribeChildInstanceRegionsResponse() {}

  explicit DescribeChildInstanceRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChildInstanceRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChildInstanceRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChildInstanceRegionsResponse() = default;
};
class DescribeFlowlogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> flowLogId{};
  shared_ptr<string> flowLogName{};
  shared_ptr<string> logStoreName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  DescribeFlowlogsRequest() {}

  explicit DescribeFlowlogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flowLogId) {
      res["FlowLogId"] = boost::any(*flowLogId);
    }
    if (flowLogName) {
      res["FlowLogName"] = boost::any(*flowLogName);
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FlowLogId") != m.end() && !m["FlowLogId"].empty()) {
      flowLogId = make_shared<string>(boost::any_cast<string>(m["FlowLogId"]));
    }
    if (m.find("FlowLogName") != m.end() && !m["FlowLogName"].empty()) {
      flowLogName = make_shared<string>(boost::any_cast<string>(m["FlowLogName"]));
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeFlowlogsRequest() = default;
};
class DescribeFlowlogsResponseBodyFlowLogsFlowLog : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> flowLogId{};
  shared_ptr<string> flowLogName{};
  shared_ptr<string> logStoreName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  DescribeFlowlogsResponseBodyFlowLogsFlowLog() {}

  explicit DescribeFlowlogsResponseBodyFlowLogsFlowLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flowLogId) {
      res["FlowLogId"] = boost::any(*flowLogId);
    }
    if (flowLogName) {
      res["FlowLogName"] = boost::any(*flowLogName);
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FlowLogId") != m.end() && !m["FlowLogId"].empty()) {
      flowLogId = make_shared<string>(boost::any_cast<string>(m["FlowLogId"]));
    }
    if (m.find("FlowLogName") != m.end() && !m["FlowLogName"].empty()) {
      flowLogName = make_shared<string>(boost::any_cast<string>(m["FlowLogName"]));
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeFlowlogsResponseBodyFlowLogsFlowLog() = default;
};
class DescribeFlowlogsResponseBodyFlowLogs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFlowlogsResponseBodyFlowLogsFlowLog>> flowLog{};

  DescribeFlowlogsResponseBodyFlowLogs() {}

  explicit DescribeFlowlogsResponseBodyFlowLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowLog) {
      vector<boost::any> temp1;
      for(auto item1:*flowLog){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FlowLog"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowLog") != m.end() && !m["FlowLog"].empty()) {
      if (typeid(vector<boost::any>) == m["FlowLog"].type()) {
        vector<DescribeFlowlogsResponseBodyFlowLogsFlowLog> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FlowLog"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFlowlogsResponseBodyFlowLogsFlowLog model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flowLog = make_shared<vector<DescribeFlowlogsResponseBodyFlowLogsFlowLog>>(expect1);
      }
    }
  }


  virtual ~DescribeFlowlogsResponseBodyFlowLogs() = default;
};
class DescribeFlowlogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeFlowlogsResponseBodyFlowLogs> flowLogs{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> totalCount{};

  DescribeFlowlogsResponseBody() {}

  explicit DescribeFlowlogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowLogs) {
      res["FlowLogs"] = flowLogs ? boost::any(flowLogs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowLogs") != m.end() && !m["FlowLogs"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowLogs"].type()) {
        DescribeFlowlogsResponseBodyFlowLogs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowLogs"]));
        flowLogs = make_shared<DescribeFlowlogsResponseBodyFlowLogs>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeFlowlogsResponseBody() = default;
};
class DescribeFlowlogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeFlowlogsResponseBody> body{};

  DescribeFlowlogsResponse() {}

  explicit DescribeFlowlogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeFlowlogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFlowlogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFlowlogsResponse() = default;
};
class DescribeGeographicRegionMembershipRequest : public Darabonba::Model {
public:
  shared_ptr<string> geographicRegionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeGeographicRegionMembershipRequest() {}

  explicit DescribeGeographicRegionMembershipRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (geographicRegionId) {
      res["GeographicRegionId"] = boost::any(*geographicRegionId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeographicRegionId") != m.end() && !m["GeographicRegionId"].empty()) {
      geographicRegionId = make_shared<string>(boost::any_cast<string>(m["GeographicRegionId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeGeographicRegionMembershipRequest() = default;
};
class DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId() {}

  explicit DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId() = default;
};
class DescribeGeographicRegionMembershipResponseBodyRegionIds : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId>> regionId{};

  DescribeGeographicRegionMembershipResponseBodyRegionIds() {}

  explicit DescribeGeographicRegionMembershipResponseBodyRegionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      vector<boost::any> temp1;
      for(auto item1:*regionId){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionId"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionId"].type()) {
        vector<DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionId"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionId = make_shared<vector<DescribeGeographicRegionMembershipResponseBodyRegionIdsRegionId>>(expect1);
      }
    }
  }


  virtual ~DescribeGeographicRegionMembershipResponseBodyRegionIds() = default;
};
class DescribeGeographicRegionMembershipResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeGeographicRegionMembershipResponseBodyRegionIds> regionIds{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeGeographicRegionMembershipResponseBody() {}

  explicit DescribeGeographicRegionMembershipResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionIds) {
      res["RegionIds"] = regionIds ? boost::any(regionIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegionIds"].type()) {
        DescribeGeographicRegionMembershipResponseBodyRegionIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegionIds"]));
        regionIds = make_shared<DescribeGeographicRegionMembershipResponseBodyRegionIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeGeographicRegionMembershipResponseBody() = default;
};
class DescribeGeographicRegionMembershipResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGeographicRegionMembershipResponseBody> body{};

  DescribeGeographicRegionMembershipResponse() {}

  explicit DescribeGeographicRegionMembershipResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGeographicRegionMembershipResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGeographicRegionMembershipResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGeographicRegionMembershipResponse() = default;
};
class DescribeGrantRulesToCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeGrantRulesToCenRequest() {}

  explicit DescribeGrantRulesToCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeGrantRulesToCenRequest() = default;
};
class DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<long> childInstanceOwnerId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> orderType{};

  DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule() {}

  explicit DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceOwnerId) {
      res["ChildInstanceOwnerId"] = boost::any(*childInstanceOwnerId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceOwnerId") != m.end() && !m["ChildInstanceOwnerId"].empty()) {
      childInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["ChildInstanceOwnerId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
  }


  virtual ~DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule() = default;
};
class DescribeGrantRulesToCenResponseBodyGrantRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule>> grantRule{};

  DescribeGrantRulesToCenResponseBodyGrantRules() {}

  explicit DescribeGrantRulesToCenResponseBodyGrantRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grantRule) {
      vector<boost::any> temp1;
      for(auto item1:*grantRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GrantRule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GrantRule") != m.end() && !m["GrantRule"].empty()) {
      if (typeid(vector<boost::any>) == m["GrantRule"].type()) {
        vector<DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GrantRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        grantRule = make_shared<vector<DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule>>(expect1);
      }
    }
  }


  virtual ~DescribeGrantRulesToCenResponseBodyGrantRules() = default;
};
class DescribeGrantRulesToCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGrantRulesToCenResponseBodyGrantRules> grantRules{};
  shared_ptr<string> requestId{};

  DescribeGrantRulesToCenResponseBody() {}

  explicit DescribeGrantRulesToCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grantRules) {
      res["GrantRules"] = grantRules ? boost::any(grantRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GrantRules") != m.end() && !m["GrantRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["GrantRules"].type()) {
        DescribeGrantRulesToCenResponseBodyGrantRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GrantRules"]));
        grantRules = make_shared<DescribeGrantRulesToCenResponseBodyGrantRules>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeGrantRulesToCenResponseBody() = default;
};
class DescribeGrantRulesToCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGrantRulesToCenResponseBody> body{};

  DescribeGrantRulesToCenResponse() {}

  explicit DescribeGrantRulesToCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGrantRulesToCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGrantRulesToCenResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGrantRulesToCenResponse() = default;
};
class DescribePublishedRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceRouteTableId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePublishedRouteEntriesRequest() {}

  explicit DescribePublishedRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceRouteTableId) {
      res["ChildInstanceRouteTableId"] = boost::any(*childInstanceRouteTableId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceRouteTableId") != m.end() && !m["ChildInstanceRouteTableId"].empty()) {
      childInstanceRouteTableId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRouteTableId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePublishedRouteEntriesRequest() = default;
};
class DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict() {}

  explicit DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict() = default;
};
class DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict>> conflict{};

  DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts() {}

  explicit DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conflict) {
      vector<boost::any> temp1;
      for(auto item1:*conflict){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conflict"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conflict") != m.end() && !m["Conflict"].empty()) {
      if (typeid(vector<boost::any>) == m["Conflict"].type()) {
        vector<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conflict"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conflict = make_shared<vector<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict>>(expect1);
      }
    }
  }


  virtual ~DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts() = default;
};
class DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry : public Darabonba::Model {
public:
  shared_ptr<string> childInstanceRouteTableId{};
  shared_ptr<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts> conflicts{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<bool> operationalMode{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> routeType{};

  DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry() {}

  explicit DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childInstanceRouteTableId) {
      res["ChildInstanceRouteTableId"] = boost::any(*childInstanceRouteTableId);
    }
    if (conflicts) {
      res["Conflicts"] = conflicts ? boost::any(conflicts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (operationalMode) {
      res["OperationalMode"] = boost::any(*operationalMode);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildInstanceRouteTableId") != m.end() && !m["ChildInstanceRouteTableId"].empty()) {
      childInstanceRouteTableId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRouteTableId"]));
    }
    if (m.find("Conflicts") != m.end() && !m["Conflicts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Conflicts"].type()) {
        DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Conflicts"]));
        conflicts = make_shared<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts>(model1);
      }
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("OperationalMode") != m.end() && !m["OperationalMode"].empty()) {
      operationalMode = make_shared<bool>(boost::any_cast<bool>(m["OperationalMode"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["PublishStatus"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
  }


  virtual ~DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry() = default;
};
class DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry>> publishedRouteEntry{};

  DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries() {}

  explicit DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publishedRouteEntry) {
      vector<boost::any> temp1;
      for(auto item1:*publishedRouteEntry){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PublishedRouteEntry"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PublishedRouteEntry") != m.end() && !m["PublishedRouteEntry"].empty()) {
      if (typeid(vector<boost::any>) == m["PublishedRouteEntry"].type()) {
        vector<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PublishedRouteEntry"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        publishedRouteEntry = make_shared<vector<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry>>(expect1);
      }
    }
  }


  virtual ~DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries() = default;
};
class DescribePublishedRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries> publishedRouteEntries{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribePublishedRouteEntriesResponseBody() {}

  explicit DescribePublishedRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (publishedRouteEntries) {
      res["PublishedRouteEntries"] = publishedRouteEntries ? boost::any(publishedRouteEntries->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PublishedRouteEntries") != m.end() && !m["PublishedRouteEntries"].empty()) {
      if (typeid(map<string, boost::any>) == m["PublishedRouteEntries"].type()) {
        DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PublishedRouteEntries"]));
        publishedRouteEntries = make_shared<DescribePublishedRouteEntriesResponseBodyPublishedRouteEntries>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePublishedRouteEntriesResponseBody() = default;
};
class DescribePublishedRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePublishedRouteEntriesResponseBody> body{};

  DescribePublishedRouteEntriesResponse() {}

  explicit DescribePublishedRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePublishedRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePublishedRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePublishedRouteEntriesResponse() = default;
};
class DescribeRouteConflictRequest : public Darabonba::Model {
public:
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceRouteTableId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeRouteConflictRequest() {}

  explicit DescribeRouteConflictRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceRouteTableId) {
      res["ChildInstanceRouteTableId"] = boost::any(*childInstanceRouteTableId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceRouteTableId") != m.end() && !m["ChildInstanceRouteTableId"].empty()) {
      childInstanceRouteTableId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRouteTableId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeRouteConflictRequest() = default;
};
class DescribeRouteConflictResponseBodyRouteConflictsRouteConflict : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  DescribeRouteConflictResponseBodyRouteConflictsRouteConflict() {}

  explicit DescribeRouteConflictResponseBodyRouteConflictsRouteConflict(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeRouteConflictResponseBodyRouteConflictsRouteConflict() = default;
};
class DescribeRouteConflictResponseBodyRouteConflicts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRouteConflictResponseBodyRouteConflictsRouteConflict>> routeConflict{};

  DescribeRouteConflictResponseBodyRouteConflicts() {}

  explicit DescribeRouteConflictResponseBodyRouteConflicts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeConflict) {
      vector<boost::any> temp1;
      for(auto item1:*routeConflict){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteConflict"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteConflict") != m.end() && !m["RouteConflict"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteConflict"].type()) {
        vector<DescribeRouteConflictResponseBodyRouteConflictsRouteConflict> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteConflict"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRouteConflictResponseBodyRouteConflictsRouteConflict model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeConflict = make_shared<vector<DescribeRouteConflictResponseBodyRouteConflictsRouteConflict>>(expect1);
      }
    }
  }


  virtual ~DescribeRouteConflictResponseBodyRouteConflicts() = default;
};
class DescribeRouteConflictResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRouteConflictResponseBodyRouteConflicts> routeConflicts{};
  shared_ptr<long> totalCount{};

  DescribeRouteConflictResponseBody() {}

  explicit DescribeRouteConflictResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (routeConflicts) {
      res["RouteConflicts"] = routeConflicts ? boost::any(routeConflicts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RouteConflicts") != m.end() && !m["RouteConflicts"].empty()) {
      if (typeid(map<string, boost::any>) == m["RouteConflicts"].type()) {
        DescribeRouteConflictResponseBodyRouteConflicts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RouteConflicts"]));
        routeConflicts = make_shared<DescribeRouteConflictResponseBodyRouteConflicts>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeRouteConflictResponseBody() = default;
};
class DescribeRouteConflictResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRouteConflictResponseBody> body{};

  DescribeRouteConflictResponse() {}

  explicit DescribeRouteConflictResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRouteConflictResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRouteConflictResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRouteConflictResponse() = default;
};
class DescribeRouteServicesInCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessRegionId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> host{};
  shared_ptr<string> hostRegionId{};
  shared_ptr<string> hostVpcId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeRouteServicesInCenRequest() {}

  explicit DescribeRouteServicesInCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRegionId) {
      res["AccessRegionId"] = boost::any(*accessRegionId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (hostRegionId) {
      res["HostRegionId"] = boost::any(*hostRegionId);
    }
    if (hostVpcId) {
      res["HostVpcId"] = boost::any(*hostVpcId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRegionId") != m.end() && !m["AccessRegionId"].empty()) {
      accessRegionId = make_shared<string>(boost::any_cast<string>(m["AccessRegionId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HostRegionId") != m.end() && !m["HostRegionId"].empty()) {
      hostRegionId = make_shared<string>(boost::any_cast<string>(m["HostRegionId"]));
    }
    if (m.find("HostVpcId") != m.end() && !m["HostVpcId"].empty()) {
      hostVpcId = make_shared<string>(boost::any_cast<string>(m["HostVpcId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeRouteServicesInCenRequest() = default;
};
class DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cidr{};

  DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs() {}

  explicit DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cidr"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cidr"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cidr = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs() = default;
};
class DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry : public Darabonba::Model {
public:
  shared_ptr<string> accessRegionId{};
  shared_ptr<string> cenId{};
  shared_ptr<DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs> cidrs{};
  shared_ptr<string> description{};
  shared_ptr<string> host{};
  shared_ptr<string> hostRegionId{};
  shared_ptr<string> hostVpcId{};
  shared_ptr<string> status{};

  DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry() {}

  explicit DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRegionId) {
      res["AccessRegionId"] = boost::any(*accessRegionId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cidrs) {
      res["Cidrs"] = cidrs ? boost::any(cidrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (hostRegionId) {
      res["HostRegionId"] = boost::any(*hostRegionId);
    }
    if (hostVpcId) {
      res["HostVpcId"] = boost::any(*hostVpcId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRegionId") != m.end() && !m["AccessRegionId"].empty()) {
      accessRegionId = make_shared<string>(boost::any_cast<string>(m["AccessRegionId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("Cidrs") != m.end() && !m["Cidrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cidrs"].type()) {
        DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cidrs"]));
        cidrs = make_shared<DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HostRegionId") != m.end() && !m["HostRegionId"].empty()) {
      hostRegionId = make_shared<string>(boost::any_cast<string>(m["HostRegionId"]));
    }
    if (m.find("HostVpcId") != m.end() && !m["HostVpcId"].empty()) {
      hostVpcId = make_shared<string>(boost::any_cast<string>(m["HostVpcId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry() = default;
};
class DescribeRouteServicesInCenResponseBodyRouteServiceEntries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry>> routeServiceEntry{};

  DescribeRouteServicesInCenResponseBodyRouteServiceEntries() {}

  explicit DescribeRouteServicesInCenResponseBodyRouteServiceEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeServiceEntry) {
      vector<boost::any> temp1;
      for(auto item1:*routeServiceEntry){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteServiceEntry"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteServiceEntry") != m.end() && !m["RouteServiceEntry"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteServiceEntry"].type()) {
        vector<DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteServiceEntry"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeServiceEntry = make_shared<vector<DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry>>(expect1);
      }
    }
  }


  virtual ~DescribeRouteServicesInCenResponseBodyRouteServiceEntries() = default;
};
class DescribeRouteServicesInCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRouteServicesInCenResponseBodyRouteServiceEntries> routeServiceEntries{};
  shared_ptr<long> totalCount{};

  DescribeRouteServicesInCenResponseBody() {}

  explicit DescribeRouteServicesInCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (routeServiceEntries) {
      res["RouteServiceEntries"] = routeServiceEntries ? boost::any(routeServiceEntries->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RouteServiceEntries") != m.end() && !m["RouteServiceEntries"].empty()) {
      if (typeid(map<string, boost::any>) == m["RouteServiceEntries"].type()) {
        DescribeRouteServicesInCenResponseBodyRouteServiceEntries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RouteServiceEntries"]));
        routeServiceEntries = make_shared<DescribeRouteServicesInCenResponseBodyRouteServiceEntries>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeRouteServicesInCenResponseBody() = default;
};
class DescribeRouteServicesInCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRouteServicesInCenResponseBody> body{};

  DescribeRouteServicesInCenResponse() {}

  explicit DescribeRouteServicesInCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRouteServicesInCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRouteServicesInCenResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRouteServicesInCenResponse() = default;
};
class DetachCenChildInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> cenOwnerId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<long> childInstanceOwnerId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DetachCenChildInstanceRequest() {}

  explicit DetachCenChildInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenOwnerId) {
      res["CenOwnerId"] = boost::any(*cenOwnerId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceOwnerId) {
      res["ChildInstanceOwnerId"] = boost::any(*childInstanceOwnerId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenOwnerId") != m.end() && !m["CenOwnerId"].empty()) {
      cenOwnerId = make_shared<long>(boost::any_cast<long>(m["CenOwnerId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceOwnerId") != m.end() && !m["ChildInstanceOwnerId"].empty()) {
      childInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["ChildInstanceOwnerId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DetachCenChildInstanceRequest() = default;
};
class DetachCenChildInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachCenChildInstanceResponseBody() {}

  explicit DetachCenChildInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachCenChildInstanceResponseBody() = default;
};
class DetachCenChildInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachCenChildInstanceResponseBody> body{};

  DetachCenChildInstanceResponse() {}

  explicit DetachCenChildInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachCenChildInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachCenChildInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DetachCenChildInstanceResponse() = default;
};
class DisableCenVbrHealthCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vbrInstanceId{};
  shared_ptr<long> vbrInstanceOwnerId{};
  shared_ptr<string> vbrInstanceRegionId{};

  DisableCenVbrHealthCheckRequest() {}

  explicit DisableCenVbrHealthCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (vbrInstanceId) {
      res["VbrInstanceId"] = boost::any(*vbrInstanceId);
    }
    if (vbrInstanceOwnerId) {
      res["VbrInstanceOwnerId"] = boost::any(*vbrInstanceOwnerId);
    }
    if (vbrInstanceRegionId) {
      res["VbrInstanceRegionId"] = boost::any(*vbrInstanceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VbrInstanceId") != m.end() && !m["VbrInstanceId"].empty()) {
      vbrInstanceId = make_shared<string>(boost::any_cast<string>(m["VbrInstanceId"]));
    }
    if (m.find("VbrInstanceOwnerId") != m.end() && !m["VbrInstanceOwnerId"].empty()) {
      vbrInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["VbrInstanceOwnerId"]));
    }
    if (m.find("VbrInstanceRegionId") != m.end() && !m["VbrInstanceRegionId"].empty()) {
      vbrInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["VbrInstanceRegionId"]));
    }
  }


  virtual ~DisableCenVbrHealthCheckRequest() = default;
};
class DisableCenVbrHealthCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableCenVbrHealthCheckResponseBody() {}

  explicit DisableCenVbrHealthCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DisableCenVbrHealthCheckResponseBody() = default;
};
class DisableCenVbrHealthCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableCenVbrHealthCheckResponseBody> body{};

  DisableCenVbrHealthCheckResponse() {}

  explicit DisableCenVbrHealthCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableCenVbrHealthCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableCenVbrHealthCheckResponseBody>(model1);
      }
    }
  }


  virtual ~DisableCenVbrHealthCheckResponse() = default;
};
class DisableTransitRouterRouteTablePropagationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterRouteTableId{};

  DisableTransitRouterRouteTablePropagationRequest() {}

  explicit DisableTransitRouterRouteTablePropagationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~DisableTransitRouterRouteTablePropagationRequest() = default;
};
class DisableTransitRouterRouteTablePropagationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableTransitRouterRouteTablePropagationResponseBody() {}

  explicit DisableTransitRouterRouteTablePropagationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DisableTransitRouterRouteTablePropagationResponseBody() = default;
};
class DisableTransitRouterRouteTablePropagationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableTransitRouterRouteTablePropagationResponseBody> body{};

  DisableTransitRouterRouteTablePropagationResponse() {}

  explicit DisableTransitRouterRouteTablePropagationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableTransitRouterRouteTablePropagationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableTransitRouterRouteTablePropagationResponseBody>(model1);
      }
    }
  }


  virtual ~DisableTransitRouterRouteTablePropagationResponse() = default;
};
class DissociateTransitRouterAttachmentFromRouteTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterRouteTableId{};

  DissociateTransitRouterAttachmentFromRouteTableRequest() {}

  explicit DissociateTransitRouterAttachmentFromRouteTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~DissociateTransitRouterAttachmentFromRouteTableRequest() = default;
};
class DissociateTransitRouterAttachmentFromRouteTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DissociateTransitRouterAttachmentFromRouteTableResponseBody() {}

  explicit DissociateTransitRouterAttachmentFromRouteTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DissociateTransitRouterAttachmentFromRouteTableResponseBody() = default;
};
class DissociateTransitRouterAttachmentFromRouteTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DissociateTransitRouterAttachmentFromRouteTableResponseBody> body{};

  DissociateTransitRouterAttachmentFromRouteTableResponse() {}

  explicit DissociateTransitRouterAttachmentFromRouteTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DissociateTransitRouterAttachmentFromRouteTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateTransitRouterAttachmentFromRouteTableResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateTransitRouterAttachmentFromRouteTableResponse() = default;
};
class EnableCenVbrHealthCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<bool> healthCheckOnly{};
  shared_ptr<string> healthCheckSourceIp{};
  shared_ptr<string> healthCheckTargetIp{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vbrInstanceId{};
  shared_ptr<long> vbrInstanceOwnerId{};
  shared_ptr<string> vbrInstanceRegionId{};

  EnableCenVbrHealthCheckRequest() {}

  explicit EnableCenVbrHealthCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckOnly) {
      res["HealthCheckOnly"] = boost::any(*healthCheckOnly);
    }
    if (healthCheckSourceIp) {
      res["HealthCheckSourceIp"] = boost::any(*healthCheckSourceIp);
    }
    if (healthCheckTargetIp) {
      res["HealthCheckTargetIp"] = boost::any(*healthCheckTargetIp);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (vbrInstanceId) {
      res["VbrInstanceId"] = boost::any(*vbrInstanceId);
    }
    if (vbrInstanceOwnerId) {
      res["VbrInstanceOwnerId"] = boost::any(*vbrInstanceOwnerId);
    }
    if (vbrInstanceRegionId) {
      res["VbrInstanceRegionId"] = boost::any(*vbrInstanceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckOnly") != m.end() && !m["HealthCheckOnly"].empty()) {
      healthCheckOnly = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckOnly"]));
    }
    if (m.find("HealthCheckSourceIp") != m.end() && !m["HealthCheckSourceIp"].empty()) {
      healthCheckSourceIp = make_shared<string>(boost::any_cast<string>(m["HealthCheckSourceIp"]));
    }
    if (m.find("HealthCheckTargetIp") != m.end() && !m["HealthCheckTargetIp"].empty()) {
      healthCheckTargetIp = make_shared<string>(boost::any_cast<string>(m["HealthCheckTargetIp"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VbrInstanceId") != m.end() && !m["VbrInstanceId"].empty()) {
      vbrInstanceId = make_shared<string>(boost::any_cast<string>(m["VbrInstanceId"]));
    }
    if (m.find("VbrInstanceOwnerId") != m.end() && !m["VbrInstanceOwnerId"].empty()) {
      vbrInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["VbrInstanceOwnerId"]));
    }
    if (m.find("VbrInstanceRegionId") != m.end() && !m["VbrInstanceRegionId"].empty()) {
      vbrInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["VbrInstanceRegionId"]));
    }
  }


  virtual ~EnableCenVbrHealthCheckRequest() = default;
};
class EnableCenVbrHealthCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableCenVbrHealthCheckResponseBody() {}

  explicit EnableCenVbrHealthCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableCenVbrHealthCheckResponseBody() = default;
};
class EnableCenVbrHealthCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableCenVbrHealthCheckResponseBody> body{};

  EnableCenVbrHealthCheckResponse() {}

  explicit EnableCenVbrHealthCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableCenVbrHealthCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableCenVbrHealthCheckResponseBody>(model1);
      }
    }
  }


  virtual ~EnableCenVbrHealthCheckResponse() = default;
};
class EnableTransitRouterRouteTablePropagationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterRouteTableId{};

  EnableTransitRouterRouteTablePropagationRequest() {}

  explicit EnableTransitRouterRouteTablePropagationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~EnableTransitRouterRouteTablePropagationRequest() = default;
};
class EnableTransitRouterRouteTablePropagationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableTransitRouterRouteTablePropagationResponseBody() {}

  explicit EnableTransitRouterRouteTablePropagationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableTransitRouterRouteTablePropagationResponseBody() = default;
};
class EnableTransitRouterRouteTablePropagationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableTransitRouterRouteTablePropagationResponseBody> body{};

  EnableTransitRouterRouteTablePropagationResponse() {}

  explicit EnableTransitRouterRouteTablePropagationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableTransitRouterRouteTablePropagationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableTransitRouterRouteTablePropagationResponseBody>(model1);
      }
    }
  }


  virtual ~EnableTransitRouterRouteTablePropagationResponse() = default;
};
class GrantInstanceToTransitRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> cenOwnerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GrantInstanceToTransitRouterRequest() {}

  explicit GrantInstanceToTransitRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenOwnerId) {
      res["CenOwnerId"] = boost::any(*cenOwnerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenOwnerId") != m.end() && !m["CenOwnerId"].empty()) {
      cenOwnerId = make_shared<long>(boost::any_cast<long>(m["CenOwnerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GrantInstanceToTransitRouterRequest() = default;
};
class GrantInstanceToTransitRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GrantInstanceToTransitRouterResponseBody() {}

  explicit GrantInstanceToTransitRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GrantInstanceToTransitRouterResponseBody() = default;
};
class GrantInstanceToTransitRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GrantInstanceToTransitRouterResponseBody> body{};

  GrantInstanceToTransitRouterResponse() {}

  explicit GrantInstanceToTransitRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GrantInstanceToTransitRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantInstanceToTransitRouterResponseBody>(model1);
      }
    }
  }


  virtual ~GrantInstanceToTransitRouterResponse() = default;
};
class ListCenInterRegionTrafficQosPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trafficQosPolicyDescription{};
  shared_ptr<string> trafficQosPolicyId{};
  shared_ptr<string> trafficQosPolicyName{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterId{};

  ListCenInterRegionTrafficQosPoliciesRequest() {}

  explicit ListCenInterRegionTrafficQosPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficQosPolicyDescription) {
      res["TrafficQosPolicyDescription"] = boost::any(*trafficQosPolicyDescription);
    }
    if (trafficQosPolicyId) {
      res["TrafficQosPolicyId"] = boost::any(*trafficQosPolicyId);
    }
    if (trafficQosPolicyName) {
      res["TrafficQosPolicyName"] = boost::any(*trafficQosPolicyName);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficQosPolicyDescription") != m.end() && !m["TrafficQosPolicyDescription"].empty()) {
      trafficQosPolicyDescription = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyDescription"]));
    }
    if (m.find("TrafficQosPolicyId") != m.end() && !m["TrafficQosPolicyId"].empty()) {
      trafficQosPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyId"]));
    }
    if (m.find("TrafficQosPolicyName") != m.end() && !m["TrafficQosPolicyName"].empty()) {
      trafficQosPolicyName = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyName"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~ListCenInterRegionTrafficQosPoliciesRequest() = default;
};
class ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dscps{};
  shared_ptr<string> qosQueueDescription{};
  shared_ptr<string> qosQueueId{};
  shared_ptr<string> qosQueueName{};
  shared_ptr<long> remainBandwidthPercent{};

  ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues() {}

  explicit ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dscps) {
      res["Dscps"] = boost::any(*dscps);
    }
    if (qosQueueDescription) {
      res["QosQueueDescription"] = boost::any(*qosQueueDescription);
    }
    if (qosQueueId) {
      res["QosQueueId"] = boost::any(*qosQueueId);
    }
    if (qosQueueName) {
      res["QosQueueName"] = boost::any(*qosQueueName);
    }
    if (remainBandwidthPercent) {
      res["RemainBandwidthPercent"] = boost::any(*remainBandwidthPercent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dscps") != m.end() && !m["Dscps"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Dscps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dscps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dscps = make_shared<vector<long>>(toVec1);
    }
    if (m.find("QosQueueDescription") != m.end() && !m["QosQueueDescription"].empty()) {
      qosQueueDescription = make_shared<string>(boost::any_cast<string>(m["QosQueueDescription"]));
    }
    if (m.find("QosQueueId") != m.end() && !m["QosQueueId"].empty()) {
      qosQueueId = make_shared<string>(boost::any_cast<string>(m["QosQueueId"]));
    }
    if (m.find("QosQueueName") != m.end() && !m["QosQueueName"].empty()) {
      qosQueueName = make_shared<string>(boost::any_cast<string>(m["QosQueueName"]));
    }
    if (m.find("RemainBandwidthPercent") != m.end() && !m["RemainBandwidthPercent"].empty()) {
      remainBandwidthPercent = make_shared<long>(boost::any_cast<long>(m["RemainBandwidthPercent"]));
    }
  }


  virtual ~ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues() = default;
};
class ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies : public Darabonba::Model {
public:
  shared_ptr<string> trafficQosPolicyDescription{};
  shared_ptr<string> trafficQosPolicyId{};
  shared_ptr<string> trafficQosPolicyName{};
  shared_ptr<string> trafficQosPolicyStatus{};
  shared_ptr<vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues>> trafficQosQueues{};

  ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies() {}

  explicit ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trafficQosPolicyDescription) {
      res["TrafficQosPolicyDescription"] = boost::any(*trafficQosPolicyDescription);
    }
    if (trafficQosPolicyId) {
      res["TrafficQosPolicyId"] = boost::any(*trafficQosPolicyId);
    }
    if (trafficQosPolicyName) {
      res["TrafficQosPolicyName"] = boost::any(*trafficQosPolicyName);
    }
    if (trafficQosPolicyStatus) {
      res["TrafficQosPolicyStatus"] = boost::any(*trafficQosPolicyStatus);
    }
    if (trafficQosQueues) {
      vector<boost::any> temp1;
      for(auto item1:*trafficQosQueues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrafficQosQueues"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrafficQosPolicyDescription") != m.end() && !m["TrafficQosPolicyDescription"].empty()) {
      trafficQosPolicyDescription = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyDescription"]));
    }
    if (m.find("TrafficQosPolicyId") != m.end() && !m["TrafficQosPolicyId"].empty()) {
      trafficQosPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyId"]));
    }
    if (m.find("TrafficQosPolicyName") != m.end() && !m["TrafficQosPolicyName"].empty()) {
      trafficQosPolicyName = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyName"]));
    }
    if (m.find("TrafficQosPolicyStatus") != m.end() && !m["TrafficQosPolicyStatus"].empty()) {
      trafficQosPolicyStatus = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyStatus"]));
    }
    if (m.find("TrafficQosQueues") != m.end() && !m["TrafficQosQueues"].empty()) {
      if (typeid(vector<boost::any>) == m["TrafficQosQueues"].type()) {
        vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrafficQosQueues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trafficQosQueues = make_shared<vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPoliciesTrafficQosQueues>>(expect1);
      }
    }
  }


  virtual ~ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies() = default;
};
class ListCenInterRegionTrafficQosPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies>> trafficQosPolicies{};

  ListCenInterRegionTrafficQosPoliciesResponseBody() {}

  explicit ListCenInterRegionTrafficQosPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (trafficQosPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*trafficQosPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrafficQosPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TrafficQosPolicies") != m.end() && !m["TrafficQosPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["TrafficQosPolicies"].type()) {
        vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrafficQosPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trafficQosPolicies = make_shared<vector<ListCenInterRegionTrafficQosPoliciesResponseBodyTrafficQosPolicies>>(expect1);
      }
    }
  }


  virtual ~ListCenInterRegionTrafficQosPoliciesResponseBody() = default;
};
class ListCenInterRegionTrafficQosPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCenInterRegionTrafficQosPoliciesResponseBody> body{};

  ListCenInterRegionTrafficQosPoliciesResponse() {}

  explicit ListCenInterRegionTrafficQosPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCenInterRegionTrafficQosPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCenInterRegionTrafficQosPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCenInterRegionTrafficQosPoliciesResponse() = default;
};
class ListGrantVSwitchesToCenRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListGrantVSwitchesToCenRequest() {}

  explicit ListGrantVSwitchesToCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListGrantVSwitchesToCenRequest() = default;
};
class ListGrantVSwitchesToCenResponseBodyVSwitches : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListGrantVSwitchesToCenResponseBodyVSwitches() {}

  explicit ListGrantVSwitchesToCenResponseBodyVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListGrantVSwitchesToCenResponseBodyVSwitches() = default;
};
class ListGrantVSwitchesToCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListGrantVSwitchesToCenResponseBodyVSwitches>> vSwitches{};

  ListGrantVSwitchesToCenResponseBody() {}

  explicit ListGrantVSwitchesToCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitches"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<ListGrantVSwitchesToCenResponseBodyVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGrantVSwitchesToCenResponseBodyVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<ListGrantVSwitchesToCenResponseBodyVSwitches>>(expect1);
      }
    }
  }


  virtual ~ListGrantVSwitchesToCenResponseBody() = default;
};
class ListGrantVSwitchesToCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGrantVSwitchesToCenResponseBody> body{};

  ListGrantVSwitchesToCenResponse() {}

  explicit ListGrantVSwitchesToCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGrantVSwitchesToCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGrantVSwitchesToCenResponseBody>(model1);
      }
    }
  }


  virtual ~ListGrantVSwitchesToCenResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListTrafficMarkingPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trafficMarkingPolicyDescription{};
  shared_ptr<string> trafficMarkingPolicyId{};
  shared_ptr<string> trafficMarkingPolicyName{};
  shared_ptr<string> transitRouterId{};

  ListTrafficMarkingPoliciesRequest() {}

  explicit ListTrafficMarkingPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficMarkingPolicyDescription) {
      res["TrafficMarkingPolicyDescription"] = boost::any(*trafficMarkingPolicyDescription);
    }
    if (trafficMarkingPolicyId) {
      res["TrafficMarkingPolicyId"] = boost::any(*trafficMarkingPolicyId);
    }
    if (trafficMarkingPolicyName) {
      res["TrafficMarkingPolicyName"] = boost::any(*trafficMarkingPolicyName);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficMarkingPolicyDescription") != m.end() && !m["TrafficMarkingPolicyDescription"].empty()) {
      trafficMarkingPolicyDescription = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyDescription"]));
    }
    if (m.find("TrafficMarkingPolicyId") != m.end() && !m["TrafficMarkingPolicyId"].empty()) {
      trafficMarkingPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyId"]));
    }
    if (m.find("TrafficMarkingPolicyName") != m.end() && !m["TrafficMarkingPolicyName"].empty()) {
      trafficMarkingPolicyName = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyName"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~ListTrafficMarkingPoliciesRequest() = default;
};
class ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules : public Darabonba::Model {
public:
  shared_ptr<string> dstCidr{};
  shared_ptr<vector<long>> dstPortRange{};
  shared_ptr<long> matchDscp{};
  shared_ptr<string> protocol{};
  shared_ptr<string> srcCidr{};
  shared_ptr<vector<long>> srcPortRange{};
  shared_ptr<string> trafficMatchRuleDescription{};
  shared_ptr<string> trafficMatchRuleId{};
  shared_ptr<string> trafficMatchRuleName{};
  shared_ptr<string> trafficMatchRuleStatus{};

  ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules() {}

  explicit ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstCidr) {
      res["DstCidr"] = boost::any(*dstCidr);
    }
    if (dstPortRange) {
      res["DstPortRange"] = boost::any(*dstPortRange);
    }
    if (matchDscp) {
      res["MatchDscp"] = boost::any(*matchDscp);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (srcCidr) {
      res["SrcCidr"] = boost::any(*srcCidr);
    }
    if (srcPortRange) {
      res["SrcPortRange"] = boost::any(*srcPortRange);
    }
    if (trafficMatchRuleDescription) {
      res["TrafficMatchRuleDescription"] = boost::any(*trafficMatchRuleDescription);
    }
    if (trafficMatchRuleId) {
      res["TrafficMatchRuleId"] = boost::any(*trafficMatchRuleId);
    }
    if (trafficMatchRuleName) {
      res["TrafficMatchRuleName"] = boost::any(*trafficMatchRuleName);
    }
    if (trafficMatchRuleStatus) {
      res["TrafficMatchRuleStatus"] = boost::any(*trafficMatchRuleStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstCidr") != m.end() && !m["DstCidr"].empty()) {
      dstCidr = make_shared<string>(boost::any_cast<string>(m["DstCidr"]));
    }
    if (m.find("DstPortRange") != m.end() && !m["DstPortRange"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DstPortRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DstPortRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dstPortRange = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MatchDscp") != m.end() && !m["MatchDscp"].empty()) {
      matchDscp = make_shared<long>(boost::any_cast<long>(m["MatchDscp"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("SrcCidr") != m.end() && !m["SrcCidr"].empty()) {
      srcCidr = make_shared<string>(boost::any_cast<string>(m["SrcCidr"]));
    }
    if (m.find("SrcPortRange") != m.end() && !m["SrcPortRange"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SrcPortRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SrcPortRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      srcPortRange = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TrafficMatchRuleDescription") != m.end() && !m["TrafficMatchRuleDescription"].empty()) {
      trafficMatchRuleDescription = make_shared<string>(boost::any_cast<string>(m["TrafficMatchRuleDescription"]));
    }
    if (m.find("TrafficMatchRuleId") != m.end() && !m["TrafficMatchRuleId"].empty()) {
      trafficMatchRuleId = make_shared<string>(boost::any_cast<string>(m["TrafficMatchRuleId"]));
    }
    if (m.find("TrafficMatchRuleName") != m.end() && !m["TrafficMatchRuleName"].empty()) {
      trafficMatchRuleName = make_shared<string>(boost::any_cast<string>(m["TrafficMatchRuleName"]));
    }
    if (m.find("TrafficMatchRuleStatus") != m.end() && !m["TrafficMatchRuleStatus"].empty()) {
      trafficMatchRuleStatus = make_shared<string>(boost::any_cast<string>(m["TrafficMatchRuleStatus"]));
    }
  }


  virtual ~ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules() = default;
};
class ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies : public Darabonba::Model {
public:
  shared_ptr<long> markingDscp{};
  shared_ptr<long> priority{};
  shared_ptr<string> trafficMarkingPolicyDescription{};
  shared_ptr<string> trafficMarkingPolicyId{};
  shared_ptr<string> trafficMarkingPolicyName{};
  shared_ptr<string> trafficMarkingPolicyStatus{};
  shared_ptr<vector<ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules>> trafficMatchRules{};

  ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies() {}

  explicit ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (markingDscp) {
      res["MarkingDscp"] = boost::any(*markingDscp);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (trafficMarkingPolicyDescription) {
      res["TrafficMarkingPolicyDescription"] = boost::any(*trafficMarkingPolicyDescription);
    }
    if (trafficMarkingPolicyId) {
      res["TrafficMarkingPolicyId"] = boost::any(*trafficMarkingPolicyId);
    }
    if (trafficMarkingPolicyName) {
      res["TrafficMarkingPolicyName"] = boost::any(*trafficMarkingPolicyName);
    }
    if (trafficMarkingPolicyStatus) {
      res["TrafficMarkingPolicyStatus"] = boost::any(*trafficMarkingPolicyStatus);
    }
    if (trafficMatchRules) {
      vector<boost::any> temp1;
      for(auto item1:*trafficMatchRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrafficMatchRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MarkingDscp") != m.end() && !m["MarkingDscp"].empty()) {
      markingDscp = make_shared<long>(boost::any_cast<long>(m["MarkingDscp"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("TrafficMarkingPolicyDescription") != m.end() && !m["TrafficMarkingPolicyDescription"].empty()) {
      trafficMarkingPolicyDescription = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyDescription"]));
    }
    if (m.find("TrafficMarkingPolicyId") != m.end() && !m["TrafficMarkingPolicyId"].empty()) {
      trafficMarkingPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyId"]));
    }
    if (m.find("TrafficMarkingPolicyName") != m.end() && !m["TrafficMarkingPolicyName"].empty()) {
      trafficMarkingPolicyName = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyName"]));
    }
    if (m.find("TrafficMarkingPolicyStatus") != m.end() && !m["TrafficMarkingPolicyStatus"].empty()) {
      trafficMarkingPolicyStatus = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyStatus"]));
    }
    if (m.find("TrafficMatchRules") != m.end() && !m["TrafficMatchRules"].empty()) {
      if (typeid(vector<boost::any>) == m["TrafficMatchRules"].type()) {
        vector<ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrafficMatchRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trafficMatchRules = make_shared<vector<ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules>>(expect1);
      }
    }
  }


  virtual ~ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies() = default;
};
class ListTrafficMarkingPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies>> trafficMarkingPolicies{};

  ListTrafficMarkingPoliciesResponseBody() {}

  explicit ListTrafficMarkingPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (trafficMarkingPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*trafficMarkingPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrafficMarkingPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TrafficMarkingPolicies") != m.end() && !m["TrafficMarkingPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["TrafficMarkingPolicies"].type()) {
        vector<ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrafficMarkingPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trafficMarkingPolicies = make_shared<vector<ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPolicies>>(expect1);
      }
    }
  }


  virtual ~ListTrafficMarkingPoliciesResponseBody() = default;
};
class ListTrafficMarkingPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTrafficMarkingPoliciesResponseBody> body{};

  ListTrafficMarkingPoliciesResponse() {}

  explicit ListTrafficMarkingPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTrafficMarkingPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrafficMarkingPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrafficMarkingPoliciesResponse() = default;
};
class ListTransitRouterAvailableResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListTransitRouterAvailableResourceRequest() {}

  explicit ListTransitRouterAvailableResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListTransitRouterAvailableResourceRequest() = default;
};
class ListTransitRouterAvailableResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> masterZones{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> slaveZones{};

  ListTransitRouterAvailableResourceResponseBody() {}

  explicit ListTransitRouterAvailableResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterZones) {
      res["MasterZones"] = boost::any(*masterZones);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slaveZones) {
      res["SlaveZones"] = boost::any(*slaveZones);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MasterZones") != m.end() && !m["MasterZones"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MasterZones"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MasterZones"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      masterZones = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlaveZones") != m.end() && !m["SlaveZones"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SlaveZones"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SlaveZones"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      slaveZones = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTransitRouterAvailableResourceResponseBody() = default;
};
class ListTransitRouterAvailableResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTransitRouterAvailableResourceResponseBody> body{};

  ListTransitRouterAvailableResourceResponse() {}

  explicit ListTransitRouterAvailableResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTransitRouterAvailableResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTransitRouterAvailableResourceResponseBody>(model1);
      }
    }
  }


  virtual ~ListTransitRouterAvailableResourceResponse() = default;
};
class ListTransitRouterPeerAttachmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterId{};

  ListTransitRouterPeerAttachmentsRequest() {}

  explicit ListTransitRouterPeerAttachmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~ListTransitRouterPeerAttachmentsRequest() = default;
};
class ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments : public Darabonba::Model {
public:
  shared_ptr<bool> autoPublishRouteEnabled{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bandwidthType{};
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> geographicSpanId{};
  shared_ptr<string> peerTransitRouterId{};
  shared_ptr<long> peerTransitRouterOwnerId{};
  shared_ptr<string> peerTransitRouterRegionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> transitRouterAttachmentDescription{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterAttachmentName{};
  shared_ptr<string> transitRouterId{};

  ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments() {}

  explicit ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPublishRouteEnabled) {
      res["AutoPublishRouteEnabled"] = boost::any(*autoPublishRouteEnabled);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bandwidthType) {
      res["BandwidthType"] = boost::any(*bandwidthType);
    }
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (geographicSpanId) {
      res["GeographicSpanId"] = boost::any(*geographicSpanId);
    }
    if (peerTransitRouterId) {
      res["PeerTransitRouterId"] = boost::any(*peerTransitRouterId);
    }
    if (peerTransitRouterOwnerId) {
      res["PeerTransitRouterOwnerId"] = boost::any(*peerTransitRouterOwnerId);
    }
    if (peerTransitRouterRegionId) {
      res["PeerTransitRouterRegionId"] = boost::any(*peerTransitRouterRegionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transitRouterAttachmentDescription) {
      res["TransitRouterAttachmentDescription"] = boost::any(*transitRouterAttachmentDescription);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterAttachmentName) {
      res["TransitRouterAttachmentName"] = boost::any(*transitRouterAttachmentName);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPublishRouteEnabled") != m.end() && !m["AutoPublishRouteEnabled"].empty()) {
      autoPublishRouteEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoPublishRouteEnabled"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BandwidthType") != m.end() && !m["BandwidthType"].empty()) {
      bandwidthType = make_shared<string>(boost::any_cast<string>(m["BandwidthType"]));
    }
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("GeographicSpanId") != m.end() && !m["GeographicSpanId"].empty()) {
      geographicSpanId = make_shared<string>(boost::any_cast<string>(m["GeographicSpanId"]));
    }
    if (m.find("PeerTransitRouterId") != m.end() && !m["PeerTransitRouterId"].empty()) {
      peerTransitRouterId = make_shared<string>(boost::any_cast<string>(m["PeerTransitRouterId"]));
    }
    if (m.find("PeerTransitRouterOwnerId") != m.end() && !m["PeerTransitRouterOwnerId"].empty()) {
      peerTransitRouterOwnerId = make_shared<long>(boost::any_cast<long>(m["PeerTransitRouterOwnerId"]));
    }
    if (m.find("PeerTransitRouterRegionId") != m.end() && !m["PeerTransitRouterRegionId"].empty()) {
      peerTransitRouterRegionId = make_shared<string>(boost::any_cast<string>(m["PeerTransitRouterRegionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransitRouterAttachmentDescription") != m.end() && !m["TransitRouterAttachmentDescription"].empty()) {
      transitRouterAttachmentDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentDescription"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterAttachmentName") != m.end() && !m["TransitRouterAttachmentName"].empty()) {
      transitRouterAttachmentName = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentName"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments() = default;
};
class ListTransitRouterPeerAttachmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments>> transitRouterAttachments{};

  ListTransitRouterPeerAttachmentsResponseBody() {}

  explicit ListTransitRouterPeerAttachmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (transitRouterAttachments) {
      vector<boost::any> temp1;
      for(auto item1:*transitRouterAttachments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitRouterAttachments"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TransitRouterAttachments") != m.end() && !m["TransitRouterAttachments"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitRouterAttachments"].type()) {
        vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitRouterAttachments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitRouterAttachments = make_shared<vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments>>(expect1);
      }
    }
  }


  virtual ~ListTransitRouterPeerAttachmentsResponseBody() = default;
};
class ListTransitRouterPeerAttachmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTransitRouterPeerAttachmentsResponseBody> body{};

  ListTransitRouterPeerAttachmentsResponse() {}

  explicit ListTransitRouterPeerAttachmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTransitRouterPeerAttachmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTransitRouterPeerAttachmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTransitRouterPeerAttachmentsResponse() = default;
};
class ListTransitRouterRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterRouteEntryDestinationCidrBlock{};
  shared_ptr<vector<string>> transitRouterRouteEntryIds{};
  shared_ptr<vector<string>> transitRouterRouteEntryNames{};
  shared_ptr<string> transitRouterRouteEntryStatus{};
  shared_ptr<string> transitRouterRouteTableId{};

  ListTransitRouterRouteEntriesRequest() {}

  explicit ListTransitRouterRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterRouteEntryDestinationCidrBlock) {
      res["TransitRouterRouteEntryDestinationCidrBlock"] = boost::any(*transitRouterRouteEntryDestinationCidrBlock);
    }
    if (transitRouterRouteEntryIds) {
      res["TransitRouterRouteEntryIds"] = boost::any(*transitRouterRouteEntryIds);
    }
    if (transitRouterRouteEntryNames) {
      res["TransitRouterRouteEntryNames"] = boost::any(*transitRouterRouteEntryNames);
    }
    if (transitRouterRouteEntryStatus) {
      res["TransitRouterRouteEntryStatus"] = boost::any(*transitRouterRouteEntryStatus);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterRouteEntryDestinationCidrBlock") != m.end() && !m["TransitRouterRouteEntryDestinationCidrBlock"].empty()) {
      transitRouterRouteEntryDestinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryDestinationCidrBlock"]));
    }
    if (m.find("TransitRouterRouteEntryIds") != m.end() && !m["TransitRouterRouteEntryIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TransitRouterRouteEntryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TransitRouterRouteEntryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      transitRouterRouteEntryIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TransitRouterRouteEntryNames") != m.end() && !m["TransitRouterRouteEntryNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TransitRouterRouteEntryNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TransitRouterRouteEntryNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      transitRouterRouteEntryNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TransitRouterRouteEntryStatus") != m.end() && !m["TransitRouterRouteEntryStatus"].empty()) {
      transitRouterRouteEntryStatus = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryStatus"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~ListTransitRouterRouteEntriesRequest() = default;
};
class ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> transitRouterRouteEntryDescription{};
  shared_ptr<string> transitRouterRouteEntryDestinationCidrBlock{};
  shared_ptr<string> transitRouterRouteEntryId{};
  shared_ptr<string> transitRouterRouteEntryName{};
  shared_ptr<string> transitRouterRouteEntryNextHopId{};
  shared_ptr<string> transitRouterRouteEntryNextHopType{};
  shared_ptr<string> transitRouterRouteEntryStatus{};
  shared_ptr<string> transitRouterRouteEntryType{};

  ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries() {}

  explicit ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (transitRouterRouteEntryDescription) {
      res["TransitRouterRouteEntryDescription"] = boost::any(*transitRouterRouteEntryDescription);
    }
    if (transitRouterRouteEntryDestinationCidrBlock) {
      res["TransitRouterRouteEntryDestinationCidrBlock"] = boost::any(*transitRouterRouteEntryDestinationCidrBlock);
    }
    if (transitRouterRouteEntryId) {
      res["TransitRouterRouteEntryId"] = boost::any(*transitRouterRouteEntryId);
    }
    if (transitRouterRouteEntryName) {
      res["TransitRouterRouteEntryName"] = boost::any(*transitRouterRouteEntryName);
    }
    if (transitRouterRouteEntryNextHopId) {
      res["TransitRouterRouteEntryNextHopId"] = boost::any(*transitRouterRouteEntryNextHopId);
    }
    if (transitRouterRouteEntryNextHopType) {
      res["TransitRouterRouteEntryNextHopType"] = boost::any(*transitRouterRouteEntryNextHopType);
    }
    if (transitRouterRouteEntryStatus) {
      res["TransitRouterRouteEntryStatus"] = boost::any(*transitRouterRouteEntryStatus);
    }
    if (transitRouterRouteEntryType) {
      res["TransitRouterRouteEntryType"] = boost::any(*transitRouterRouteEntryType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TransitRouterRouteEntryDescription") != m.end() && !m["TransitRouterRouteEntryDescription"].empty()) {
      transitRouterRouteEntryDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryDescription"]));
    }
    if (m.find("TransitRouterRouteEntryDestinationCidrBlock") != m.end() && !m["TransitRouterRouteEntryDestinationCidrBlock"].empty()) {
      transitRouterRouteEntryDestinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryDestinationCidrBlock"]));
    }
    if (m.find("TransitRouterRouteEntryId") != m.end() && !m["TransitRouterRouteEntryId"].empty()) {
      transitRouterRouteEntryId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryId"]));
    }
    if (m.find("TransitRouterRouteEntryName") != m.end() && !m["TransitRouterRouteEntryName"].empty()) {
      transitRouterRouteEntryName = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryName"]));
    }
    if (m.find("TransitRouterRouteEntryNextHopId") != m.end() && !m["TransitRouterRouteEntryNextHopId"].empty()) {
      transitRouterRouteEntryNextHopId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryNextHopId"]));
    }
    if (m.find("TransitRouterRouteEntryNextHopType") != m.end() && !m["TransitRouterRouteEntryNextHopType"].empty()) {
      transitRouterRouteEntryNextHopType = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryNextHopType"]));
    }
    if (m.find("TransitRouterRouteEntryStatus") != m.end() && !m["TransitRouterRouteEntryStatus"].empty()) {
      transitRouterRouteEntryStatus = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryStatus"]));
    }
    if (m.find("TransitRouterRouteEntryType") != m.end() && !m["TransitRouterRouteEntryType"].empty()) {
      transitRouterRouteEntryType = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryType"]));
    }
  }


  virtual ~ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries() = default;
};
class ListTransitRouterRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries>> transitRouterRouteEntries{};

  ListTransitRouterRouteEntriesResponseBody() {}

  explicit ListTransitRouterRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (transitRouterRouteEntries) {
      vector<boost::any> temp1;
      for(auto item1:*transitRouterRouteEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitRouterRouteEntries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TransitRouterRouteEntries") != m.end() && !m["TransitRouterRouteEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitRouterRouteEntries"].type()) {
        vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitRouterRouteEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitRouterRouteEntries = make_shared<vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries>>(expect1);
      }
    }
  }


  virtual ~ListTransitRouterRouteEntriesResponseBody() = default;
};
class ListTransitRouterRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTransitRouterRouteEntriesResponseBody> body{};

  ListTransitRouterRouteEntriesResponse() {}

  explicit ListTransitRouterRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTransitRouterRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTransitRouterRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTransitRouterRouteEntriesResponse() = default;
};
class ListTransitRouterRouteTableAssociationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterRouteTableId{};

  ListTransitRouterRouteTableAssociationsRequest() {}

  explicit ListTransitRouterRouteTableAssociationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~ListTransitRouterRouteTableAssociationsRequest() = default;
};
class ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterRouteTableId{};

  ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations() {}

  explicit ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations() = default;
};
class ListTransitRouterRouteTableAssociationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations>> transitRouterAssociations{};

  ListTransitRouterRouteTableAssociationsResponseBody() {}

  explicit ListTransitRouterRouteTableAssociationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (transitRouterAssociations) {
      vector<boost::any> temp1;
      for(auto item1:*transitRouterAssociations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitRouterAssociations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TransitRouterAssociations") != m.end() && !m["TransitRouterAssociations"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitRouterAssociations"].type()) {
        vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitRouterAssociations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitRouterAssociations = make_shared<vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations>>(expect1);
      }
    }
  }


  virtual ~ListTransitRouterRouteTableAssociationsResponseBody() = default;
};
class ListTransitRouterRouteTableAssociationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTransitRouterRouteTableAssociationsResponseBody> body{};

  ListTransitRouterRouteTableAssociationsResponse() {}

  explicit ListTransitRouterRouteTableAssociationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTransitRouterRouteTableAssociationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTransitRouterRouteTableAssociationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTransitRouterRouteTableAssociationsResponse() = default;
};
class ListTransitRouterRouteTablePropagationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterRouteTableId{};

  ListTransitRouterRouteTablePropagationsRequest() {}

  explicit ListTransitRouterRouteTablePropagationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~ListTransitRouterRouteTablePropagationsRequest() = default;
};
class ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterRouteTableId{};

  ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations() {}

  explicit ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations() = default;
};
class ListTransitRouterRouteTablePropagationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations>> transitRouterPropagations{};

  ListTransitRouterRouteTablePropagationsResponseBody() {}

  explicit ListTransitRouterRouteTablePropagationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (transitRouterPropagations) {
      vector<boost::any> temp1;
      for(auto item1:*transitRouterPropagations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitRouterPropagations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TransitRouterPropagations") != m.end() && !m["TransitRouterPropagations"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitRouterPropagations"].type()) {
        vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitRouterPropagations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitRouterPropagations = make_shared<vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations>>(expect1);
      }
    }
  }


  virtual ~ListTransitRouterRouteTablePropagationsResponseBody() = default;
};
class ListTransitRouterRouteTablePropagationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTransitRouterRouteTablePropagationsResponseBody> body{};

  ListTransitRouterRouteTablePropagationsResponse() {}

  explicit ListTransitRouterRouteTablePropagationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTransitRouterRouteTablePropagationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTransitRouterRouteTablePropagationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTransitRouterRouteTablePropagationsResponse() = default;
};
class ListTransitRouterRouteTablesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<vector<string>> transitRouterRouteTableIds{};
  shared_ptr<vector<string>> transitRouterRouteTableNames{};
  shared_ptr<string> transitRouterRouteTableStatus{};
  shared_ptr<string> transitRouterRouteTableType{};

  ListTransitRouterRouteTablesRequest() {}

  explicit ListTransitRouterRouteTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (transitRouterRouteTableIds) {
      res["TransitRouterRouteTableIds"] = boost::any(*transitRouterRouteTableIds);
    }
    if (transitRouterRouteTableNames) {
      res["TransitRouterRouteTableNames"] = boost::any(*transitRouterRouteTableNames);
    }
    if (transitRouterRouteTableStatus) {
      res["TransitRouterRouteTableStatus"] = boost::any(*transitRouterRouteTableStatus);
    }
    if (transitRouterRouteTableType) {
      res["TransitRouterRouteTableType"] = boost::any(*transitRouterRouteTableType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("TransitRouterRouteTableIds") != m.end() && !m["TransitRouterRouteTableIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TransitRouterRouteTableIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TransitRouterRouteTableIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      transitRouterRouteTableIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TransitRouterRouteTableNames") != m.end() && !m["TransitRouterRouteTableNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TransitRouterRouteTableNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TransitRouterRouteTableNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      transitRouterRouteTableNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TransitRouterRouteTableStatus") != m.end() && !m["TransitRouterRouteTableStatus"].empty()) {
      transitRouterRouteTableStatus = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableStatus"]));
    }
    if (m.find("TransitRouterRouteTableType") != m.end() && !m["TransitRouterRouteTableType"].empty()) {
      transitRouterRouteTableType = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableType"]));
    }
  }


  virtual ~ListTransitRouterRouteTablesRequest() = default;
};
class ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> transitRouterRouteTableDescription{};
  shared_ptr<string> transitRouterRouteTableId{};
  shared_ptr<string> transitRouterRouteTableName{};
  shared_ptr<string> transitRouterRouteTableStatus{};
  shared_ptr<string> transitRouterRouteTableType{};

  ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables() {}

  explicit ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (transitRouterRouteTableDescription) {
      res["TransitRouterRouteTableDescription"] = boost::any(*transitRouterRouteTableDescription);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    if (transitRouterRouteTableName) {
      res["TransitRouterRouteTableName"] = boost::any(*transitRouterRouteTableName);
    }
    if (transitRouterRouteTableStatus) {
      res["TransitRouterRouteTableStatus"] = boost::any(*transitRouterRouteTableStatus);
    }
    if (transitRouterRouteTableType) {
      res["TransitRouterRouteTableType"] = boost::any(*transitRouterRouteTableType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TransitRouterRouteTableDescription") != m.end() && !m["TransitRouterRouteTableDescription"].empty()) {
      transitRouterRouteTableDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableDescription"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
    if (m.find("TransitRouterRouteTableName") != m.end() && !m["TransitRouterRouteTableName"].empty()) {
      transitRouterRouteTableName = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableName"]));
    }
    if (m.find("TransitRouterRouteTableStatus") != m.end() && !m["TransitRouterRouteTableStatus"].empty()) {
      transitRouterRouteTableStatus = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableStatus"]));
    }
    if (m.find("TransitRouterRouteTableType") != m.end() && !m["TransitRouterRouteTableType"].empty()) {
      transitRouterRouteTableType = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableType"]));
    }
  }


  virtual ~ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables() = default;
};
class ListTransitRouterRouteTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables>> transitRouterRouteTables{};

  ListTransitRouterRouteTablesResponseBody() {}

  explicit ListTransitRouterRouteTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (transitRouterRouteTables) {
      vector<boost::any> temp1;
      for(auto item1:*transitRouterRouteTables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitRouterRouteTables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TransitRouterRouteTables") != m.end() && !m["TransitRouterRouteTables"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitRouterRouteTables"].type()) {
        vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitRouterRouteTables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitRouterRouteTables = make_shared<vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables>>(expect1);
      }
    }
  }


  virtual ~ListTransitRouterRouteTablesResponseBody() = default;
};
class ListTransitRouterRouteTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTransitRouterRouteTablesResponseBody> body{};

  ListTransitRouterRouteTablesResponse() {}

  explicit ListTransitRouterRouteTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTransitRouterRouteTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTransitRouterRouteTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTransitRouterRouteTablesResponse() = default;
};
class ListTransitRouterVbrAttachmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterId{};

  ListTransitRouterVbrAttachmentsRequest() {}

  explicit ListTransitRouterVbrAttachmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~ListTransitRouterVbrAttachmentsRequest() = default;
};
class ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments : public Darabonba::Model {
public:
  shared_ptr<bool> autoPublishRouteEnabled{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> transitRouterAttachmentDescription{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterAttachmentName{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<string> vbrId{};
  shared_ptr<long> vbrOwnerId{};
  shared_ptr<string> vbrRegionId{};

  ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments() {}

  explicit ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPublishRouteEnabled) {
      res["AutoPublishRouteEnabled"] = boost::any(*autoPublishRouteEnabled);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transitRouterAttachmentDescription) {
      res["TransitRouterAttachmentDescription"] = boost::any(*transitRouterAttachmentDescription);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterAttachmentName) {
      res["TransitRouterAttachmentName"] = boost::any(*transitRouterAttachmentName);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (vbrId) {
      res["VbrId"] = boost::any(*vbrId);
    }
    if (vbrOwnerId) {
      res["VbrOwnerId"] = boost::any(*vbrOwnerId);
    }
    if (vbrRegionId) {
      res["VbrRegionId"] = boost::any(*vbrRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPublishRouteEnabled") != m.end() && !m["AutoPublishRouteEnabled"].empty()) {
      autoPublishRouteEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoPublishRouteEnabled"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransitRouterAttachmentDescription") != m.end() && !m["TransitRouterAttachmentDescription"].empty()) {
      transitRouterAttachmentDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentDescription"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterAttachmentName") != m.end() && !m["TransitRouterAttachmentName"].empty()) {
      transitRouterAttachmentName = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentName"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("VbrId") != m.end() && !m["VbrId"].empty()) {
      vbrId = make_shared<string>(boost::any_cast<string>(m["VbrId"]));
    }
    if (m.find("VbrOwnerId") != m.end() && !m["VbrOwnerId"].empty()) {
      vbrOwnerId = make_shared<long>(boost::any_cast<long>(m["VbrOwnerId"]));
    }
    if (m.find("VbrRegionId") != m.end() && !m["VbrRegionId"].empty()) {
      vbrRegionId = make_shared<string>(boost::any_cast<string>(m["VbrRegionId"]));
    }
  }


  virtual ~ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments() = default;
};
class ListTransitRouterVbrAttachmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments>> transitRouterAttachments{};

  ListTransitRouterVbrAttachmentsResponseBody() {}

  explicit ListTransitRouterVbrAttachmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (transitRouterAttachments) {
      vector<boost::any> temp1;
      for(auto item1:*transitRouterAttachments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitRouterAttachments"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TransitRouterAttachments") != m.end() && !m["TransitRouterAttachments"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitRouterAttachments"].type()) {
        vector<ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitRouterAttachments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitRouterAttachments = make_shared<vector<ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments>>(expect1);
      }
    }
  }


  virtual ~ListTransitRouterVbrAttachmentsResponseBody() = default;
};
class ListTransitRouterVbrAttachmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTransitRouterVbrAttachmentsResponseBody> body{};

  ListTransitRouterVbrAttachmentsResponse() {}

  explicit ListTransitRouterVbrAttachmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTransitRouterVbrAttachmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTransitRouterVbrAttachmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTransitRouterVbrAttachmentsResponse() = default;
};
class ListTransitRouterVpcAttachmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterId{};

  ListTransitRouterVpcAttachmentsRequest() {}

  explicit ListTransitRouterVpcAttachmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~ListTransitRouterVpcAttachmentsRequest() = default;
};
class ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings() {}

  explicit ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings() = default;
};
class ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> transitRouterAttachmentDescription{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterAttachmentName{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> vpcOwnerId{};
  shared_ptr<string> vpcRegionId{};
  shared_ptr<vector<ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings>> zoneMappings{};

  ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments() {}

  explicit ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transitRouterAttachmentDescription) {
      res["TransitRouterAttachmentDescription"] = boost::any(*transitRouterAttachmentDescription);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterAttachmentName) {
      res["TransitRouterAttachmentName"] = boost::any(*transitRouterAttachmentName);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcOwnerId) {
      res["VpcOwnerId"] = boost::any(*vpcOwnerId);
    }
    if (vpcRegionId) {
      res["VpcRegionId"] = boost::any(*vpcRegionId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransitRouterAttachmentDescription") != m.end() && !m["TransitRouterAttachmentDescription"].empty()) {
      transitRouterAttachmentDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentDescription"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterAttachmentName") != m.end() && !m["TransitRouterAttachmentName"].empty()) {
      transitRouterAttachmentName = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentName"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcOwnerId") != m.end() && !m["VpcOwnerId"].empty()) {
      vpcOwnerId = make_shared<long>(boost::any_cast<long>(m["VpcOwnerId"]));
    }
    if (m.find("VpcRegionId") != m.end() && !m["VpcRegionId"].empty()) {
      vpcRegionId = make_shared<string>(boost::any_cast<string>(m["VpcRegionId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings>>(expect1);
      }
    }
  }


  virtual ~ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments() = default;
};
class ListTransitRouterVpcAttachmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments>> transitRouterAttachments{};

  ListTransitRouterVpcAttachmentsResponseBody() {}

  explicit ListTransitRouterVpcAttachmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (transitRouterAttachments) {
      vector<boost::any> temp1;
      for(auto item1:*transitRouterAttachments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitRouterAttachments"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TransitRouterAttachments") != m.end() && !m["TransitRouterAttachments"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitRouterAttachments"].type()) {
        vector<ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitRouterAttachments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitRouterAttachments = make_shared<vector<ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments>>(expect1);
      }
    }
  }


  virtual ~ListTransitRouterVpcAttachmentsResponseBody() = default;
};
class ListTransitRouterVpcAttachmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTransitRouterVpcAttachmentsResponseBody> body{};

  ListTransitRouterVpcAttachmentsResponse() {}

  explicit ListTransitRouterVpcAttachmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTransitRouterVpcAttachmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTransitRouterVpcAttachmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTransitRouterVpcAttachmentsResponse() = default;
};
class ListTransitRoutersRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterId{};

  ListTransitRoutersRequest() {}

  explicit ListTransitRoutersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~ListTransitRoutersRequest() = default;
};
class ListTransitRoutersResponseBodyTransitRouters : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> cenId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> transitRouterDescription{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<string> transitRouterName{};
  shared_ptr<string> type{};

  ListTransitRoutersResponseBodyTransitRouters() {}

  explicit ListTransitRoutersResponseBodyTransitRouters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transitRouterDescription) {
      res["TransitRouterDescription"] = boost::any(*transitRouterDescription);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (transitRouterName) {
      res["TransitRouterName"] = boost::any(*transitRouterName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransitRouterDescription") != m.end() && !m["TransitRouterDescription"].empty()) {
      transitRouterDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterDescription"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("TransitRouterName") != m.end() && !m["TransitRouterName"].empty()) {
      transitRouterName = make_shared<string>(boost::any_cast<string>(m["TransitRouterName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListTransitRoutersResponseBodyTransitRouters() = default;
};
class ListTransitRoutersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTransitRoutersResponseBodyTransitRouters>> transitRouters{};

  ListTransitRoutersResponseBody() {}

  explicit ListTransitRoutersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (transitRouters) {
      vector<boost::any> temp1;
      for(auto item1:*transitRouters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitRouters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TransitRouters") != m.end() && !m["TransitRouters"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitRouters"].type()) {
        vector<ListTransitRoutersResponseBodyTransitRouters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitRouters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTransitRoutersResponseBodyTransitRouters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitRouters = make_shared<vector<ListTransitRoutersResponseBodyTransitRouters>>(expect1);
      }
    }
  }


  virtual ~ListTransitRoutersResponseBody() = default;
};
class ListTransitRoutersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTransitRoutersResponseBody> body{};

  ListTransitRoutersResponse() {}

  explicit ListTransitRoutersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTransitRoutersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTransitRoutersResponseBody>(model1);
      }
    }
  }


  virtual ~ListTransitRoutersResponse() = default;
};
class ModifyCenAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> protectionLevel{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyCenAttributeRequest() {}

  explicit ModifyCenAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (protectionLevel) {
      res["ProtectionLevel"] = boost::any(*protectionLevel);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProtectionLevel") != m.end() && !m["ProtectionLevel"].empty()) {
      protectionLevel = make_shared<string>(boost::any_cast<string>(m["ProtectionLevel"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyCenAttributeRequest() = default;
};
class ModifyCenAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyCenAttributeResponseBody() {}

  explicit ModifyCenAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyCenAttributeResponseBody() = default;
};
class ModifyCenAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyCenAttributeResponseBody> body{};

  ModifyCenAttributeResponse() {}

  explicit ModifyCenAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyCenAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCenAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCenAttributeResponse() = default;
};
class ModifyCenBandwidthPackageAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyCenBandwidthPackageAttributeRequest() {}

  explicit ModifyCenBandwidthPackageAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyCenBandwidthPackageAttributeRequest() = default;
};
class ModifyCenBandwidthPackageAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyCenBandwidthPackageAttributeResponseBody() {}

  explicit ModifyCenBandwidthPackageAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyCenBandwidthPackageAttributeResponseBody() = default;
};
class ModifyCenBandwidthPackageAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyCenBandwidthPackageAttributeResponseBody> body{};

  ModifyCenBandwidthPackageAttributeResponse() {}

  explicit ModifyCenBandwidthPackageAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyCenBandwidthPackageAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCenBandwidthPackageAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCenBandwidthPackageAttributeResponse() = default;
};
class ModifyCenBandwidthPackageSpecRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyCenBandwidthPackageSpecRequest() {}

  explicit ModifyCenBandwidthPackageSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyCenBandwidthPackageSpecRequest() = default;
};
class ModifyCenBandwidthPackageSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyCenBandwidthPackageSpecResponseBody() {}

  explicit ModifyCenBandwidthPackageSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyCenBandwidthPackageSpecResponseBody() = default;
};
class ModifyCenBandwidthPackageSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyCenBandwidthPackageSpecResponseBody> body{};

  ModifyCenBandwidthPackageSpecResponse() {}

  explicit ModifyCenBandwidthPackageSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyCenBandwidthPackageSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCenBandwidthPackageSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCenBandwidthPackageSpecResponse() = default;
};
class ModifyCenRouteMapRequest : public Darabonba::Model {
public:
  shared_ptr<string> asPathMatchMode{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cenRegionId{};
  shared_ptr<string> cidrMatchMode{};
  shared_ptr<string> communityMatchMode{};
  shared_ptr<string> communityOperateMode{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> destinationChildInstanceTypes{};
  shared_ptr<vector<string>> destinationCidrBlocks{};
  shared_ptr<vector<string>> destinationInstanceIds{};
  shared_ptr<bool> destinationInstanceIdsReverseMatch{};
  shared_ptr<vector<string>> destinationRouteTableIds{};
  shared_ptr<string> mapResult{};
  shared_ptr<vector<long>> matchAsns{};
  shared_ptr<vector<string>> matchCommunitySet{};
  shared_ptr<long> nextPriority{};
  shared_ptr<vector<string>> operateCommunitySet{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> preference{};
  shared_ptr<vector<long>> prependAsPath{};
  shared_ptr<long> priority{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> routeMapId{};
  shared_ptr<vector<string>> routeTypes{};
  shared_ptr<vector<string>> sourceChildInstanceTypes{};
  shared_ptr<vector<string>> sourceInstanceIds{};
  shared_ptr<bool> sourceInstanceIdsReverseMatch{};
  shared_ptr<vector<string>> sourceRegionIds{};
  shared_ptr<vector<string>> sourceRouteTableIds{};

  ModifyCenRouteMapRequest() {}

  explicit ModifyCenRouteMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPathMatchMode) {
      res["AsPathMatchMode"] = boost::any(*asPathMatchMode);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenRegionId) {
      res["CenRegionId"] = boost::any(*cenRegionId);
    }
    if (cidrMatchMode) {
      res["CidrMatchMode"] = boost::any(*cidrMatchMode);
    }
    if (communityMatchMode) {
      res["CommunityMatchMode"] = boost::any(*communityMatchMode);
    }
    if (communityOperateMode) {
      res["CommunityOperateMode"] = boost::any(*communityOperateMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationChildInstanceTypes) {
      res["DestinationChildInstanceTypes"] = boost::any(*destinationChildInstanceTypes);
    }
    if (destinationCidrBlocks) {
      res["DestinationCidrBlocks"] = boost::any(*destinationCidrBlocks);
    }
    if (destinationInstanceIds) {
      res["DestinationInstanceIds"] = boost::any(*destinationInstanceIds);
    }
    if (destinationInstanceIdsReverseMatch) {
      res["DestinationInstanceIdsReverseMatch"] = boost::any(*destinationInstanceIdsReverseMatch);
    }
    if (destinationRouteTableIds) {
      res["DestinationRouteTableIds"] = boost::any(*destinationRouteTableIds);
    }
    if (mapResult) {
      res["MapResult"] = boost::any(*mapResult);
    }
    if (matchAsns) {
      res["MatchAsns"] = boost::any(*matchAsns);
    }
    if (matchCommunitySet) {
      res["MatchCommunitySet"] = boost::any(*matchCommunitySet);
    }
    if (nextPriority) {
      res["NextPriority"] = boost::any(*nextPriority);
    }
    if (operateCommunitySet) {
      res["OperateCommunitySet"] = boost::any(*operateCommunitySet);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (preference) {
      res["Preference"] = boost::any(*preference);
    }
    if (prependAsPath) {
      res["PrependAsPath"] = boost::any(*prependAsPath);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeMapId) {
      res["RouteMapId"] = boost::any(*routeMapId);
    }
    if (routeTypes) {
      res["RouteTypes"] = boost::any(*routeTypes);
    }
    if (sourceChildInstanceTypes) {
      res["SourceChildInstanceTypes"] = boost::any(*sourceChildInstanceTypes);
    }
    if (sourceInstanceIds) {
      res["SourceInstanceIds"] = boost::any(*sourceInstanceIds);
    }
    if (sourceInstanceIdsReverseMatch) {
      res["SourceInstanceIdsReverseMatch"] = boost::any(*sourceInstanceIdsReverseMatch);
    }
    if (sourceRegionIds) {
      res["SourceRegionIds"] = boost::any(*sourceRegionIds);
    }
    if (sourceRouteTableIds) {
      res["SourceRouteTableIds"] = boost::any(*sourceRouteTableIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPathMatchMode") != m.end() && !m["AsPathMatchMode"].empty()) {
      asPathMatchMode = make_shared<string>(boost::any_cast<string>(m["AsPathMatchMode"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenRegionId") != m.end() && !m["CenRegionId"].empty()) {
      cenRegionId = make_shared<string>(boost::any_cast<string>(m["CenRegionId"]));
    }
    if (m.find("CidrMatchMode") != m.end() && !m["CidrMatchMode"].empty()) {
      cidrMatchMode = make_shared<string>(boost::any_cast<string>(m["CidrMatchMode"]));
    }
    if (m.find("CommunityMatchMode") != m.end() && !m["CommunityMatchMode"].empty()) {
      communityMatchMode = make_shared<string>(boost::any_cast<string>(m["CommunityMatchMode"]));
    }
    if (m.find("CommunityOperateMode") != m.end() && !m["CommunityOperateMode"].empty()) {
      communityOperateMode = make_shared<string>(boost::any_cast<string>(m["CommunityOperateMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationChildInstanceTypes") != m.end() && !m["DestinationChildInstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationChildInstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationChildInstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationChildInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationCidrBlocks") != m.end() && !m["DestinationCidrBlocks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationCidrBlocks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationCidrBlocks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationCidrBlocks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationInstanceIds") != m.end() && !m["DestinationInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationInstanceIdsReverseMatch") != m.end() && !m["DestinationInstanceIdsReverseMatch"].empty()) {
      destinationInstanceIdsReverseMatch = make_shared<bool>(boost::any_cast<bool>(m["DestinationInstanceIdsReverseMatch"]));
    }
    if (m.find("DestinationRouteTableIds") != m.end() && !m["DestinationRouteTableIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationRouteTableIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationRouteTableIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationRouteTableIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MapResult") != m.end() && !m["MapResult"].empty()) {
      mapResult = make_shared<string>(boost::any_cast<string>(m["MapResult"]));
    }
    if (m.find("MatchAsns") != m.end() && !m["MatchAsns"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["MatchAsns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MatchAsns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      matchAsns = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MatchCommunitySet") != m.end() && !m["MatchCommunitySet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MatchCommunitySet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MatchCommunitySet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      matchCommunitySet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NextPriority") != m.end() && !m["NextPriority"].empty()) {
      nextPriority = make_shared<long>(boost::any_cast<long>(m["NextPriority"]));
    }
    if (m.find("OperateCommunitySet") != m.end() && !m["OperateCommunitySet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperateCommunitySet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperateCommunitySet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operateCommunitySet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Preference") != m.end() && !m["Preference"].empty()) {
      preference = make_shared<long>(boost::any_cast<long>(m["Preference"]));
    }
    if (m.find("PrependAsPath") != m.end() && !m["PrependAsPath"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["PrependAsPath"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrependAsPath"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      prependAsPath = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteMapId") != m.end() && !m["RouteMapId"].empty()) {
      routeMapId = make_shared<string>(boost::any_cast<string>(m["RouteMapId"]));
    }
    if (m.find("RouteTypes") != m.end() && !m["RouteTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RouteTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RouteTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      routeTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceChildInstanceTypes") != m.end() && !m["SourceChildInstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceChildInstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceChildInstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceChildInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceInstanceIds") != m.end() && !m["SourceInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceInstanceIdsReverseMatch") != m.end() && !m["SourceInstanceIdsReverseMatch"].empty()) {
      sourceInstanceIdsReverseMatch = make_shared<bool>(boost::any_cast<bool>(m["SourceInstanceIdsReverseMatch"]));
    }
    if (m.find("SourceRegionIds") != m.end() && !m["SourceRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceRouteTableIds") != m.end() && !m["SourceRouteTableIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceRouteTableIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceRouteTableIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceRouteTableIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyCenRouteMapRequest() = default;
};
class ModifyCenRouteMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyCenRouteMapResponseBody() {}

  explicit ModifyCenRouteMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyCenRouteMapResponseBody() = default;
};
class ModifyCenRouteMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyCenRouteMapResponseBody> body{};

  ModifyCenRouteMapResponse() {}

  explicit ModifyCenRouteMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyCenRouteMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCenRouteMapResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCenRouteMapResponse() = default;
};
class ModifyFlowLogAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> flowLogId{};
  shared_ptr<string> flowLogName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyFlowLogAttributeRequest() {}

  explicit ModifyFlowLogAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flowLogId) {
      res["FlowLogId"] = boost::any(*flowLogId);
    }
    if (flowLogName) {
      res["FlowLogName"] = boost::any(*flowLogName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FlowLogId") != m.end() && !m["FlowLogId"].empty()) {
      flowLogId = make_shared<string>(boost::any_cast<string>(m["FlowLogId"]));
    }
    if (m.find("FlowLogName") != m.end() && !m["FlowLogName"].empty()) {
      flowLogName = make_shared<string>(boost::any_cast<string>(m["FlowLogName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyFlowLogAttributeRequest() = default;
};
class ModifyFlowLogAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ModifyFlowLogAttributeResponseBody() {}

  explicit ModifyFlowLogAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ModifyFlowLogAttributeResponseBody() = default;
};
class ModifyFlowLogAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyFlowLogAttributeResponseBody> body{};

  ModifyFlowLogAttributeResponse() {}

  explicit ModifyFlowLogAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyFlowLogAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFlowLogAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFlowLogAttributeResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MoveResourceGroupResponseBody() = default;
};
class MoveResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class OpenTransitRouterServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  OpenTransitRouterServiceRequest() {}

  explicit OpenTransitRouterServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~OpenTransitRouterServiceRequest() = default;
};
class OpenTransitRouterServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenTransitRouterServiceResponseBody() {}

  explicit OpenTransitRouterServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenTransitRouterServiceResponseBody() = default;
};
class OpenTransitRouterServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenTransitRouterServiceResponseBody> body{};

  OpenTransitRouterServiceResponse() {}

  explicit OpenTransitRouterServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OpenTransitRouterServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenTransitRouterServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenTransitRouterServiceResponse() = default;
};
class PublishRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceRouteTableId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PublishRouteEntriesRequest() {}

  explicit PublishRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceRouteTableId) {
      res["ChildInstanceRouteTableId"] = boost::any(*childInstanceRouteTableId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceRouteTableId") != m.end() && !m["ChildInstanceRouteTableId"].empty()) {
      childInstanceRouteTableId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRouteTableId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PublishRouteEntriesRequest() = default;
};
class PublishRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PublishRouteEntriesResponseBody() {}

  explicit PublishRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PublishRouteEntriesResponseBody() = default;
};
class PublishRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PublishRouteEntriesResponseBody> body{};

  PublishRouteEntriesResponse() {}

  explicit PublishRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~PublishRouteEntriesResponse() = default;
};
class RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<string>> trafficMarkRuleIds{};
  shared_ptr<string> trafficMarkingPolicyId{};

  RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest() {}

  explicit RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficMarkRuleIds) {
      res["TrafficMarkRuleIds"] = boost::any(*trafficMarkRuleIds);
    }
    if (trafficMarkingPolicyId) {
      res["TrafficMarkingPolicyId"] = boost::any(*trafficMarkingPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficMarkRuleIds") != m.end() && !m["TrafficMarkRuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TrafficMarkRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TrafficMarkRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      trafficMarkRuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TrafficMarkingPolicyId") != m.end() && !m["TrafficMarkingPolicyId"].empty()) {
      trafficMarkingPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyId"]));
    }
  }


  virtual ~RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest() = default;
};
class RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody() {}

  explicit RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody() = default;
};
class RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody> body{};

  RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse() {}

  explicit RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse() = default;
};
class ReplaceTransitRouterRouteTableAssociationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterRouteTableId{};

  ReplaceTransitRouterRouteTableAssociationRequest() {}

  explicit ReplaceTransitRouterRouteTableAssociationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
  }


  virtual ~ReplaceTransitRouterRouteTableAssociationRequest() = default;
};
class ReplaceTransitRouterRouteTableAssociationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReplaceTransitRouterRouteTableAssociationResponseBody() {}

  explicit ReplaceTransitRouterRouteTableAssociationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReplaceTransitRouterRouteTableAssociationResponseBody() = default;
};
class ReplaceTransitRouterRouteTableAssociationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReplaceTransitRouterRouteTableAssociationResponseBody> body{};

  ReplaceTransitRouterRouteTableAssociationResponse() {}

  explicit ReplaceTransitRouterRouteTableAssociationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReplaceTransitRouterRouteTableAssociationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReplaceTransitRouterRouteTableAssociationResponseBody>(model1);
      }
    }
  }


  virtual ~ReplaceTransitRouterRouteTableAssociationResponse() = default;
};
class ResolveAndRouteServiceInCenRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accessRegionIds{};
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> host{};
  shared_ptr<string> hostRegionId{};
  shared_ptr<string> hostVpcId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ResolveAndRouteServiceInCenRequest() {}

  explicit ResolveAndRouteServiceInCenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRegionIds) {
      res["AccessRegionIds"] = boost::any(*accessRegionIds);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (hostRegionId) {
      res["HostRegionId"] = boost::any(*hostRegionId);
    }
    if (hostVpcId) {
      res["HostVpcId"] = boost::any(*hostVpcId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRegionIds") != m.end() && !m["AccessRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccessRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccessRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accessRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("HostRegionId") != m.end() && !m["HostRegionId"].empty()) {
      hostRegionId = make_shared<string>(boost::any_cast<string>(m["HostRegionId"]));
    }
    if (m.find("HostVpcId") != m.end() && !m["HostVpcId"].empty()) {
      hostVpcId = make_shared<string>(boost::any_cast<string>(m["HostVpcId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ResolveAndRouteServiceInCenRequest() = default;
};
class ResolveAndRouteServiceInCenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResolveAndRouteServiceInCenResponseBody() {}

  explicit ResolveAndRouteServiceInCenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResolveAndRouteServiceInCenResponseBody() = default;
};
class ResolveAndRouteServiceInCenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResolveAndRouteServiceInCenResponseBody> body{};

  ResolveAndRouteServiceInCenResponse() {}

  explicit ResolveAndRouteServiceInCenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResolveAndRouteServiceInCenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResolveAndRouteServiceInCenResponseBody>(model1);
      }
    }
  }


  virtual ~ResolveAndRouteServiceInCenResponse() = default;
};
class RevokeInstanceFromTransitRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> cenOwnerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RevokeInstanceFromTransitRouterRequest() {}

  explicit RevokeInstanceFromTransitRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenOwnerId) {
      res["CenOwnerId"] = boost::any(*cenOwnerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenOwnerId") != m.end() && !m["CenOwnerId"].empty()) {
      cenOwnerId = make_shared<long>(boost::any_cast<long>(m["CenOwnerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RevokeInstanceFromTransitRouterRequest() = default;
};
class RevokeInstanceFromTransitRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeInstanceFromTransitRouterResponseBody() {}

  explicit RevokeInstanceFromTransitRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RevokeInstanceFromTransitRouterResponseBody() = default;
};
class RevokeInstanceFromTransitRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RevokeInstanceFromTransitRouterResponseBody> body{};

  RevokeInstanceFromTransitRouterResponse() {}

  explicit RevokeInstanceFromTransitRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RevokeInstanceFromTransitRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeInstanceFromTransitRouterResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeInstanceFromTransitRouterResponse() = default;
};
class RoutePrivateZoneInCenToVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessRegionId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> hostRegionId{};
  shared_ptr<string> hostVpcId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RoutePrivateZoneInCenToVpcRequest() {}

  explicit RoutePrivateZoneInCenToVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRegionId) {
      res["AccessRegionId"] = boost::any(*accessRegionId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (hostRegionId) {
      res["HostRegionId"] = boost::any(*hostRegionId);
    }
    if (hostVpcId) {
      res["HostVpcId"] = boost::any(*hostVpcId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRegionId") != m.end() && !m["AccessRegionId"].empty()) {
      accessRegionId = make_shared<string>(boost::any_cast<string>(m["AccessRegionId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("HostRegionId") != m.end() && !m["HostRegionId"].empty()) {
      hostRegionId = make_shared<string>(boost::any_cast<string>(m["HostRegionId"]));
    }
    if (m.find("HostVpcId") != m.end() && !m["HostVpcId"].empty()) {
      hostVpcId = make_shared<string>(boost::any_cast<string>(m["HostVpcId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RoutePrivateZoneInCenToVpcRequest() = default;
};
class RoutePrivateZoneInCenToVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RoutePrivateZoneInCenToVpcResponseBody() {}

  explicit RoutePrivateZoneInCenToVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RoutePrivateZoneInCenToVpcResponseBody() = default;
};
class RoutePrivateZoneInCenToVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RoutePrivateZoneInCenToVpcResponseBody> body{};

  RoutePrivateZoneInCenToVpcResponse() {}

  explicit RoutePrivateZoneInCenToVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RoutePrivateZoneInCenToVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RoutePrivateZoneInCenToVpcResponseBody>(model1);
      }
    }
  }


  virtual ~RoutePrivateZoneInCenToVpcResponse() = default;
};
class SetCenInterRegionBandwidthLimitRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidthLimit{};
  shared_ptr<string> cenId{};
  shared_ptr<string> localRegionId{};
  shared_ptr<string> oppositeRegionId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  SetCenInterRegionBandwidthLimitRequest() {}

  explicit SetCenInterRegionBandwidthLimitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthLimit) {
      res["BandwidthLimit"] = boost::any(*bandwidthLimit);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (localRegionId) {
      res["LocalRegionId"] = boost::any(*localRegionId);
    }
    if (oppositeRegionId) {
      res["OppositeRegionId"] = boost::any(*oppositeRegionId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthLimit") != m.end() && !m["BandwidthLimit"].empty()) {
      bandwidthLimit = make_shared<long>(boost::any_cast<long>(m["BandwidthLimit"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("LocalRegionId") != m.end() && !m["LocalRegionId"].empty()) {
      localRegionId = make_shared<string>(boost::any_cast<string>(m["LocalRegionId"]));
    }
    if (m.find("OppositeRegionId") != m.end() && !m["OppositeRegionId"].empty()) {
      oppositeRegionId = make_shared<string>(boost::any_cast<string>(m["OppositeRegionId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~SetCenInterRegionBandwidthLimitRequest() = default;
};
class SetCenInterRegionBandwidthLimitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetCenInterRegionBandwidthLimitResponseBody() {}

  explicit SetCenInterRegionBandwidthLimitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetCenInterRegionBandwidthLimitResponseBody() = default;
};
class SetCenInterRegionBandwidthLimitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetCenInterRegionBandwidthLimitResponseBody> body{};

  SetCenInterRegionBandwidthLimitResponse() {}

  explicit SetCenInterRegionBandwidthLimitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetCenInterRegionBandwidthLimitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetCenInterRegionBandwidthLimitResponseBody>(model1);
      }
    }
  }


  virtual ~SetCenInterRegionBandwidthLimitResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class TempUpgradeCenBandwidthPackageSpecRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  TempUpgradeCenBandwidthPackageSpecRequest() {}

  explicit TempUpgradeCenBandwidthPackageSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~TempUpgradeCenBandwidthPackageSpecRequest() = default;
};
class TempUpgradeCenBandwidthPackageSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TempUpgradeCenBandwidthPackageSpecResponseBody() {}

  explicit TempUpgradeCenBandwidthPackageSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TempUpgradeCenBandwidthPackageSpecResponseBody() = default;
};
class TempUpgradeCenBandwidthPackageSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TempUpgradeCenBandwidthPackageSpecResponseBody> body{};

  TempUpgradeCenBandwidthPackageSpecResponse() {}

  explicit TempUpgradeCenBandwidthPackageSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TempUpgradeCenBandwidthPackageSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TempUpgradeCenBandwidthPackageSpecResponseBody>(model1);
      }
    }
  }


  virtual ~TempUpgradeCenBandwidthPackageSpecResponse() = default;
};
class UnassociateCenBandwidthPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UnassociateCenBandwidthPackageRequest() {}

  explicit UnassociateCenBandwidthPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UnassociateCenBandwidthPackageRequest() = default;
};
class UnassociateCenBandwidthPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnassociateCenBandwidthPackageResponseBody() {}

  explicit UnassociateCenBandwidthPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnassociateCenBandwidthPackageResponseBody() = default;
};
class UnassociateCenBandwidthPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnassociateCenBandwidthPackageResponseBody> body{};

  UnassociateCenBandwidthPackageResponse() {}

  explicit UnassociateCenBandwidthPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnassociateCenBandwidthPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnassociateCenBandwidthPackageResponseBody>(model1);
      }
    }
  }


  virtual ~UnassociateCenBandwidthPackageResponse() = default;
};
class UnroutePrivateZoneInCenToVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessRegionId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UnroutePrivateZoneInCenToVpcRequest() {}

  explicit UnroutePrivateZoneInCenToVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRegionId) {
      res["AccessRegionId"] = boost::any(*accessRegionId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRegionId") != m.end() && !m["AccessRegionId"].empty()) {
      accessRegionId = make_shared<string>(boost::any_cast<string>(m["AccessRegionId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UnroutePrivateZoneInCenToVpcRequest() = default;
};
class UnroutePrivateZoneInCenToVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnroutePrivateZoneInCenToVpcResponseBody() {}

  explicit UnroutePrivateZoneInCenToVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnroutePrivateZoneInCenToVpcResponseBody() = default;
};
class UnroutePrivateZoneInCenToVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnroutePrivateZoneInCenToVpcResponseBody> body{};

  UnroutePrivateZoneInCenToVpcResponse() {}

  explicit UnroutePrivateZoneInCenToVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnroutePrivateZoneInCenToVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnroutePrivateZoneInCenToVpcResponseBody>(model1);
      }
    }
  }


  virtual ~UnroutePrivateZoneInCenToVpcResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateCenInterRegionTrafficQosPolicyAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trafficQosPolicyDescription{};
  shared_ptr<string> trafficQosPolicyId{};
  shared_ptr<string> trafficQosPolicyName{};

  UpdateCenInterRegionTrafficQosPolicyAttributeRequest() {}

  explicit UpdateCenInterRegionTrafficQosPolicyAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficQosPolicyDescription) {
      res["TrafficQosPolicyDescription"] = boost::any(*trafficQosPolicyDescription);
    }
    if (trafficQosPolicyId) {
      res["TrafficQosPolicyId"] = boost::any(*trafficQosPolicyId);
    }
    if (trafficQosPolicyName) {
      res["TrafficQosPolicyName"] = boost::any(*trafficQosPolicyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficQosPolicyDescription") != m.end() && !m["TrafficQosPolicyDescription"].empty()) {
      trafficQosPolicyDescription = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyDescription"]));
    }
    if (m.find("TrafficQosPolicyId") != m.end() && !m["TrafficQosPolicyId"].empty()) {
      trafficQosPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyId"]));
    }
    if (m.find("TrafficQosPolicyName") != m.end() && !m["TrafficQosPolicyName"].empty()) {
      trafficQosPolicyName = make_shared<string>(boost::any_cast<string>(m["TrafficQosPolicyName"]));
    }
  }


  virtual ~UpdateCenInterRegionTrafficQosPolicyAttributeRequest() = default;
};
class UpdateCenInterRegionTrafficQosPolicyAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCenInterRegionTrafficQosPolicyAttributeResponseBody() {}

  explicit UpdateCenInterRegionTrafficQosPolicyAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateCenInterRegionTrafficQosPolicyAttributeResponseBody() = default;
};
class UpdateCenInterRegionTrafficQosPolicyAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCenInterRegionTrafficQosPolicyAttributeResponseBody> body{};

  UpdateCenInterRegionTrafficQosPolicyAttributeResponse() {}

  explicit UpdateCenInterRegionTrafficQosPolicyAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateCenInterRegionTrafficQosPolicyAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCenInterRegionTrafficQosPolicyAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCenInterRegionTrafficQosPolicyAttributeResponse() = default;
};
class UpdateCenInterRegionTrafficQosQueueAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<long>> dscps{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> qosQueueDescription{};
  shared_ptr<string> qosQueueId{};
  shared_ptr<string> qosQueueName{};
  shared_ptr<string> remainBandwidthPercent{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateCenInterRegionTrafficQosQueueAttributeRequest() {}

  explicit UpdateCenInterRegionTrafficQosQueueAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (dscps) {
      res["Dscps"] = boost::any(*dscps);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (qosQueueDescription) {
      res["QosQueueDescription"] = boost::any(*qosQueueDescription);
    }
    if (qosQueueId) {
      res["QosQueueId"] = boost::any(*qosQueueId);
    }
    if (qosQueueName) {
      res["QosQueueName"] = boost::any(*qosQueueName);
    }
    if (remainBandwidthPercent) {
      res["RemainBandwidthPercent"] = boost::any(*remainBandwidthPercent);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Dscps") != m.end() && !m["Dscps"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Dscps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dscps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dscps = make_shared<vector<long>>(toVec1);
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QosQueueDescription") != m.end() && !m["QosQueueDescription"].empty()) {
      qosQueueDescription = make_shared<string>(boost::any_cast<string>(m["QosQueueDescription"]));
    }
    if (m.find("QosQueueId") != m.end() && !m["QosQueueId"].empty()) {
      qosQueueId = make_shared<string>(boost::any_cast<string>(m["QosQueueId"]));
    }
    if (m.find("QosQueueName") != m.end() && !m["QosQueueName"].empty()) {
      qosQueueName = make_shared<string>(boost::any_cast<string>(m["QosQueueName"]));
    }
    if (m.find("RemainBandwidthPercent") != m.end() && !m["RemainBandwidthPercent"].empty()) {
      remainBandwidthPercent = make_shared<string>(boost::any_cast<string>(m["RemainBandwidthPercent"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateCenInterRegionTrafficQosQueueAttributeRequest() = default;
};
class UpdateCenInterRegionTrafficQosQueueAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCenInterRegionTrafficQosQueueAttributeResponseBody() {}

  explicit UpdateCenInterRegionTrafficQosQueueAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateCenInterRegionTrafficQosQueueAttributeResponseBody() = default;
};
class UpdateCenInterRegionTrafficQosQueueAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCenInterRegionTrafficQosQueueAttributeResponseBody> body{};

  UpdateCenInterRegionTrafficQosQueueAttributeResponse() {}

  explicit UpdateCenInterRegionTrafficQosQueueAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateCenInterRegionTrafficQosQueueAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCenInterRegionTrafficQosQueueAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCenInterRegionTrafficQosQueueAttributeResponse() = default;
};
class UpdateTrafficMarkingPolicyAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trafficMarkingPolicyDescription{};
  shared_ptr<string> trafficMarkingPolicyId{};
  shared_ptr<string> trafficMarkingPolicyName{};

  UpdateTrafficMarkingPolicyAttributeRequest() {}

  explicit UpdateTrafficMarkingPolicyAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trafficMarkingPolicyDescription) {
      res["TrafficMarkingPolicyDescription"] = boost::any(*trafficMarkingPolicyDescription);
    }
    if (trafficMarkingPolicyId) {
      res["TrafficMarkingPolicyId"] = boost::any(*trafficMarkingPolicyId);
    }
    if (trafficMarkingPolicyName) {
      res["TrafficMarkingPolicyName"] = boost::any(*trafficMarkingPolicyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TrafficMarkingPolicyDescription") != m.end() && !m["TrafficMarkingPolicyDescription"].empty()) {
      trafficMarkingPolicyDescription = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyDescription"]));
    }
    if (m.find("TrafficMarkingPolicyId") != m.end() && !m["TrafficMarkingPolicyId"].empty()) {
      trafficMarkingPolicyId = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyId"]));
    }
    if (m.find("TrafficMarkingPolicyName") != m.end() && !m["TrafficMarkingPolicyName"].empty()) {
      trafficMarkingPolicyName = make_shared<string>(boost::any_cast<string>(m["TrafficMarkingPolicyName"]));
    }
  }


  virtual ~UpdateTrafficMarkingPolicyAttributeRequest() = default;
};
class UpdateTrafficMarkingPolicyAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTrafficMarkingPolicyAttributeResponseBody() {}

  explicit UpdateTrafficMarkingPolicyAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTrafficMarkingPolicyAttributeResponseBody() = default;
};
class UpdateTrafficMarkingPolicyAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTrafficMarkingPolicyAttributeResponseBody> body{};

  UpdateTrafficMarkingPolicyAttributeResponse() {}

  explicit UpdateTrafficMarkingPolicyAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTrafficMarkingPolicyAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTrafficMarkingPolicyAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTrafficMarkingPolicyAttributeResponse() = default;
};
class UpdateTransitRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterDescription{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<string> transitRouterName{};

  UpdateTransitRouterRequest() {}

  explicit UpdateTransitRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterDescription) {
      res["TransitRouterDescription"] = boost::any(*transitRouterDescription);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (transitRouterName) {
      res["TransitRouterName"] = boost::any(*transitRouterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterDescription") != m.end() && !m["TransitRouterDescription"].empty()) {
      transitRouterDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterDescription"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("TransitRouterName") != m.end() && !m["TransitRouterName"].empty()) {
      transitRouterName = make_shared<string>(boost::any_cast<string>(m["TransitRouterName"]));
    }
  }


  virtual ~UpdateTransitRouterRequest() = default;
};
class UpdateTransitRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTransitRouterResponseBody() {}

  explicit UpdateTransitRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTransitRouterResponseBody() = default;
};
class UpdateTransitRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTransitRouterResponseBody> body{};

  UpdateTransitRouterResponse() {}

  explicit UpdateTransitRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTransitRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTransitRouterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTransitRouterResponse() = default;
};
class UpdateTransitRouterPeerAttachmentAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPublishRouteEnabled{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bandwidthType{};
  shared_ptr<string> cenBandwidthPackageId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentDescription{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterAttachmentName{};

  UpdateTransitRouterPeerAttachmentAttributeRequest() {}

  explicit UpdateTransitRouterPeerAttachmentAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPublishRouteEnabled) {
      res["AutoPublishRouteEnabled"] = boost::any(*autoPublishRouteEnabled);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bandwidthType) {
      res["BandwidthType"] = boost::any(*bandwidthType);
    }
    if (cenBandwidthPackageId) {
      res["CenBandwidthPackageId"] = boost::any(*cenBandwidthPackageId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentDescription) {
      res["TransitRouterAttachmentDescription"] = boost::any(*transitRouterAttachmentDescription);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterAttachmentName) {
      res["TransitRouterAttachmentName"] = boost::any(*transitRouterAttachmentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPublishRouteEnabled") != m.end() && !m["AutoPublishRouteEnabled"].empty()) {
      autoPublishRouteEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoPublishRouteEnabled"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BandwidthType") != m.end() && !m["BandwidthType"].empty()) {
      bandwidthType = make_shared<string>(boost::any_cast<string>(m["BandwidthType"]));
    }
    if (m.find("CenBandwidthPackageId") != m.end() && !m["CenBandwidthPackageId"].empty()) {
      cenBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["CenBandwidthPackageId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentDescription") != m.end() && !m["TransitRouterAttachmentDescription"].empty()) {
      transitRouterAttachmentDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentDescription"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterAttachmentName") != m.end() && !m["TransitRouterAttachmentName"].empty()) {
      transitRouterAttachmentName = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentName"]));
    }
  }


  virtual ~UpdateTransitRouterPeerAttachmentAttributeRequest() = default;
};
class UpdateTransitRouterPeerAttachmentAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTransitRouterPeerAttachmentAttributeResponseBody() {}

  explicit UpdateTransitRouterPeerAttachmentAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTransitRouterPeerAttachmentAttributeResponseBody() = default;
};
class UpdateTransitRouterPeerAttachmentAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTransitRouterPeerAttachmentAttributeResponseBody> body{};

  UpdateTransitRouterPeerAttachmentAttributeResponse() {}

  explicit UpdateTransitRouterPeerAttachmentAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTransitRouterPeerAttachmentAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTransitRouterPeerAttachmentAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTransitRouterPeerAttachmentAttributeResponse() = default;
};
class UpdateTransitRouterRouteEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterRouteEntryDescription{};
  shared_ptr<string> transitRouterRouteEntryId{};
  shared_ptr<string> transitRouterRouteEntryName{};

  UpdateTransitRouterRouteEntryRequest() {}

  explicit UpdateTransitRouterRouteEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterRouteEntryDescription) {
      res["TransitRouterRouteEntryDescription"] = boost::any(*transitRouterRouteEntryDescription);
    }
    if (transitRouterRouteEntryId) {
      res["TransitRouterRouteEntryId"] = boost::any(*transitRouterRouteEntryId);
    }
    if (transitRouterRouteEntryName) {
      res["TransitRouterRouteEntryName"] = boost::any(*transitRouterRouteEntryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterRouteEntryDescription") != m.end() && !m["TransitRouterRouteEntryDescription"].empty()) {
      transitRouterRouteEntryDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryDescription"]));
    }
    if (m.find("TransitRouterRouteEntryId") != m.end() && !m["TransitRouterRouteEntryId"].empty()) {
      transitRouterRouteEntryId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryId"]));
    }
    if (m.find("TransitRouterRouteEntryName") != m.end() && !m["TransitRouterRouteEntryName"].empty()) {
      transitRouterRouteEntryName = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteEntryName"]));
    }
  }


  virtual ~UpdateTransitRouterRouteEntryRequest() = default;
};
class UpdateTransitRouterRouteEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTransitRouterRouteEntryResponseBody() {}

  explicit UpdateTransitRouterRouteEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTransitRouterRouteEntryResponseBody() = default;
};
class UpdateTransitRouterRouteEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTransitRouterRouteEntryResponseBody> body{};

  UpdateTransitRouterRouteEntryResponse() {}

  explicit UpdateTransitRouterRouteEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTransitRouterRouteEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTransitRouterRouteEntryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTransitRouterRouteEntryResponse() = default;
};
class UpdateTransitRouterRouteTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterRouteTableDescription{};
  shared_ptr<string> transitRouterRouteTableId{};
  shared_ptr<string> transitRouterRouteTableName{};

  UpdateTransitRouterRouteTableRequest() {}

  explicit UpdateTransitRouterRouteTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterRouteTableDescription) {
      res["TransitRouterRouteTableDescription"] = boost::any(*transitRouterRouteTableDescription);
    }
    if (transitRouterRouteTableId) {
      res["TransitRouterRouteTableId"] = boost::any(*transitRouterRouteTableId);
    }
    if (transitRouterRouteTableName) {
      res["TransitRouterRouteTableName"] = boost::any(*transitRouterRouteTableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterRouteTableDescription") != m.end() && !m["TransitRouterRouteTableDescription"].empty()) {
      transitRouterRouteTableDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableDescription"]));
    }
    if (m.find("TransitRouterRouteTableId") != m.end() && !m["TransitRouterRouteTableId"].empty()) {
      transitRouterRouteTableId = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableId"]));
    }
    if (m.find("TransitRouterRouteTableName") != m.end() && !m["TransitRouterRouteTableName"].empty()) {
      transitRouterRouteTableName = make_shared<string>(boost::any_cast<string>(m["TransitRouterRouteTableName"]));
    }
  }


  virtual ~UpdateTransitRouterRouteTableRequest() = default;
};
class UpdateTransitRouterRouteTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTransitRouterRouteTableResponseBody() {}

  explicit UpdateTransitRouterRouteTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTransitRouterRouteTableResponseBody() = default;
};
class UpdateTransitRouterRouteTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTransitRouterRouteTableResponseBody> body{};

  UpdateTransitRouterRouteTableResponse() {}

  explicit UpdateTransitRouterRouteTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTransitRouterRouteTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTransitRouterRouteTableResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTransitRouterRouteTableResponse() = default;
};
class UpdateTransitRouterVbrAttachmentAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentDescription{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterAttachmentName{};

  UpdateTransitRouterVbrAttachmentAttributeRequest() {}

  explicit UpdateTransitRouterVbrAttachmentAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentDescription) {
      res["TransitRouterAttachmentDescription"] = boost::any(*transitRouterAttachmentDescription);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterAttachmentName) {
      res["TransitRouterAttachmentName"] = boost::any(*transitRouterAttachmentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentDescription") != m.end() && !m["TransitRouterAttachmentDescription"].empty()) {
      transitRouterAttachmentDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentDescription"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterAttachmentName") != m.end() && !m["TransitRouterAttachmentName"].empty()) {
      transitRouterAttachmentName = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentName"]));
    }
  }


  virtual ~UpdateTransitRouterVbrAttachmentAttributeRequest() = default;
};
class UpdateTransitRouterVbrAttachmentAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTransitRouterVbrAttachmentAttributeResponseBody() {}

  explicit UpdateTransitRouterVbrAttachmentAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTransitRouterVbrAttachmentAttributeResponseBody() = default;
};
class UpdateTransitRouterVbrAttachmentAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTransitRouterVbrAttachmentAttributeResponseBody> body{};

  UpdateTransitRouterVbrAttachmentAttributeResponse() {}

  explicit UpdateTransitRouterVbrAttachmentAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTransitRouterVbrAttachmentAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTransitRouterVbrAttachmentAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTransitRouterVbrAttachmentAttributeResponse() = default;
};
class UpdateTransitRouterVpcAttachmentAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> transitRouterAttachmentDescription{};
  shared_ptr<string> transitRouterAttachmentId{};
  shared_ptr<string> transitRouterAttachmentName{};

  UpdateTransitRouterVpcAttachmentAttributeRequest() {}

  explicit UpdateTransitRouterVpcAttachmentAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transitRouterAttachmentDescription) {
      res["TransitRouterAttachmentDescription"] = boost::any(*transitRouterAttachmentDescription);
    }
    if (transitRouterAttachmentId) {
      res["TransitRouterAttachmentId"] = boost::any(*transitRouterAttachmentId);
    }
    if (transitRouterAttachmentName) {
      res["TransitRouterAttachmentName"] = boost::any(*transitRouterAttachmentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransitRouterAttachmentDescription") != m.end() && !m["TransitRouterAttachmentDescription"].empty()) {
      transitRouterAttachmentDescription = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentDescription"]));
    }
    if (m.find("TransitRouterAttachmentId") != m.end() && !m["TransitRouterAttachmentId"].empty()) {
      transitRouterAttachmentId = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentId"]));
    }
    if (m.find("TransitRouterAttachmentName") != m.end() && !m["TransitRouterAttachmentName"].empty()) {
      transitRouterAttachmentName = make_shared<string>(boost::any_cast<string>(m["TransitRouterAttachmentName"]));
    }
  }


  virtual ~UpdateTransitRouterVpcAttachmentAttributeRequest() = default;
};
class UpdateTransitRouterVpcAttachmentAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTransitRouterVpcAttachmentAttributeResponseBody() {}

  explicit UpdateTransitRouterVpcAttachmentAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTransitRouterVpcAttachmentAttributeResponseBody() = default;
};
class UpdateTransitRouterVpcAttachmentAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTransitRouterVpcAttachmentAttributeResponseBody> body{};

  UpdateTransitRouterVpcAttachmentAttributeResponse() {}

  explicit UpdateTransitRouterVpcAttachmentAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTransitRouterVpcAttachmentAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTransitRouterVpcAttachmentAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTransitRouterVpcAttachmentAttributeResponse() = default;
};
class WithdrawPublishedRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceRouteTableId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  WithdrawPublishedRouteEntriesRequest() {}

  explicit WithdrawPublishedRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceRouteTableId) {
      res["ChildInstanceRouteTableId"] = boost::any(*childInstanceRouteTableId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceRouteTableId") != m.end() && !m["ChildInstanceRouteTableId"].empty()) {
      childInstanceRouteTableId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRouteTableId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~WithdrawPublishedRouteEntriesRequest() = default;
};
class WithdrawPublishedRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  WithdrawPublishedRouteEntriesResponseBody() {}

  explicit WithdrawPublishedRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~WithdrawPublishedRouteEntriesResponseBody() = default;
};
class WithdrawPublishedRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<WithdrawPublishedRouteEntriesResponseBody> body{};

  WithdrawPublishedRouteEntriesResponse() {}

  explicit WithdrawPublishedRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        WithdrawPublishedRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WithdrawPublishedRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~WithdrawPublishedRouteEntriesResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  ActiveFlowLogResponse activeFlowLogWithOptions(shared_ptr<ActiveFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActiveFlowLogResponse activeFlowLog(shared_ptr<ActiveFlowLogRequest> request);
  AddTraficMatchRuleToTrafficMarkingPolicyResponse addTraficMatchRuleToTrafficMarkingPolicyWithOptions(shared_ptr<AddTraficMatchRuleToTrafficMarkingPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTraficMatchRuleToTrafficMarkingPolicyResponse addTraficMatchRuleToTrafficMarkingPolicy(shared_ptr<AddTraficMatchRuleToTrafficMarkingPolicyRequest> request);
  AssociateCenBandwidthPackageResponse associateCenBandwidthPackageWithOptions(shared_ptr<AssociateCenBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateCenBandwidthPackageResponse associateCenBandwidthPackage(shared_ptr<AssociateCenBandwidthPackageRequest> request);
  AssociateTransitRouterAttachmentWithRouteTableResponse associateTransitRouterAttachmentWithRouteTableWithOptions(shared_ptr<AssociateTransitRouterAttachmentWithRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateTransitRouterAttachmentWithRouteTableResponse associateTransitRouterAttachmentWithRouteTable(shared_ptr<AssociateTransitRouterAttachmentWithRouteTableRequest> request);
  AttachCenChildInstanceResponse attachCenChildInstanceWithOptions(shared_ptr<AttachCenChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachCenChildInstanceResponse attachCenChildInstance(shared_ptr<AttachCenChildInstanceRequest> request);
  CheckTransitRouterServiceResponse checkTransitRouterServiceWithOptions(shared_ptr<CheckTransitRouterServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckTransitRouterServiceResponse checkTransitRouterService(shared_ptr<CheckTransitRouterServiceRequest> request);
  CreateCenResponse createCenWithOptions(shared_ptr<CreateCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCenResponse createCen(shared_ptr<CreateCenRequest> request);
  CreateCenBandwidthPackageResponse createCenBandwidthPackageWithOptions(shared_ptr<CreateCenBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCenBandwidthPackageResponse createCenBandwidthPackage(shared_ptr<CreateCenBandwidthPackageRequest> request);
  CreateCenChildInstanceRouteEntryToAttachmentResponse createCenChildInstanceRouteEntryToAttachmentWithOptions(shared_ptr<CreateCenChildInstanceRouteEntryToAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCenChildInstanceRouteEntryToAttachmentResponse createCenChildInstanceRouteEntryToAttachment(shared_ptr<CreateCenChildInstanceRouteEntryToAttachmentRequest> request);
  CreateCenChildInstanceRouteEntryToCenResponse createCenChildInstanceRouteEntryToCenWithOptions(shared_ptr<CreateCenChildInstanceRouteEntryToCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCenChildInstanceRouteEntryToCenResponse createCenChildInstanceRouteEntryToCen(shared_ptr<CreateCenChildInstanceRouteEntryToCenRequest> request);
  CreateCenInterRegionTrafficQosPolicyResponse createCenInterRegionTrafficQosPolicyWithOptions(shared_ptr<CreateCenInterRegionTrafficQosPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCenInterRegionTrafficQosPolicyResponse createCenInterRegionTrafficQosPolicy(shared_ptr<CreateCenInterRegionTrafficQosPolicyRequest> request);
  CreateCenRouteMapResponse createCenRouteMapWithOptions(shared_ptr<CreateCenRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCenRouteMapResponse createCenRouteMap(shared_ptr<CreateCenRouteMapRequest> request);
  CreateFlowlogResponse createFlowlogWithOptions(shared_ptr<CreateFlowlogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowlogResponse createFlowlog(shared_ptr<CreateFlowlogRequest> request);
  CreateTrafficMarkingPolicyResponse createTrafficMarkingPolicyWithOptions(shared_ptr<CreateTrafficMarkingPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrafficMarkingPolicyResponse createTrafficMarkingPolicy(shared_ptr<CreateTrafficMarkingPolicyRequest> request);
  CreateTransitRouterResponse createTransitRouterWithOptions(shared_ptr<CreateTransitRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTransitRouterResponse createTransitRouter(shared_ptr<CreateTransitRouterRequest> request);
  CreateTransitRouterPeerAttachmentResponse createTransitRouterPeerAttachmentWithOptions(shared_ptr<CreateTransitRouterPeerAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTransitRouterPeerAttachmentResponse createTransitRouterPeerAttachment(shared_ptr<CreateTransitRouterPeerAttachmentRequest> request);
  CreateTransitRouterRouteEntryResponse createTransitRouterRouteEntryWithOptions(shared_ptr<CreateTransitRouterRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTransitRouterRouteEntryResponse createTransitRouterRouteEntry(shared_ptr<CreateTransitRouterRouteEntryRequest> request);
  CreateTransitRouterRouteTableResponse createTransitRouterRouteTableWithOptions(shared_ptr<CreateTransitRouterRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTransitRouterRouteTableResponse createTransitRouterRouteTable(shared_ptr<CreateTransitRouterRouteTableRequest> request);
  CreateTransitRouterVbrAttachmentResponse createTransitRouterVbrAttachmentWithOptions(shared_ptr<CreateTransitRouterVbrAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTransitRouterVbrAttachmentResponse createTransitRouterVbrAttachment(shared_ptr<CreateTransitRouterVbrAttachmentRequest> request);
  CreateTransitRouterVpcAttachmentResponse createTransitRouterVpcAttachmentWithOptions(shared_ptr<CreateTransitRouterVpcAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTransitRouterVpcAttachmentResponse createTransitRouterVpcAttachment(shared_ptr<CreateTransitRouterVpcAttachmentRequest> request);
  DeactiveFlowLogResponse deactiveFlowLogWithOptions(shared_ptr<DeactiveFlowLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeactiveFlowLogResponse deactiveFlowLog(shared_ptr<DeactiveFlowLogRequest> request);
  DeleteCenResponse deleteCenWithOptions(shared_ptr<DeleteCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCenResponse deleteCen(shared_ptr<DeleteCenRequest> request);
  DeleteCenBandwidthPackageResponse deleteCenBandwidthPackageWithOptions(shared_ptr<DeleteCenBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCenBandwidthPackageResponse deleteCenBandwidthPackage(shared_ptr<DeleteCenBandwidthPackageRequest> request);
  DeleteCenChildInstanceRouteEntryToAttachmentResponse deleteCenChildInstanceRouteEntryToAttachmentWithOptions(shared_ptr<DeleteCenChildInstanceRouteEntryToAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCenChildInstanceRouteEntryToAttachmentResponse deleteCenChildInstanceRouteEntryToAttachment(shared_ptr<DeleteCenChildInstanceRouteEntryToAttachmentRequest> request);
  DeleteCenChildInstanceRouteEntryToCenResponse deleteCenChildInstanceRouteEntryToCenWithOptions(shared_ptr<DeleteCenChildInstanceRouteEntryToCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCenChildInstanceRouteEntryToCenResponse deleteCenChildInstanceRouteEntryToCen(shared_ptr<DeleteCenChildInstanceRouteEntryToCenRequest> request);
  DeleteCenInterRegionTrafficQosPolicyResponse deleteCenInterRegionTrafficQosPolicyWithOptions(shared_ptr<DeleteCenInterRegionTrafficQosPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCenInterRegionTrafficQosPolicyResponse deleteCenInterRegionTrafficQosPolicy(shared_ptr<DeleteCenInterRegionTrafficQosPolicyRequest> request);
  DeleteCenInterRegionTrafficQosQueueResponse deleteCenInterRegionTrafficQosQueueWithOptions(shared_ptr<DeleteCenInterRegionTrafficQosQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCenInterRegionTrafficQosQueueResponse deleteCenInterRegionTrafficQosQueue(shared_ptr<DeleteCenInterRegionTrafficQosQueueRequest> request);
  DeleteCenRouteMapResponse deleteCenRouteMapWithOptions(shared_ptr<DeleteCenRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCenRouteMapResponse deleteCenRouteMap(shared_ptr<DeleteCenRouteMapRequest> request);
  DeleteFlowlogResponse deleteFlowlogWithOptions(shared_ptr<DeleteFlowlogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFlowlogResponse deleteFlowlog(shared_ptr<DeleteFlowlogRequest> request);
  DeleteRouteServiceInCenResponse deleteRouteServiceInCenWithOptions(shared_ptr<DeleteRouteServiceInCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRouteServiceInCenResponse deleteRouteServiceInCen(shared_ptr<DeleteRouteServiceInCenRequest> request);
  DeleteTrafficMarkingPolicyResponse deleteTrafficMarkingPolicyWithOptions(shared_ptr<DeleteTrafficMarkingPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTrafficMarkingPolicyResponse deleteTrafficMarkingPolicy(shared_ptr<DeleteTrafficMarkingPolicyRequest> request);
  DeleteTransitRouterPeerAttachmentResponse deleteTransitRouterPeerAttachmentWithOptions(shared_ptr<DeleteTransitRouterPeerAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTransitRouterPeerAttachmentResponse deleteTransitRouterPeerAttachment(shared_ptr<DeleteTransitRouterPeerAttachmentRequest> request);
  DeleteTransitRouterRouteEntryResponse deleteTransitRouterRouteEntryWithOptions(shared_ptr<DeleteTransitRouterRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTransitRouterRouteEntryResponse deleteTransitRouterRouteEntry(shared_ptr<DeleteTransitRouterRouteEntryRequest> request);
  DeleteTransitRouterRouteTableResponse deleteTransitRouterRouteTableWithOptions(shared_ptr<DeleteTransitRouterRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTransitRouterRouteTableResponse deleteTransitRouterRouteTable(shared_ptr<DeleteTransitRouterRouteTableRequest> request);
  DeleteTransitRouterVbrAttachmentResponse deleteTransitRouterVbrAttachmentWithOptions(shared_ptr<DeleteTransitRouterVbrAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTransitRouterVbrAttachmentResponse deleteTransitRouterVbrAttachment(shared_ptr<DeleteTransitRouterVbrAttachmentRequest> request);
  DeleteTransitRouterVpcAttachmentResponse deleteTransitRouterVpcAttachmentWithOptions(shared_ptr<DeleteTransitRouterVpcAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTransitRouterVpcAttachmentResponse deleteTransitRouterVpcAttachment(shared_ptr<DeleteTransitRouterVpcAttachmentRequest> request);
  DescribeCenAttachedChildInstanceAttributeResponse describeCenAttachedChildInstanceAttributeWithOptions(shared_ptr<DescribeCenAttachedChildInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenAttachedChildInstanceAttributeResponse describeCenAttachedChildInstanceAttribute(shared_ptr<DescribeCenAttachedChildInstanceAttributeRequest> request);
  DescribeCenAttachedChildInstancesResponse describeCenAttachedChildInstancesWithOptions(shared_ptr<DescribeCenAttachedChildInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenAttachedChildInstancesResponse describeCenAttachedChildInstances(shared_ptr<DescribeCenAttachedChildInstancesRequest> request);
  DescribeCenBandwidthPackagesResponse describeCenBandwidthPackagesWithOptions(shared_ptr<DescribeCenBandwidthPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenBandwidthPackagesResponse describeCenBandwidthPackages(shared_ptr<DescribeCenBandwidthPackagesRequest> request);
  DescribeCenChildInstanceRouteEntriesResponse describeCenChildInstanceRouteEntriesWithOptions(shared_ptr<DescribeCenChildInstanceRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenChildInstanceRouteEntriesResponse describeCenChildInstanceRouteEntries(shared_ptr<DescribeCenChildInstanceRouteEntriesRequest> request);
  DescribeCenGeographicSpanRemainingBandwidthResponse describeCenGeographicSpanRemainingBandwidthWithOptions(shared_ptr<DescribeCenGeographicSpanRemainingBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenGeographicSpanRemainingBandwidthResponse describeCenGeographicSpanRemainingBandwidth(shared_ptr<DescribeCenGeographicSpanRemainingBandwidthRequest> request);
  DescribeCenGeographicSpansResponse describeCenGeographicSpansWithOptions(shared_ptr<DescribeCenGeographicSpansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenGeographicSpansResponse describeCenGeographicSpans(shared_ptr<DescribeCenGeographicSpansRequest> request);
  DescribeCenInterRegionBandwidthLimitsResponse describeCenInterRegionBandwidthLimitsWithOptions(shared_ptr<DescribeCenInterRegionBandwidthLimitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenInterRegionBandwidthLimitsResponse describeCenInterRegionBandwidthLimits(shared_ptr<DescribeCenInterRegionBandwidthLimitsRequest> request);
  DescribeCenPrivateZoneRoutesResponse describeCenPrivateZoneRoutesWithOptions(shared_ptr<DescribeCenPrivateZoneRoutesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenPrivateZoneRoutesResponse describeCenPrivateZoneRoutes(shared_ptr<DescribeCenPrivateZoneRoutesRequest> request);
  DescribeCenRegionDomainRouteEntriesResponse describeCenRegionDomainRouteEntriesWithOptions(shared_ptr<DescribeCenRegionDomainRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenRegionDomainRouteEntriesResponse describeCenRegionDomainRouteEntries(shared_ptr<DescribeCenRegionDomainRouteEntriesRequest> request);
  DescribeCenRouteMapsResponse describeCenRouteMapsWithOptions(shared_ptr<DescribeCenRouteMapsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenRouteMapsResponse describeCenRouteMaps(shared_ptr<DescribeCenRouteMapsRequest> request);
  DescribeCenVbrHealthCheckResponse describeCenVbrHealthCheckWithOptions(shared_ptr<DescribeCenVbrHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCenVbrHealthCheckResponse describeCenVbrHealthCheck(shared_ptr<DescribeCenVbrHealthCheckRequest> request);
  DescribeCensResponse describeCensWithOptions(shared_ptr<DescribeCensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCensResponse describeCens(shared_ptr<DescribeCensRequest> request);
  DescribeChildInstanceRegionsResponse describeChildInstanceRegionsWithOptions(shared_ptr<DescribeChildInstanceRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChildInstanceRegionsResponse describeChildInstanceRegions(shared_ptr<DescribeChildInstanceRegionsRequest> request);
  DescribeFlowlogsResponse describeFlowlogsWithOptions(shared_ptr<DescribeFlowlogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFlowlogsResponse describeFlowlogs(shared_ptr<DescribeFlowlogsRequest> request);
  DescribeGeographicRegionMembershipResponse describeGeographicRegionMembershipWithOptions(shared_ptr<DescribeGeographicRegionMembershipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGeographicRegionMembershipResponse describeGeographicRegionMembership(shared_ptr<DescribeGeographicRegionMembershipRequest> request);
  DescribeGrantRulesToCenResponse describeGrantRulesToCenWithOptions(shared_ptr<DescribeGrantRulesToCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGrantRulesToCenResponse describeGrantRulesToCen(shared_ptr<DescribeGrantRulesToCenRequest> request);
  DescribePublishedRouteEntriesResponse describePublishedRouteEntriesWithOptions(shared_ptr<DescribePublishedRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePublishedRouteEntriesResponse describePublishedRouteEntries(shared_ptr<DescribePublishedRouteEntriesRequest> request);
  DescribeRouteConflictResponse describeRouteConflictWithOptions(shared_ptr<DescribeRouteConflictRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRouteConflictResponse describeRouteConflict(shared_ptr<DescribeRouteConflictRequest> request);
  DescribeRouteServicesInCenResponse describeRouteServicesInCenWithOptions(shared_ptr<DescribeRouteServicesInCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRouteServicesInCenResponse describeRouteServicesInCen(shared_ptr<DescribeRouteServicesInCenRequest> request);
  DetachCenChildInstanceResponse detachCenChildInstanceWithOptions(shared_ptr<DetachCenChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachCenChildInstanceResponse detachCenChildInstance(shared_ptr<DetachCenChildInstanceRequest> request);
  DisableCenVbrHealthCheckResponse disableCenVbrHealthCheckWithOptions(shared_ptr<DisableCenVbrHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableCenVbrHealthCheckResponse disableCenVbrHealthCheck(shared_ptr<DisableCenVbrHealthCheckRequest> request);
  DisableTransitRouterRouteTablePropagationResponse disableTransitRouterRouteTablePropagationWithOptions(shared_ptr<DisableTransitRouterRouteTablePropagationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableTransitRouterRouteTablePropagationResponse disableTransitRouterRouteTablePropagation(shared_ptr<DisableTransitRouterRouteTablePropagationRequest> request);
  DissociateTransitRouterAttachmentFromRouteTableResponse dissociateTransitRouterAttachmentFromRouteTableWithOptions(shared_ptr<DissociateTransitRouterAttachmentFromRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateTransitRouterAttachmentFromRouteTableResponse dissociateTransitRouterAttachmentFromRouteTable(shared_ptr<DissociateTransitRouterAttachmentFromRouteTableRequest> request);
  EnableCenVbrHealthCheckResponse enableCenVbrHealthCheckWithOptions(shared_ptr<EnableCenVbrHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableCenVbrHealthCheckResponse enableCenVbrHealthCheck(shared_ptr<EnableCenVbrHealthCheckRequest> request);
  EnableTransitRouterRouteTablePropagationResponse enableTransitRouterRouteTablePropagationWithOptions(shared_ptr<EnableTransitRouterRouteTablePropagationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableTransitRouterRouteTablePropagationResponse enableTransitRouterRouteTablePropagation(shared_ptr<EnableTransitRouterRouteTablePropagationRequest> request);
  GrantInstanceToTransitRouterResponse grantInstanceToTransitRouterWithOptions(shared_ptr<GrantInstanceToTransitRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantInstanceToTransitRouterResponse grantInstanceToTransitRouter(shared_ptr<GrantInstanceToTransitRouterRequest> request);
  ListCenInterRegionTrafficQosPoliciesResponse listCenInterRegionTrafficQosPoliciesWithOptions(shared_ptr<ListCenInterRegionTrafficQosPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCenInterRegionTrafficQosPoliciesResponse listCenInterRegionTrafficQosPolicies(shared_ptr<ListCenInterRegionTrafficQosPoliciesRequest> request);
  ListGrantVSwitchesToCenResponse listGrantVSwitchesToCenWithOptions(shared_ptr<ListGrantVSwitchesToCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGrantVSwitchesToCenResponse listGrantVSwitchesToCen(shared_ptr<ListGrantVSwitchesToCenRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTrafficMarkingPoliciesResponse listTrafficMarkingPoliciesWithOptions(shared_ptr<ListTrafficMarkingPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrafficMarkingPoliciesResponse listTrafficMarkingPolicies(shared_ptr<ListTrafficMarkingPoliciesRequest> request);
  ListTransitRouterAvailableResourceResponse listTransitRouterAvailableResourceWithOptions(shared_ptr<ListTransitRouterAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTransitRouterAvailableResourceResponse listTransitRouterAvailableResource(shared_ptr<ListTransitRouterAvailableResourceRequest> request);
  ListTransitRouterPeerAttachmentsResponse listTransitRouterPeerAttachmentsWithOptions(shared_ptr<ListTransitRouterPeerAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTransitRouterPeerAttachmentsResponse listTransitRouterPeerAttachments(shared_ptr<ListTransitRouterPeerAttachmentsRequest> request);
  ListTransitRouterRouteEntriesResponse listTransitRouterRouteEntriesWithOptions(shared_ptr<ListTransitRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTransitRouterRouteEntriesResponse listTransitRouterRouteEntries(shared_ptr<ListTransitRouterRouteEntriesRequest> request);
  ListTransitRouterRouteTableAssociationsResponse listTransitRouterRouteTableAssociationsWithOptions(shared_ptr<ListTransitRouterRouteTableAssociationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTransitRouterRouteTableAssociationsResponse listTransitRouterRouteTableAssociations(shared_ptr<ListTransitRouterRouteTableAssociationsRequest> request);
  ListTransitRouterRouteTablePropagationsResponse listTransitRouterRouteTablePropagationsWithOptions(shared_ptr<ListTransitRouterRouteTablePropagationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTransitRouterRouteTablePropagationsResponse listTransitRouterRouteTablePropagations(shared_ptr<ListTransitRouterRouteTablePropagationsRequest> request);
  ListTransitRouterRouteTablesResponse listTransitRouterRouteTablesWithOptions(shared_ptr<ListTransitRouterRouteTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTransitRouterRouteTablesResponse listTransitRouterRouteTables(shared_ptr<ListTransitRouterRouteTablesRequest> request);
  ListTransitRouterVbrAttachmentsResponse listTransitRouterVbrAttachmentsWithOptions(shared_ptr<ListTransitRouterVbrAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTransitRouterVbrAttachmentsResponse listTransitRouterVbrAttachments(shared_ptr<ListTransitRouterVbrAttachmentsRequest> request);
  ListTransitRouterVpcAttachmentsResponse listTransitRouterVpcAttachmentsWithOptions(shared_ptr<ListTransitRouterVpcAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTransitRouterVpcAttachmentsResponse listTransitRouterVpcAttachments(shared_ptr<ListTransitRouterVpcAttachmentsRequest> request);
  ListTransitRoutersResponse listTransitRoutersWithOptions(shared_ptr<ListTransitRoutersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTransitRoutersResponse listTransitRouters(shared_ptr<ListTransitRoutersRequest> request);
  ModifyCenAttributeResponse modifyCenAttributeWithOptions(shared_ptr<ModifyCenAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCenAttributeResponse modifyCenAttribute(shared_ptr<ModifyCenAttributeRequest> request);
  ModifyCenBandwidthPackageAttributeResponse modifyCenBandwidthPackageAttributeWithOptions(shared_ptr<ModifyCenBandwidthPackageAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCenBandwidthPackageAttributeResponse modifyCenBandwidthPackageAttribute(shared_ptr<ModifyCenBandwidthPackageAttributeRequest> request);
  ModifyCenBandwidthPackageSpecResponse modifyCenBandwidthPackageSpecWithOptions(shared_ptr<ModifyCenBandwidthPackageSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCenBandwidthPackageSpecResponse modifyCenBandwidthPackageSpec(shared_ptr<ModifyCenBandwidthPackageSpecRequest> request);
  ModifyCenRouteMapResponse modifyCenRouteMapWithOptions(shared_ptr<ModifyCenRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCenRouteMapResponse modifyCenRouteMap(shared_ptr<ModifyCenRouteMapRequest> request);
  ModifyFlowLogAttributeResponse modifyFlowLogAttributeWithOptions(shared_ptr<ModifyFlowLogAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFlowLogAttributeResponse modifyFlowLogAttribute(shared_ptr<ModifyFlowLogAttributeRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  OpenTransitRouterServiceResponse openTransitRouterServiceWithOptions(shared_ptr<OpenTransitRouterServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenTransitRouterServiceResponse openTransitRouterService(shared_ptr<OpenTransitRouterServiceRequest> request);
  PublishRouteEntriesResponse publishRouteEntriesWithOptions(shared_ptr<PublishRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishRouteEntriesResponse publishRouteEntries(shared_ptr<PublishRouteEntriesRequest> request);
  RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse removeTraficMatchRuleFromTrafficMarkingPolicyWithOptions(shared_ptr<RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse removeTraficMatchRuleFromTrafficMarkingPolicy(shared_ptr<RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest> request);
  ReplaceTransitRouterRouteTableAssociationResponse replaceTransitRouterRouteTableAssociationWithOptions(shared_ptr<ReplaceTransitRouterRouteTableAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceTransitRouterRouteTableAssociationResponse replaceTransitRouterRouteTableAssociation(shared_ptr<ReplaceTransitRouterRouteTableAssociationRequest> request);
  ResolveAndRouteServiceInCenResponse resolveAndRouteServiceInCenWithOptions(shared_ptr<ResolveAndRouteServiceInCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResolveAndRouteServiceInCenResponse resolveAndRouteServiceInCen(shared_ptr<ResolveAndRouteServiceInCenRequest> request);
  RevokeInstanceFromTransitRouterResponse revokeInstanceFromTransitRouterWithOptions(shared_ptr<RevokeInstanceFromTransitRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeInstanceFromTransitRouterResponse revokeInstanceFromTransitRouter(shared_ptr<RevokeInstanceFromTransitRouterRequest> request);
  RoutePrivateZoneInCenToVpcResponse routePrivateZoneInCenToVpcWithOptions(shared_ptr<RoutePrivateZoneInCenToVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RoutePrivateZoneInCenToVpcResponse routePrivateZoneInCenToVpc(shared_ptr<RoutePrivateZoneInCenToVpcRequest> request);
  SetCenInterRegionBandwidthLimitResponse setCenInterRegionBandwidthLimitWithOptions(shared_ptr<SetCenInterRegionBandwidthLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetCenInterRegionBandwidthLimitResponse setCenInterRegionBandwidthLimit(shared_ptr<SetCenInterRegionBandwidthLimitRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  TempUpgradeCenBandwidthPackageSpecResponse tempUpgradeCenBandwidthPackageSpecWithOptions(shared_ptr<TempUpgradeCenBandwidthPackageSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TempUpgradeCenBandwidthPackageSpecResponse tempUpgradeCenBandwidthPackageSpec(shared_ptr<TempUpgradeCenBandwidthPackageSpecRequest> request);
  UnassociateCenBandwidthPackageResponse unassociateCenBandwidthPackageWithOptions(shared_ptr<UnassociateCenBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnassociateCenBandwidthPackageResponse unassociateCenBandwidthPackage(shared_ptr<UnassociateCenBandwidthPackageRequest> request);
  UnroutePrivateZoneInCenToVpcResponse unroutePrivateZoneInCenToVpcWithOptions(shared_ptr<UnroutePrivateZoneInCenToVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnroutePrivateZoneInCenToVpcResponse unroutePrivateZoneInCenToVpc(shared_ptr<UnroutePrivateZoneInCenToVpcRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateCenInterRegionTrafficQosPolicyAttributeResponse updateCenInterRegionTrafficQosPolicyAttributeWithOptions(shared_ptr<UpdateCenInterRegionTrafficQosPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCenInterRegionTrafficQosPolicyAttributeResponse updateCenInterRegionTrafficQosPolicyAttribute(shared_ptr<UpdateCenInterRegionTrafficQosPolicyAttributeRequest> request);
  UpdateCenInterRegionTrafficQosQueueAttributeResponse updateCenInterRegionTrafficQosQueueAttributeWithOptions(shared_ptr<UpdateCenInterRegionTrafficQosQueueAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCenInterRegionTrafficQosQueueAttributeResponse updateCenInterRegionTrafficQosQueueAttribute(shared_ptr<UpdateCenInterRegionTrafficQosQueueAttributeRequest> request);
  UpdateTrafficMarkingPolicyAttributeResponse updateTrafficMarkingPolicyAttributeWithOptions(shared_ptr<UpdateTrafficMarkingPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTrafficMarkingPolicyAttributeResponse updateTrafficMarkingPolicyAttribute(shared_ptr<UpdateTrafficMarkingPolicyAttributeRequest> request);
  UpdateTransitRouterResponse updateTransitRouterWithOptions(shared_ptr<UpdateTransitRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTransitRouterResponse updateTransitRouter(shared_ptr<UpdateTransitRouterRequest> request);
  UpdateTransitRouterPeerAttachmentAttributeResponse updateTransitRouterPeerAttachmentAttributeWithOptions(shared_ptr<UpdateTransitRouterPeerAttachmentAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTransitRouterPeerAttachmentAttributeResponse updateTransitRouterPeerAttachmentAttribute(shared_ptr<UpdateTransitRouterPeerAttachmentAttributeRequest> request);
  UpdateTransitRouterRouteEntryResponse updateTransitRouterRouteEntryWithOptions(shared_ptr<UpdateTransitRouterRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTransitRouterRouteEntryResponse updateTransitRouterRouteEntry(shared_ptr<UpdateTransitRouterRouteEntryRequest> request);
  UpdateTransitRouterRouteTableResponse updateTransitRouterRouteTableWithOptions(shared_ptr<UpdateTransitRouterRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTransitRouterRouteTableResponse updateTransitRouterRouteTable(shared_ptr<UpdateTransitRouterRouteTableRequest> request);
  UpdateTransitRouterVbrAttachmentAttributeResponse updateTransitRouterVbrAttachmentAttributeWithOptions(shared_ptr<UpdateTransitRouterVbrAttachmentAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTransitRouterVbrAttachmentAttributeResponse updateTransitRouterVbrAttachmentAttribute(shared_ptr<UpdateTransitRouterVbrAttachmentAttributeRequest> request);
  UpdateTransitRouterVpcAttachmentAttributeResponse updateTransitRouterVpcAttachmentAttributeWithOptions(shared_ptr<UpdateTransitRouterVpcAttachmentAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTransitRouterVpcAttachmentAttributeResponse updateTransitRouterVpcAttachmentAttribute(shared_ptr<UpdateTransitRouterVpcAttachmentAttributeRequest> request);
  WithdrawPublishedRouteEntriesResponse withdrawPublishedRouteEntriesWithOptions(shared_ptr<WithdrawPublishedRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WithdrawPublishedRouteEntriesResponse withdrawPublishedRouteEntries(shared_ptr<WithdrawPublishedRouteEntriesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cbn20170912

#endif
