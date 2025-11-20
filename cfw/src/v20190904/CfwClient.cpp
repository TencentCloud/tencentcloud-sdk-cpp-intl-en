/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cfw/v20190904/CfwClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cfw::V20190904;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-04";
    const string ENDPOINT = "cfw.intl.tencentcloudapi.com";
}

CfwClient::CfwClient(const Credential &credential, const string &region) :
    CfwClient(credential, region, ClientProfile())
{
}

CfwClient::CfwClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CfwClient::AddAcRuleOutcome CfwClient::AddAcRule(const AddAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAcRuleResponse rsp = AddAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAcRuleOutcome(rsp);
        else
            return AddAcRuleOutcome(o.GetError());
    }
    else
    {
        return AddAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::AddAcRuleAsync(const AddAcRuleRequest& request, const AddAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAcRuleRequest&;
    using Resp = AddAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::AddAcRuleOutcomeCallable CfwClient::AddAcRuleCallable(const AddAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAcRuleOutcome>>();
    AddAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const AddAcRuleRequest&,
        AddAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::AddEnterpriseSecurityGroupRulesOutcome CfwClient::AddEnterpriseSecurityGroupRules(const AddEnterpriseSecurityGroupRulesRequest &request)
{
    auto outcome = MakeRequest(request, "AddEnterpriseSecurityGroupRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEnterpriseSecurityGroupRulesResponse rsp = AddEnterpriseSecurityGroupRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEnterpriseSecurityGroupRulesOutcome(rsp);
        else
            return AddEnterpriseSecurityGroupRulesOutcome(o.GetError());
    }
    else
    {
        return AddEnterpriseSecurityGroupRulesOutcome(outcome.GetError());
    }
}

void CfwClient::AddEnterpriseSecurityGroupRulesAsync(const AddEnterpriseSecurityGroupRulesRequest& request, const AddEnterpriseSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEnterpriseSecurityGroupRulesRequest&;
    using Resp = AddEnterpriseSecurityGroupRulesResponse;

    DoRequestAsync<Req, Resp>(
        "AddEnterpriseSecurityGroupRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::AddEnterpriseSecurityGroupRulesOutcomeCallable CfwClient::AddEnterpriseSecurityGroupRulesCallable(const AddEnterpriseSecurityGroupRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEnterpriseSecurityGroupRulesOutcome>>();
    AddEnterpriseSecurityGroupRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const AddEnterpriseSecurityGroupRulesRequest&,
        AddEnterpriseSecurityGroupRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::AddNatAcRuleOutcome CfwClient::AddNatAcRule(const AddNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNatAcRuleResponse rsp = AddNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNatAcRuleOutcome(rsp);
        else
            return AddNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return AddNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::AddNatAcRuleAsync(const AddNatAcRuleRequest& request, const AddNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddNatAcRuleRequest&;
    using Resp = AddNatAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddNatAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::AddNatAcRuleOutcomeCallable CfwClient::AddNatAcRuleCallable(const AddNatAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddNatAcRuleOutcome>>();
    AddNatAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const AddNatAcRuleRequest&,
        AddNatAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateAcRulesOutcome CfwClient::CreateAcRules(const CreateAcRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAcRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAcRulesResponse rsp = CreateAcRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAcRulesOutcome(rsp);
        else
            return CreateAcRulesOutcome(o.GetError());
    }
    else
    {
        return CreateAcRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateAcRulesAsync(const CreateAcRulesRequest& request, const CreateAcRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAcRulesRequest&;
    using Resp = CreateAcRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAcRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateAcRulesOutcomeCallable CfwClient::CreateAcRulesCallable(const CreateAcRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAcRulesOutcome>>();
    CreateAcRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateAcRulesRequest&,
        CreateAcRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateNatFwInstanceOutcome CfwClient::CreateNatFwInstance(const CreateNatFwInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatFwInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatFwInstanceResponse rsp = CreateNatFwInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatFwInstanceOutcome(rsp);
        else
            return CreateNatFwInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateNatFwInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::CreateNatFwInstanceAsync(const CreateNatFwInstanceRequest& request, const CreateNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatFwInstanceRequest&;
    using Resp = CreateNatFwInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatFwInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateNatFwInstanceOutcomeCallable CfwClient::CreateNatFwInstanceCallable(const CreateNatFwInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatFwInstanceOutcome>>();
    CreateNatFwInstanceAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateNatFwInstanceRequest&,
        CreateNatFwInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateNatFwInstanceWithDomainOutcome CfwClient::CreateNatFwInstanceWithDomain(const CreateNatFwInstanceWithDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatFwInstanceWithDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatFwInstanceWithDomainResponse rsp = CreateNatFwInstanceWithDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatFwInstanceWithDomainOutcome(rsp);
        else
            return CreateNatFwInstanceWithDomainOutcome(o.GetError());
    }
    else
    {
        return CreateNatFwInstanceWithDomainOutcome(outcome.GetError());
    }
}

void CfwClient::CreateNatFwInstanceWithDomainAsync(const CreateNatFwInstanceWithDomainRequest& request, const CreateNatFwInstanceWithDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatFwInstanceWithDomainRequest&;
    using Resp = CreateNatFwInstanceWithDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatFwInstanceWithDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateNatFwInstanceWithDomainOutcomeCallable CfwClient::CreateNatFwInstanceWithDomainCallable(const CreateNatFwInstanceWithDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatFwInstanceWithDomainOutcome>>();
    CreateNatFwInstanceWithDomainAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateNatFwInstanceWithDomainRequest&,
        CreateNatFwInstanceWithDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::CreateSecurityGroupRulesOutcome CfwClient::CreateSecurityGroupRules(const CreateSecurityGroupRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupRulesResponse rsp = CreateSecurityGroupRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupRulesOutcome(rsp);
        else
            return CreateSecurityGroupRulesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupRulesOutcome(outcome.GetError());
    }
}

void CfwClient::CreateSecurityGroupRulesAsync(const CreateSecurityGroupRulesRequest& request, const CreateSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupRulesRequest&;
    using Resp = CreateSecurityGroupRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroupRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::CreateSecurityGroupRulesOutcomeCallable CfwClient::CreateSecurityGroupRulesCallable(const CreateSecurityGroupRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupRulesOutcome>>();
    CreateSecurityGroupRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const CreateSecurityGroupRulesRequest&,
        CreateSecurityGroupRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteAcRuleOutcome CfwClient::DeleteAcRule(const DeleteAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAcRuleResponse rsp = DeleteAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAcRuleOutcome(rsp);
        else
            return DeleteAcRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAcRuleAsync(const DeleteAcRuleRequest& request, const DeleteAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAcRuleRequest&;
    using Resp = DeleteAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteAcRuleOutcomeCallable CfwClient::DeleteAcRuleCallable(const DeleteAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAcRuleOutcome>>();
    DeleteAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteAcRuleRequest&,
        DeleteAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteAllAccessControlRuleOutcome CfwClient::DeleteAllAccessControlRule(const DeleteAllAccessControlRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllAccessControlRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllAccessControlRuleResponse rsp = DeleteAllAccessControlRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllAccessControlRuleOutcome(rsp);
        else
            return DeleteAllAccessControlRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAllAccessControlRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteAllAccessControlRuleAsync(const DeleteAllAccessControlRuleRequest& request, const DeleteAllAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAllAccessControlRuleRequest&;
    using Resp = DeleteAllAccessControlRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAllAccessControlRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteAllAccessControlRuleOutcomeCallable CfwClient::DeleteAllAccessControlRuleCallable(const DeleteAllAccessControlRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAllAccessControlRuleOutcome>>();
    DeleteAllAccessControlRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteAllAccessControlRuleRequest&,
        DeleteAllAccessControlRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteResourceGroupOutcome CfwClient::DeleteResourceGroup(const DeleteResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceGroupResponse rsp = DeleteResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceGroupOutcome(rsp);
        else
            return DeleteResourceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceGroupOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteResourceGroupAsync(const DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceGroupRequest&;
    using Resp = DeleteResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteResourceGroupOutcomeCallable CfwClient::DeleteResourceGroupCallable(const DeleteResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceGroupOutcome>>();
    DeleteResourceGroupAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteResourceGroupRequest&,
        DeleteResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteSecurityGroupRuleOutcome CfwClient::DeleteSecurityGroupRule(const DeleteSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupRuleResponse rsp = DeleteSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupRuleOutcome(rsp);
        else
            return DeleteSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteSecurityGroupRuleAsync(const DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityGroupRuleRequest&;
    using Resp = DeleteSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteSecurityGroupRuleOutcomeCallable CfwClient::DeleteSecurityGroupRuleCallable(const DeleteSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityGroupRuleOutcome>>();
    DeleteSecurityGroupRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteSecurityGroupRuleRequest&,
        DeleteSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DeleteVpcInstanceOutcome CfwClient::DeleteVpcInstance(const DeleteVpcInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpcInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcInstanceResponse rsp = DeleteVpcInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcInstanceOutcome(rsp);
        else
            return DeleteVpcInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::DeleteVpcInstanceAsync(const DeleteVpcInstanceRequest& request, const DeleteVpcInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpcInstanceRequest&;
    using Resp = DeleteVpcInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpcInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DeleteVpcInstanceOutcomeCallable CfwClient::DeleteVpcInstanceCallable(const DeleteVpcInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcInstanceOutcome>>();
    DeleteVpcInstanceAsync(
    request,
    [prom](
        const CfwClient*,
        const DeleteVpcInstanceRequest&,
        DeleteVpcInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeAcListsOutcome CfwClient::DescribeAcLists(const DescribeAcListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAcLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAcListsResponse rsp = DescribeAcListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAcListsOutcome(rsp);
        else
            return DescribeAcListsOutcome(o.GetError());
    }
    else
    {
        return DescribeAcListsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAcListsAsync(const DescribeAcListsRequest& request, const DescribeAcListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAcListsRequest&;
    using Resp = DescribeAcListsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAcLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeAcListsOutcomeCallable CfwClient::DescribeAcListsCallable(const DescribeAcListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAcListsOutcome>>();
    DescribeAcListsAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeAcListsRequest&,
        DescribeAcListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeAssociatedInstanceListOutcome CfwClient::DescribeAssociatedInstanceList(const DescribeAssociatedInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssociatedInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssociatedInstanceListResponse rsp = DescribeAssociatedInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssociatedInstanceListOutcome(rsp);
        else
            return DescribeAssociatedInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssociatedInstanceListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeAssociatedInstanceListAsync(const DescribeAssociatedInstanceListRequest& request, const DescribeAssociatedInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssociatedInstanceListRequest&;
    using Resp = DescribeAssociatedInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssociatedInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeAssociatedInstanceListOutcomeCallable CfwClient::DescribeAssociatedInstanceListCallable(const DescribeAssociatedInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssociatedInstanceListOutcome>>();
    DescribeAssociatedInstanceListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeAssociatedInstanceListRequest&,
        DescribeAssociatedInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeBlockByIpTimesListOutcome CfwClient::DescribeBlockByIpTimesList(const DescribeBlockByIpTimesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockByIpTimesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockByIpTimesListResponse rsp = DescribeBlockByIpTimesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockByIpTimesListOutcome(rsp);
        else
            return DescribeBlockByIpTimesListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockByIpTimesListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeBlockByIpTimesListAsync(const DescribeBlockByIpTimesListRequest& request, const DescribeBlockByIpTimesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlockByIpTimesListRequest&;
    using Resp = DescribeBlockByIpTimesListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlockByIpTimesList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeBlockByIpTimesListOutcomeCallable CfwClient::DescribeBlockByIpTimesListCallable(const DescribeBlockByIpTimesListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlockByIpTimesListOutcome>>();
    DescribeBlockByIpTimesListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeBlockByIpTimesListRequest&,
        DescribeBlockByIpTimesListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeBlockIgnoreListOutcome CfwClient::DescribeBlockIgnoreList(const DescribeBlockIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockIgnoreListResponse rsp = DescribeBlockIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockIgnoreListOutcome(rsp);
        else
            return DescribeBlockIgnoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockIgnoreListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeBlockIgnoreListAsync(const DescribeBlockIgnoreListRequest& request, const DescribeBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlockIgnoreListRequest&;
    using Resp = DescribeBlockIgnoreListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlockIgnoreList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeBlockIgnoreListOutcomeCallable CfwClient::DescribeBlockIgnoreListCallable(const DescribeBlockIgnoreListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlockIgnoreListOutcome>>();
    DescribeBlockIgnoreListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeBlockIgnoreListRequest&,
        DescribeBlockIgnoreListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeBlockStaticListOutcome CfwClient::DescribeBlockStaticList(const DescribeBlockStaticListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockStaticList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockStaticListResponse rsp = DescribeBlockStaticListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockStaticListOutcome(rsp);
        else
            return DescribeBlockStaticListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockStaticListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeBlockStaticListAsync(const DescribeBlockStaticListRequest& request, const DescribeBlockStaticListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlockStaticListRequest&;
    using Resp = DescribeBlockStaticListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlockStaticList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeBlockStaticListOutcomeCallable CfwClient::DescribeBlockStaticListCallable(const DescribeBlockStaticListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlockStaticListOutcome>>();
    DescribeBlockStaticListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeBlockStaticListRequest&,
        DescribeBlockStaticListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeDefenseSwitchOutcome CfwClient::DescribeDefenseSwitch(const DescribeDefenseSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefenseSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefenseSwitchResponse rsp = DescribeDefenseSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefenseSwitchOutcome(rsp);
        else
            return DescribeDefenseSwitchOutcome(o.GetError());
    }
    else
    {
        return DescribeDefenseSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeDefenseSwitchAsync(const DescribeDefenseSwitchRequest& request, const DescribeDefenseSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDefenseSwitchRequest&;
    using Resp = DescribeDefenseSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefenseSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeDefenseSwitchOutcomeCallable CfwClient::DescribeDefenseSwitchCallable(const DescribeDefenseSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefenseSwitchOutcome>>();
    DescribeDefenseSwitchAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeDefenseSwitchRequest&,
        DescribeDefenseSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeEnterpriseSecurityGroupRuleOutcome CfwClient::DescribeEnterpriseSecurityGroupRule(const DescribeEnterpriseSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnterpriseSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnterpriseSecurityGroupRuleResponse rsp = DescribeEnterpriseSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnterpriseSecurityGroupRuleOutcome(rsp);
        else
            return DescribeEnterpriseSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeEnterpriseSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeEnterpriseSecurityGroupRuleAsync(const DescribeEnterpriseSecurityGroupRuleRequest& request, const DescribeEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnterpriseSecurityGroupRuleRequest&;
    using Resp = DescribeEnterpriseSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnterpriseSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::DescribeEnterpriseSecurityGroupRuleCallable(const DescribeEnterpriseSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnterpriseSecurityGroupRuleOutcome>>();
    DescribeEnterpriseSecurityGroupRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeEnterpriseSecurityGroupRuleRequest&,
        DescribeEnterpriseSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeGuideScanInfoOutcome CfwClient::DescribeGuideScanInfo(const DescribeGuideScanInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGuideScanInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGuideScanInfoResponse rsp = DescribeGuideScanInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGuideScanInfoOutcome(rsp);
        else
            return DescribeGuideScanInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeGuideScanInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeGuideScanInfoAsync(const DescribeGuideScanInfoRequest& request, const DescribeGuideScanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGuideScanInfoRequest&;
    using Resp = DescribeGuideScanInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGuideScanInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeGuideScanInfoOutcomeCallable CfwClient::DescribeGuideScanInfoCallable(const DescribeGuideScanInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGuideScanInfoOutcome>>();
    DescribeGuideScanInfoAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeGuideScanInfoRequest&,
        DescribeGuideScanInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeIPStatusListOutcome CfwClient::DescribeIPStatusList(const DescribeIPStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPStatusListResponse rsp = DescribeIPStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPStatusListOutcome(rsp);
        else
            return DescribeIPStatusListOutcome(o.GetError());
    }
    else
    {
        return DescribeIPStatusListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeIPStatusListAsync(const DescribeIPStatusListRequest& request, const DescribeIPStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIPStatusListRequest&;
    using Resp = DescribeIPStatusListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPStatusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeIPStatusListOutcomeCallable CfwClient::DescribeIPStatusListCallable(const DescribeIPStatusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPStatusListOutcome>>();
    DescribeIPStatusListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeIPStatusListRequest&,
        DescribeIPStatusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatAcRuleOutcome CfwClient::DescribeNatAcRule(const DescribeNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatAcRuleResponse rsp = DescribeNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatAcRuleOutcome(rsp);
        else
            return DescribeNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatAcRuleAsync(const DescribeNatAcRuleRequest& request, const DescribeNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatAcRuleRequest&;
    using Resp = DescribeNatAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatAcRuleOutcomeCallable CfwClient::DescribeNatAcRuleCallable(const DescribeNatAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatAcRuleOutcome>>();
    DescribeNatAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatAcRuleRequest&,
        DescribeNatAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwInfoCountOutcome CfwClient::DescribeNatFwInfoCount(const DescribeNatFwInfoCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInfoCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInfoCountResponse rsp = DescribeNatFwInfoCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInfoCountOutcome(rsp);
        else
            return DescribeNatFwInfoCountOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInfoCountOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInfoCountAsync(const DescribeNatFwInfoCountRequest& request, const DescribeNatFwInfoCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwInfoCountRequest&;
    using Resp = DescribeNatFwInfoCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwInfoCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwInfoCountOutcomeCallable CfwClient::DescribeNatFwInfoCountCallable(const DescribeNatFwInfoCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwInfoCountOutcome>>();
    DescribeNatFwInfoCountAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwInfoCountRequest&,
        DescribeNatFwInfoCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwInstanceOutcome CfwClient::DescribeNatFwInstance(const DescribeNatFwInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInstanceResponse rsp = DescribeNatFwInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInstanceOutcome(rsp);
        else
            return DescribeNatFwInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInstanceOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInstanceAsync(const DescribeNatFwInstanceRequest& request, const DescribeNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwInstanceRequest&;
    using Resp = DescribeNatFwInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwInstanceOutcomeCallable CfwClient::DescribeNatFwInstanceCallable(const DescribeNatFwInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwInstanceOutcome>>();
    DescribeNatFwInstanceAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwInstanceRequest&,
        DescribeNatFwInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwInstanceWithRegionOutcome CfwClient::DescribeNatFwInstanceWithRegion(const DescribeNatFwInstanceWithRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInstanceWithRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInstanceWithRegionResponse rsp = DescribeNatFwInstanceWithRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInstanceWithRegionOutcome(rsp);
        else
            return DescribeNatFwInstanceWithRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInstanceWithRegionOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInstanceWithRegionAsync(const DescribeNatFwInstanceWithRegionRequest& request, const DescribeNatFwInstanceWithRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwInstanceWithRegionRequest&;
    using Resp = DescribeNatFwInstanceWithRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwInstanceWithRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwInstanceWithRegionOutcomeCallable CfwClient::DescribeNatFwInstanceWithRegionCallable(const DescribeNatFwInstanceWithRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwInstanceWithRegionOutcome>>();
    DescribeNatFwInstanceWithRegionAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwInstanceWithRegionRequest&,
        DescribeNatFwInstanceWithRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwInstancesInfoOutcome CfwClient::DescribeNatFwInstancesInfo(const DescribeNatFwInstancesInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwInstancesInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwInstancesInfoResponse rsp = DescribeNatFwInstancesInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwInstancesInfoOutcome(rsp);
        else
            return DescribeNatFwInstancesInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwInstancesInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwInstancesInfoAsync(const DescribeNatFwInstancesInfoRequest& request, const DescribeNatFwInstancesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwInstancesInfoRequest&;
    using Resp = DescribeNatFwInstancesInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwInstancesInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwInstancesInfoOutcomeCallable CfwClient::DescribeNatFwInstancesInfoCallable(const DescribeNatFwInstancesInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwInstancesInfoOutcome>>();
    DescribeNatFwInstancesInfoAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwInstancesInfoRequest&,
        DescribeNatFwInstancesInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeNatFwVpcDnsLstOutcome CfwClient::DescribeNatFwVpcDnsLst(const DescribeNatFwVpcDnsLstRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatFwVpcDnsLst");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatFwVpcDnsLstResponse rsp = DescribeNatFwVpcDnsLstResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatFwVpcDnsLstOutcome(rsp);
        else
            return DescribeNatFwVpcDnsLstOutcome(o.GetError());
    }
    else
    {
        return DescribeNatFwVpcDnsLstOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeNatFwVpcDnsLstAsync(const DescribeNatFwVpcDnsLstRequest& request, const DescribeNatFwVpcDnsLstAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatFwVpcDnsLstRequest&;
    using Resp = DescribeNatFwVpcDnsLstResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatFwVpcDnsLst", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeNatFwVpcDnsLstOutcomeCallable CfwClient::DescribeNatFwVpcDnsLstCallable(const DescribeNatFwVpcDnsLstRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatFwVpcDnsLstOutcome>>();
    DescribeNatFwVpcDnsLstAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeNatFwVpcDnsLstRequest&,
        DescribeNatFwVpcDnsLstOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeResourceGroupNewOutcome CfwClient::DescribeResourceGroupNew(const DescribeResourceGroupNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGroupNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGroupNewResponse rsp = DescribeResourceGroupNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGroupNewOutcome(rsp);
        else
            return DescribeResourceGroupNewOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGroupNewOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeResourceGroupNewAsync(const DescribeResourceGroupNewRequest& request, const DescribeResourceGroupNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceGroupNewRequest&;
    using Resp = DescribeResourceGroupNewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceGroupNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeResourceGroupNewOutcomeCallable CfwClient::DescribeResourceGroupNewCallable(const DescribeResourceGroupNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceGroupNewOutcome>>();
    DescribeResourceGroupNewAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeResourceGroupNewRequest&,
        DescribeResourceGroupNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeRuleOverviewOutcome CfwClient::DescribeRuleOverview(const DescribeRuleOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleOverviewResponse rsp = DescribeRuleOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleOverviewOutcome(rsp);
        else
            return DescribeRuleOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleOverviewOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeRuleOverviewAsync(const DescribeRuleOverviewRequest& request, const DescribeRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleOverviewRequest&;
    using Resp = DescribeRuleOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeRuleOverviewOutcomeCallable CfwClient::DescribeRuleOverviewCallable(const DescribeRuleOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleOverviewOutcome>>();
    DescribeRuleOverviewAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeRuleOverviewRequest&,
        DescribeRuleOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeSecurityGroupListOutcome CfwClient::DescribeSecurityGroupList(const DescribeSecurityGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupListResponse rsp = DescribeSecurityGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupListOutcome(rsp);
        else
            return DescribeSecurityGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSecurityGroupListAsync(const DescribeSecurityGroupListRequest& request, const DescribeSecurityGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupListRequest&;
    using Resp = DescribeSecurityGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeSecurityGroupListOutcomeCallable CfwClient::DescribeSecurityGroupListCallable(const DescribeSecurityGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupListOutcome>>();
    DescribeSecurityGroupListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeSecurityGroupListRequest&,
        DescribeSecurityGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeSourceAssetOutcome CfwClient::DescribeSourceAsset(const DescribeSourceAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSourceAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSourceAssetResponse rsp = DescribeSourceAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSourceAssetOutcome(rsp);
        else
            return DescribeSourceAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeSourceAssetOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSourceAssetAsync(const DescribeSourceAssetRequest& request, const DescribeSourceAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSourceAssetRequest&;
    using Resp = DescribeSourceAssetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSourceAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeSourceAssetOutcomeCallable CfwClient::DescribeSourceAssetCallable(const DescribeSourceAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSourceAssetOutcome>>();
    DescribeSourceAssetAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeSourceAssetRequest&,
        DescribeSourceAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeSwitchListsOutcome CfwClient::DescribeSwitchLists(const DescribeSwitchListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSwitchLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSwitchListsResponse rsp = DescribeSwitchListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSwitchListsOutcome(rsp);
        else
            return DescribeSwitchListsOutcome(o.GetError());
    }
    else
    {
        return DescribeSwitchListsOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeSwitchListsAsync(const DescribeSwitchListsRequest& request, const DescribeSwitchListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSwitchListsRequest&;
    using Resp = DescribeSwitchListsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSwitchLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeSwitchListsOutcomeCallable CfwClient::DescribeSwitchListsCallable(const DescribeSwitchListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSwitchListsOutcome>>();
    DescribeSwitchListsAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeSwitchListsRequest&,
        DescribeSwitchListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeTLogInfoOutcome CfwClient::DescribeTLogInfo(const DescribeTLogInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTLogInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTLogInfoResponse rsp = DescribeTLogInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTLogInfoOutcome(rsp);
        else
            return DescribeTLogInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTLogInfoOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTLogInfoAsync(const DescribeTLogInfoRequest& request, const DescribeTLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTLogInfoRequest&;
    using Resp = DescribeTLogInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTLogInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeTLogInfoOutcomeCallable CfwClient::DescribeTLogInfoCallable(const DescribeTLogInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTLogInfoOutcome>>();
    DescribeTLogInfoAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeTLogInfoRequest&,
        DescribeTLogInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeTLogIpListOutcome CfwClient::DescribeTLogIpList(const DescribeTLogIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTLogIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTLogIpListResponse rsp = DescribeTLogIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTLogIpListOutcome(rsp);
        else
            return DescribeTLogIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeTLogIpListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTLogIpListAsync(const DescribeTLogIpListRequest& request, const DescribeTLogIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTLogIpListRequest&;
    using Resp = DescribeTLogIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTLogIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeTLogIpListOutcomeCallable CfwClient::DescribeTLogIpListCallable(const DescribeTLogIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTLogIpListOutcome>>();
    DescribeTLogIpListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeTLogIpListRequest&,
        DescribeTLogIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeTableStatusOutcome CfwClient::DescribeTableStatus(const DescribeTableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableStatusResponse rsp = DescribeTableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableStatusOutcome(rsp);
        else
            return DescribeTableStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTableStatusOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeTableStatusAsync(const DescribeTableStatusRequest& request, const DescribeTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableStatusRequest&;
    using Resp = DescribeTableStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeTableStatusOutcomeCallable CfwClient::DescribeTableStatusCallable(const DescribeTableStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableStatusOutcome>>();
    DescribeTableStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeTableStatusRequest&,
        DescribeTableStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeUnHandleEventTabListOutcome CfwClient::DescribeUnHandleEventTabList(const DescribeUnHandleEventTabListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnHandleEventTabList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnHandleEventTabListResponse rsp = DescribeUnHandleEventTabListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnHandleEventTabListOutcome(rsp);
        else
            return DescribeUnHandleEventTabListOutcome(o.GetError());
    }
    else
    {
        return DescribeUnHandleEventTabListOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeUnHandleEventTabListAsync(const DescribeUnHandleEventTabListRequest& request, const DescribeUnHandleEventTabListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnHandleEventTabListRequest&;
    using Resp = DescribeUnHandleEventTabListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnHandleEventTabList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeUnHandleEventTabListOutcomeCallable CfwClient::DescribeUnHandleEventTabListCallable(const DescribeUnHandleEventTabListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnHandleEventTabListOutcome>>();
    DescribeUnHandleEventTabListAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeUnHandleEventTabListRequest&,
        DescribeUnHandleEventTabListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::DescribeVpcAcRuleOutcome CfwClient::DescribeVpcAcRule(const DescribeVpcAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcAcRuleResponse rsp = DescribeVpcAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcAcRuleOutcome(rsp);
        else
            return DescribeVpcAcRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::DescribeVpcAcRuleAsync(const DescribeVpcAcRuleRequest& request, const DescribeVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcAcRuleRequest&;
    using Resp = DescribeVpcAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::DescribeVpcAcRuleOutcomeCallable CfwClient::DescribeVpcAcRuleCallable(const DescribeVpcAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcAcRuleOutcome>>();
    DescribeVpcAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const DescribeVpcAcRuleRequest&,
        DescribeVpcAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ExpandCfwVerticalOutcome CfwClient::ExpandCfwVertical(const ExpandCfwVerticalRequest &request)
{
    auto outcome = MakeRequest(request, "ExpandCfwVertical");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExpandCfwVerticalResponse rsp = ExpandCfwVerticalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExpandCfwVerticalOutcome(rsp);
        else
            return ExpandCfwVerticalOutcome(o.GetError());
    }
    else
    {
        return ExpandCfwVerticalOutcome(outcome.GetError());
    }
}

void CfwClient::ExpandCfwVerticalAsync(const ExpandCfwVerticalRequest& request, const ExpandCfwVerticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExpandCfwVerticalRequest&;
    using Resp = ExpandCfwVerticalResponse;

    DoRequestAsync<Req, Resp>(
        "ExpandCfwVertical", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ExpandCfwVerticalOutcomeCallable CfwClient::ExpandCfwVerticalCallable(const ExpandCfwVerticalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExpandCfwVerticalOutcome>>();
    ExpandCfwVerticalAsync(
    request,
    [prom](
        const CfwClient*,
        const ExpandCfwVerticalRequest&,
        ExpandCfwVerticalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAcRuleOutcome CfwClient::ModifyAcRule(const ModifyAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAcRuleResponse rsp = ModifyAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAcRuleOutcome(rsp);
        else
            return ModifyAcRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAcRuleAsync(const ModifyAcRuleRequest& request, const ModifyAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAcRuleRequest&;
    using Resp = ModifyAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAcRuleOutcomeCallable CfwClient::ModifyAcRuleCallable(const ModifyAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAcRuleOutcome>>();
    ModifyAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAcRuleRequest&,
        ModifyAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAllPublicIPSwitchStatusOutcome CfwClient::ModifyAllPublicIPSwitchStatus(const ModifyAllPublicIPSwitchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllPublicIPSwitchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllPublicIPSwitchStatusResponse rsp = ModifyAllPublicIPSwitchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllPublicIPSwitchStatusOutcome(rsp);
        else
            return ModifyAllPublicIPSwitchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAllPublicIPSwitchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAllPublicIPSwitchStatusAsync(const ModifyAllPublicIPSwitchStatusRequest& request, const ModifyAllPublicIPSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAllPublicIPSwitchStatusRequest&;
    using Resp = ModifyAllPublicIPSwitchStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAllPublicIPSwitchStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAllPublicIPSwitchStatusOutcomeCallable CfwClient::ModifyAllPublicIPSwitchStatusCallable(const ModifyAllPublicIPSwitchStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAllPublicIPSwitchStatusOutcome>>();
    ModifyAllPublicIPSwitchStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAllPublicIPSwitchStatusRequest&,
        ModifyAllPublicIPSwitchStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAllRuleStatusOutcome CfwClient::ModifyAllRuleStatus(const ModifyAllRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllRuleStatusResponse rsp = ModifyAllRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllRuleStatusOutcome(rsp);
        else
            return ModifyAllRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAllRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAllRuleStatusAsync(const ModifyAllRuleStatusRequest& request, const ModifyAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAllRuleStatusRequest&;
    using Resp = ModifyAllRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAllRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAllRuleStatusOutcomeCallable CfwClient::ModifyAllRuleStatusCallable(const ModifyAllRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAllRuleStatusOutcome>>();
    ModifyAllRuleStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAllRuleStatusRequest&,
        ModifyAllRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAllVPCSwitchStatusOutcome CfwClient::ModifyAllVPCSwitchStatus(const ModifyAllVPCSwitchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllVPCSwitchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllVPCSwitchStatusResponse rsp = ModifyAllVPCSwitchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllVPCSwitchStatusOutcome(rsp);
        else
            return ModifyAllVPCSwitchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAllVPCSwitchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAllVPCSwitchStatusAsync(const ModifyAllVPCSwitchStatusRequest& request, const ModifyAllVPCSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAllVPCSwitchStatusRequest&;
    using Resp = ModifyAllVPCSwitchStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAllVPCSwitchStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAllVPCSwitchStatusOutcomeCallable CfwClient::ModifyAllVPCSwitchStatusCallable(const ModifyAllVPCSwitchStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAllVPCSwitchStatusOutcome>>();
    ModifyAllVPCSwitchStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAllVPCSwitchStatusRequest&,
        ModifyAllVPCSwitchStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyAssetScanOutcome CfwClient::ModifyAssetScan(const ModifyAssetScanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssetScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetScanResponse rsp = ModifyAssetScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetScanOutcome(rsp);
        else
            return ModifyAssetScanOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetScanOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyAssetScanAsync(const ModifyAssetScanRequest& request, const ModifyAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAssetScanRequest&;
    using Resp = ModifyAssetScanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAssetScan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyAssetScanOutcomeCallable CfwClient::ModifyAssetScanCallable(const ModifyAssetScanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAssetScanOutcome>>();
    ModifyAssetScanAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyAssetScanRequest&,
        ModifyAssetScanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyBlockIgnoreListOutcome CfwClient::ModifyBlockIgnoreList(const ModifyBlockIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIgnoreListResponse rsp = ModifyBlockIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIgnoreListOutcome(rsp);
        else
            return ModifyBlockIgnoreListOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIgnoreListOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockIgnoreListAsync(const ModifyBlockIgnoreListRequest& request, const ModifyBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBlockIgnoreListRequest&;
    using Resp = ModifyBlockIgnoreListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBlockIgnoreList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyBlockIgnoreListOutcomeCallable CfwClient::ModifyBlockIgnoreListCallable(const ModifyBlockIgnoreListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBlockIgnoreListOutcome>>();
    ModifyBlockIgnoreListAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyBlockIgnoreListRequest&,
        ModifyBlockIgnoreListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyBlockTopOutcome CfwClient::ModifyBlockTop(const ModifyBlockTopRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockTopResponse rsp = ModifyBlockTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockTopOutcome(rsp);
        else
            return ModifyBlockTopOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockTopOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyBlockTopAsync(const ModifyBlockTopRequest& request, const ModifyBlockTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBlockTopRequest&;
    using Resp = ModifyBlockTopResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBlockTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyBlockTopOutcomeCallable CfwClient::ModifyBlockTopCallable(const ModifyBlockTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBlockTopOutcome>>();
    ModifyBlockTopAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyBlockTopRequest&,
        ModifyBlockTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyEnterpriseSecurityDispatchStatusOutcome CfwClient::ModifyEnterpriseSecurityDispatchStatus(const ModifyEnterpriseSecurityDispatchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnterpriseSecurityDispatchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnterpriseSecurityDispatchStatusResponse rsp = ModifyEnterpriseSecurityDispatchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnterpriseSecurityDispatchStatusOutcome(rsp);
        else
            return ModifyEnterpriseSecurityDispatchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyEnterpriseSecurityDispatchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEnterpriseSecurityDispatchStatusAsync(const ModifyEnterpriseSecurityDispatchStatusRequest& request, const ModifyEnterpriseSecurityDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnterpriseSecurityDispatchStatusRequest&;
    using Resp = ModifyEnterpriseSecurityDispatchStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnterpriseSecurityDispatchStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyEnterpriseSecurityDispatchStatusOutcomeCallable CfwClient::ModifyEnterpriseSecurityDispatchStatusCallable(const ModifyEnterpriseSecurityDispatchStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnterpriseSecurityDispatchStatusOutcome>>();
    ModifyEnterpriseSecurityDispatchStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyEnterpriseSecurityDispatchStatusRequest&,
        ModifyEnterpriseSecurityDispatchStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyEnterpriseSecurityGroupRuleOutcome CfwClient::ModifyEnterpriseSecurityGroupRule(const ModifyEnterpriseSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnterpriseSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnterpriseSecurityGroupRuleResponse rsp = ModifyEnterpriseSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnterpriseSecurityGroupRuleOutcome(rsp);
        else
            return ModifyEnterpriseSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyEnterpriseSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyEnterpriseSecurityGroupRuleAsync(const ModifyEnterpriseSecurityGroupRuleRequest& request, const ModifyEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnterpriseSecurityGroupRuleRequest&;
    using Resp = ModifyEnterpriseSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnterpriseSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::ModifyEnterpriseSecurityGroupRuleCallable(const ModifyEnterpriseSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnterpriseSecurityGroupRuleOutcome>>();
    ModifyEnterpriseSecurityGroupRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyEnterpriseSecurityGroupRuleRequest&,
        ModifyEnterpriseSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatAcRuleOutcome CfwClient::ModifyNatAcRule(const ModifyNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatAcRuleResponse rsp = ModifyNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatAcRuleOutcome(rsp);
        else
            return ModifyNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatAcRuleAsync(const ModifyNatAcRuleRequest& request, const ModifyNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatAcRuleRequest&;
    using Resp = ModifyNatAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatAcRuleOutcomeCallable CfwClient::ModifyNatAcRuleCallable(const ModifyNatAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatAcRuleOutcome>>();
    ModifyNatAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatAcRuleRequest&,
        ModifyNatAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatFwReSelectOutcome CfwClient::ModifyNatFwReSelect(const ModifyNatFwReSelectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatFwReSelect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatFwReSelectResponse rsp = ModifyNatFwReSelectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatFwReSelectOutcome(rsp);
        else
            return ModifyNatFwReSelectOutcome(o.GetError());
    }
    else
    {
        return ModifyNatFwReSelectOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatFwReSelectAsync(const ModifyNatFwReSelectRequest& request, const ModifyNatFwReSelectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatFwReSelectRequest&;
    using Resp = ModifyNatFwReSelectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatFwReSelect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatFwReSelectOutcomeCallable CfwClient::ModifyNatFwReSelectCallable(const ModifyNatFwReSelectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatFwReSelectOutcome>>();
    ModifyNatFwReSelectAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatFwReSelectRequest&,
        ModifyNatFwReSelectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatFwSwitchOutcome CfwClient::ModifyNatFwSwitch(const ModifyNatFwSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatFwSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatFwSwitchResponse rsp = ModifyNatFwSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatFwSwitchOutcome(rsp);
        else
            return ModifyNatFwSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyNatFwSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatFwSwitchAsync(const ModifyNatFwSwitchRequest& request, const ModifyNatFwSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatFwSwitchRequest&;
    using Resp = ModifyNatFwSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatFwSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatFwSwitchOutcomeCallable CfwClient::ModifyNatFwSwitchCallable(const ModifyNatFwSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatFwSwitchOutcome>>();
    ModifyNatFwSwitchAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatFwSwitchRequest&,
        ModifyNatFwSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatFwVpcDnsSwitchOutcome CfwClient::ModifyNatFwVpcDnsSwitch(const ModifyNatFwVpcDnsSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatFwVpcDnsSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatFwVpcDnsSwitchResponse rsp = ModifyNatFwVpcDnsSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatFwVpcDnsSwitchOutcome(rsp);
        else
            return ModifyNatFwVpcDnsSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyNatFwVpcDnsSwitchOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatFwVpcDnsSwitchAsync(const ModifyNatFwVpcDnsSwitchRequest& request, const ModifyNatFwVpcDnsSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatFwVpcDnsSwitchRequest&;
    using Resp = ModifyNatFwVpcDnsSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatFwVpcDnsSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatFwVpcDnsSwitchOutcomeCallable CfwClient::ModifyNatFwVpcDnsSwitchCallable(const ModifyNatFwVpcDnsSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatFwVpcDnsSwitchOutcome>>();
    ModifyNatFwVpcDnsSwitchAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatFwVpcDnsSwitchRequest&,
        ModifyNatFwVpcDnsSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyNatSequenceRulesOutcome CfwClient::ModifyNatSequenceRules(const ModifyNatSequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatSequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatSequenceRulesResponse rsp = ModifyNatSequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatSequenceRulesOutcome(rsp);
        else
            return ModifyNatSequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyNatSequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyNatSequenceRulesAsync(const ModifyNatSequenceRulesRequest& request, const ModifyNatSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatSequenceRulesRequest&;
    using Resp = ModifyNatSequenceRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatSequenceRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyNatSequenceRulesOutcomeCallable CfwClient::ModifyNatSequenceRulesCallable(const ModifyNatSequenceRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatSequenceRulesOutcome>>();
    ModifyNatSequenceRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyNatSequenceRulesRequest&,
        ModifyNatSequenceRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyPublicIPSwitchStatusOutcome CfwClient::ModifyPublicIPSwitchStatus(const ModifyPublicIPSwitchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPublicIPSwitchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPublicIPSwitchStatusResponse rsp = ModifyPublicIPSwitchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPublicIPSwitchStatusOutcome(rsp);
        else
            return ModifyPublicIPSwitchStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyPublicIPSwitchStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyPublicIPSwitchStatusAsync(const ModifyPublicIPSwitchStatusRequest& request, const ModifyPublicIPSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPublicIPSwitchStatusRequest&;
    using Resp = ModifyPublicIPSwitchStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPublicIPSwitchStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyPublicIPSwitchStatusOutcomeCallable CfwClient::ModifyPublicIPSwitchStatusCallable(const ModifyPublicIPSwitchStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPublicIPSwitchStatusOutcome>>();
    ModifyPublicIPSwitchStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyPublicIPSwitchStatusRequest&,
        ModifyPublicIPSwitchStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyResourceGroupOutcome CfwClient::ModifyResourceGroup(const ModifyResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceGroupResponse rsp = ModifyResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceGroupOutcome(rsp);
        else
            return ModifyResourceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceGroupOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyResourceGroupAsync(const ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourceGroupRequest&;
    using Resp = ModifyResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyResourceGroupOutcomeCallable CfwClient::ModifyResourceGroupCallable(const ModifyResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceGroupOutcome>>();
    ModifyResourceGroupAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyResourceGroupRequest&,
        ModifyResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyRunSyncAssetOutcome CfwClient::ModifyRunSyncAsset(const ModifyRunSyncAssetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRunSyncAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRunSyncAssetResponse rsp = ModifyRunSyncAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRunSyncAssetOutcome(rsp);
        else
            return ModifyRunSyncAssetOutcome(o.GetError());
    }
    else
    {
        return ModifyRunSyncAssetOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyRunSyncAssetAsync(const ModifyRunSyncAssetRequest& request, const ModifyRunSyncAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRunSyncAssetRequest&;
    using Resp = ModifyRunSyncAssetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRunSyncAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyRunSyncAssetOutcomeCallable CfwClient::ModifyRunSyncAssetCallable(const ModifyRunSyncAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRunSyncAssetOutcome>>();
    ModifyRunSyncAssetAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyRunSyncAssetRequest&,
        ModifyRunSyncAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifySecurityGroupItemRuleStatusOutcome CfwClient::ModifySecurityGroupItemRuleStatus(const ModifySecurityGroupItemRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupItemRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupItemRuleStatusResponse rsp = ModifySecurityGroupItemRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupItemRuleStatusOutcome(rsp);
        else
            return ModifySecurityGroupItemRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupItemRuleStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySecurityGroupItemRuleStatusAsync(const ModifySecurityGroupItemRuleStatusRequest& request, const ModifySecurityGroupItemRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupItemRuleStatusRequest&;
    using Resp = ModifySecurityGroupItemRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupItemRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifySecurityGroupItemRuleStatusOutcomeCallable CfwClient::ModifySecurityGroupItemRuleStatusCallable(const ModifySecurityGroupItemRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupItemRuleStatusOutcome>>();
    ModifySecurityGroupItemRuleStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifySecurityGroupItemRuleStatusRequest&,
        ModifySecurityGroupItemRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifySecurityGroupSequenceRulesOutcome CfwClient::ModifySecurityGroupSequenceRules(const ModifySecurityGroupSequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupSequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupSequenceRulesResponse rsp = ModifySecurityGroupSequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupSequenceRulesOutcome(rsp);
        else
            return ModifySecurityGroupSequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupSequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySecurityGroupSequenceRulesAsync(const ModifySecurityGroupSequenceRulesRequest& request, const ModifySecurityGroupSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupSequenceRulesRequest&;
    using Resp = ModifySecurityGroupSequenceRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupSequenceRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifySecurityGroupSequenceRulesOutcomeCallable CfwClient::ModifySecurityGroupSequenceRulesCallable(const ModifySecurityGroupSequenceRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupSequenceRulesOutcome>>();
    ModifySecurityGroupSequenceRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifySecurityGroupSequenceRulesRequest&,
        ModifySecurityGroupSequenceRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifySequenceRulesOutcome CfwClient::ModifySequenceRules(const ModifySequenceRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySequenceRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySequenceRulesResponse rsp = ModifySequenceRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySequenceRulesOutcome(rsp);
        else
            return ModifySequenceRulesOutcome(o.GetError());
    }
    else
    {
        return ModifySequenceRulesOutcome(outcome.GetError());
    }
}

void CfwClient::ModifySequenceRulesAsync(const ModifySequenceRulesRequest& request, const ModifySequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySequenceRulesRequest&;
    using Resp = ModifySequenceRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySequenceRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifySequenceRulesOutcomeCallable CfwClient::ModifySequenceRulesCallable(const ModifySequenceRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySequenceRulesOutcome>>();
    ModifySequenceRulesAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifySequenceRulesRequest&,
        ModifySequenceRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyStorageSettingOutcome CfwClient::ModifyStorageSetting(const ModifyStorageSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStorageSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStorageSettingResponse rsp = ModifyStorageSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStorageSettingOutcome(rsp);
        else
            return ModifyStorageSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyStorageSettingOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyStorageSettingAsync(const ModifyStorageSettingRequest& request, const ModifyStorageSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStorageSettingRequest&;
    using Resp = ModifyStorageSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStorageSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyStorageSettingOutcomeCallable CfwClient::ModifyStorageSettingCallable(const ModifyStorageSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStorageSettingOutcome>>();
    ModifyStorageSettingAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyStorageSettingRequest&,
        ModifyStorageSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::ModifyTableStatusOutcome CfwClient::ModifyTableStatus(const ModifyTableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableStatusResponse rsp = ModifyTableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableStatusOutcome(rsp);
        else
            return ModifyTableStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyTableStatusOutcome(outcome.GetError());
    }
}

void CfwClient::ModifyTableStatusAsync(const ModifyTableStatusRequest& request, const ModifyTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTableStatusRequest&;
    using Resp = ModifyTableStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTableStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::ModifyTableStatusOutcomeCallable CfwClient::ModifyTableStatusCallable(const ModifyTableStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTableStatusOutcome>>();
    ModifyTableStatusAsync(
    request,
    [prom](
        const CfwClient*,
        const ModifyTableStatusRequest&,
        ModifyTableStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::RemoveAcRuleOutcome CfwClient::RemoveAcRule(const RemoveAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveAcRuleResponse rsp = RemoveAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveAcRuleOutcome(rsp);
        else
            return RemoveAcRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveAcRuleAsync(const RemoveAcRuleRequest& request, const RemoveAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveAcRuleRequest&;
    using Resp = RemoveAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::RemoveAcRuleOutcomeCallable CfwClient::RemoveAcRuleCallable(const RemoveAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveAcRuleOutcome>>();
    RemoveAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const RemoveAcRuleRequest&,
        RemoveAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::RemoveEnterpriseSecurityGroupRuleOutcome CfwClient::RemoveEnterpriseSecurityGroupRule(const RemoveEnterpriseSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveEnterpriseSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveEnterpriseSecurityGroupRuleResponse rsp = RemoveEnterpriseSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveEnterpriseSecurityGroupRuleOutcome(rsp);
        else
            return RemoveEnterpriseSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveEnterpriseSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveEnterpriseSecurityGroupRuleAsync(const RemoveEnterpriseSecurityGroupRuleRequest& request, const RemoveEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveEnterpriseSecurityGroupRuleRequest&;
    using Resp = RemoveEnterpriseSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveEnterpriseSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::RemoveEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::RemoveEnterpriseSecurityGroupRuleCallable(const RemoveEnterpriseSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveEnterpriseSecurityGroupRuleOutcome>>();
    RemoveEnterpriseSecurityGroupRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const RemoveEnterpriseSecurityGroupRuleRequest&,
        RemoveEnterpriseSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::RemoveNatAcRuleOutcome CfwClient::RemoveNatAcRule(const RemoveNatAcRuleRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveNatAcRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveNatAcRuleResponse rsp = RemoveNatAcRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveNatAcRuleOutcome(rsp);
        else
            return RemoveNatAcRuleOutcome(o.GetError());
    }
    else
    {
        return RemoveNatAcRuleOutcome(outcome.GetError());
    }
}

void CfwClient::RemoveNatAcRuleAsync(const RemoveNatAcRuleRequest& request, const RemoveNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveNatAcRuleRequest&;
    using Resp = RemoveNatAcRuleResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveNatAcRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::RemoveNatAcRuleOutcomeCallable CfwClient::RemoveNatAcRuleCallable(const RemoveNatAcRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveNatAcRuleOutcome>>();
    RemoveNatAcRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const RemoveNatAcRuleRequest&,
        RemoveNatAcRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::SetNatFwDnatRuleOutcome CfwClient::SetNatFwDnatRule(const SetNatFwDnatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "SetNatFwDnatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNatFwDnatRuleResponse rsp = SetNatFwDnatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNatFwDnatRuleOutcome(rsp);
        else
            return SetNatFwDnatRuleOutcome(o.GetError());
    }
    else
    {
        return SetNatFwDnatRuleOutcome(outcome.GetError());
    }
}

void CfwClient::SetNatFwDnatRuleAsync(const SetNatFwDnatRuleRequest& request, const SetNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetNatFwDnatRuleRequest&;
    using Resp = SetNatFwDnatRuleResponse;

    DoRequestAsync<Req, Resp>(
        "SetNatFwDnatRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::SetNatFwDnatRuleOutcomeCallable CfwClient::SetNatFwDnatRuleCallable(const SetNatFwDnatRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetNatFwDnatRuleOutcome>>();
    SetNatFwDnatRuleAsync(
    request,
    [prom](
        const CfwClient*,
        const SetNatFwDnatRuleRequest&,
        SetNatFwDnatRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::SetNatFwEipOutcome CfwClient::SetNatFwEip(const SetNatFwEipRequest &request)
{
    auto outcome = MakeRequest(request, "SetNatFwEip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNatFwEipResponse rsp = SetNatFwEipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNatFwEipOutcome(rsp);
        else
            return SetNatFwEipOutcome(o.GetError());
    }
    else
    {
        return SetNatFwEipOutcome(outcome.GetError());
    }
}

void CfwClient::SetNatFwEipAsync(const SetNatFwEipRequest& request, const SetNatFwEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetNatFwEipRequest&;
    using Resp = SetNatFwEipResponse;

    DoRequestAsync<Req, Resp>(
        "SetNatFwEip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::SetNatFwEipOutcomeCallable CfwClient::SetNatFwEipCallable(const SetNatFwEipRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetNatFwEipOutcome>>();
    SetNatFwEipAsync(
    request,
    [prom](
        const CfwClient*,
        const SetNatFwEipRequest&,
        SetNatFwEipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfwClient::StopSecurityGroupRuleDispatchOutcome CfwClient::StopSecurityGroupRuleDispatch(const StopSecurityGroupRuleDispatchRequest &request)
{
    auto outcome = MakeRequest(request, "StopSecurityGroupRuleDispatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSecurityGroupRuleDispatchResponse rsp = StopSecurityGroupRuleDispatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSecurityGroupRuleDispatchOutcome(rsp);
        else
            return StopSecurityGroupRuleDispatchOutcome(o.GetError());
    }
    else
    {
        return StopSecurityGroupRuleDispatchOutcome(outcome.GetError());
    }
}

void CfwClient::StopSecurityGroupRuleDispatchAsync(const StopSecurityGroupRuleDispatchRequest& request, const StopSecurityGroupRuleDispatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopSecurityGroupRuleDispatchRequest&;
    using Resp = StopSecurityGroupRuleDispatchResponse;

    DoRequestAsync<Req, Resp>(
        "StopSecurityGroupRuleDispatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfwClient::StopSecurityGroupRuleDispatchOutcomeCallable CfwClient::StopSecurityGroupRuleDispatchCallable(const StopSecurityGroupRuleDispatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopSecurityGroupRuleDispatchOutcome>>();
    StopSecurityGroupRuleDispatchAsync(
    request,
    [prom](
        const CfwClient*,
        const StopSecurityGroupRuleDispatchRequest&,
        StopSecurityGroupRuleDispatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

