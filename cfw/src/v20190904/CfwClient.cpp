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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::AddAcRuleOutcomeCallable CfwClient::AddAcRuleCallable(const AddAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddAcRuleOutcome()>>(
        [this, request]()
        {
            return this->AddAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddEnterpriseSecurityGroupRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::AddEnterpriseSecurityGroupRulesOutcomeCallable CfwClient::AddEnterpriseSecurityGroupRulesCallable(const AddEnterpriseSecurityGroupRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddEnterpriseSecurityGroupRulesOutcome()>>(
        [this, request]()
        {
            return this->AddEnterpriseSecurityGroupRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNatAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::AddNatAcRuleOutcomeCallable CfwClient::AddNatAcRuleCallable(const AddNatAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNatAcRuleOutcome()>>(
        [this, request]()
        {
            return this->AddNatAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAcRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateAcRulesOutcomeCallable CfwClient::CreateAcRulesCallable(const CreateAcRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAcRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateAcRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNatFwInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateNatFwInstanceOutcomeCallable CfwClient::CreateNatFwInstanceCallable(const CreateNatFwInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNatFwInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateNatFwInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNatFwInstanceWithDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateNatFwInstanceWithDomainOutcomeCallable CfwClient::CreateNatFwInstanceWithDomainCallable(const CreateNatFwInstanceWithDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNatFwInstanceWithDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateNatFwInstanceWithDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityGroupRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::CreateSecurityGroupRulesOutcomeCallable CfwClient::CreateSecurityGroupRulesCallable(const CreateSecurityGroupRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityGroupRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityGroupRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteAcRuleOutcomeCallable CfwClient::DeleteAcRuleCallable(const DeleteAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAcRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAllAccessControlRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteAllAccessControlRuleOutcomeCallable CfwClient::DeleteAllAccessControlRuleCallable(const DeleteAllAccessControlRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAllAccessControlRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAllAccessControlRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResourceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteResourceGroupOutcomeCallable CfwClient::DeleteResourceGroupCallable(const DeleteResourceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteResourceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteSecurityGroupRuleOutcomeCallable CfwClient::DeleteSecurityGroupRuleCallable(const DeleteSecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpcInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DeleteVpcInstanceOutcomeCallable CfwClient::DeleteVpcInstanceCallable(const DeleteVpcInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVpcInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteVpcInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAcLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeAcListsOutcomeCallable CfwClient::DescribeAcListsCallable(const DescribeAcListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAcListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAcLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssociatedInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeAssociatedInstanceListOutcomeCallable CfwClient::DescribeAssociatedInstanceListCallable(const DescribeAssociatedInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssociatedInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssociatedInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlockByIpTimesList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeBlockByIpTimesListOutcomeCallable CfwClient::DescribeBlockByIpTimesListCallable(const DescribeBlockByIpTimesListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlockByIpTimesListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlockByIpTimesList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlockIgnoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeBlockIgnoreListOutcomeCallable CfwClient::DescribeBlockIgnoreListCallable(const DescribeBlockIgnoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlockIgnoreListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlockIgnoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlockStaticList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeBlockStaticListOutcomeCallable CfwClient::DescribeBlockStaticListCallable(const DescribeBlockStaticListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlockStaticListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlockStaticList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefenseSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeDefenseSwitchOutcomeCallable CfwClient::DescribeDefenseSwitchCallable(const DescribeDefenseSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefenseSwitchOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefenseSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnterpriseSecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::DescribeEnterpriseSecurityGroupRuleCallable(const DescribeEnterpriseSecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnterpriseSecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnterpriseSecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGuideScanInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeGuideScanInfoOutcomeCallable CfwClient::DescribeGuideScanInfoCallable(const DescribeGuideScanInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGuideScanInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeGuideScanInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIPStatusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeIPStatusListOutcomeCallable CfwClient::DescribeIPStatusListCallable(const DescribeIPStatusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIPStatusListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIPStatusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatAcRuleOutcomeCallable CfwClient::DescribeNatAcRuleCallable(const DescribeNatAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatAcRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwInfoCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwInfoCountOutcomeCallable CfwClient::DescribeNatFwInfoCountCallable(const DescribeNatFwInfoCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwInfoCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwInfoCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwInstanceOutcomeCallable CfwClient::DescribeNatFwInstanceCallable(const DescribeNatFwInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwInstanceWithRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwInstanceWithRegionOutcomeCallable CfwClient::DescribeNatFwInstanceWithRegionCallable(const DescribeNatFwInstanceWithRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwInstanceWithRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwInstanceWithRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwInstancesInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwInstancesInfoOutcomeCallable CfwClient::DescribeNatFwInstancesInfoCallable(const DescribeNatFwInstancesInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwInstancesInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwInstancesInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatFwVpcDnsLst(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeNatFwVpcDnsLstOutcomeCallable CfwClient::DescribeNatFwVpcDnsLstCallable(const DescribeNatFwVpcDnsLstRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatFwVpcDnsLstOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatFwVpcDnsLst(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceGroupNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeResourceGroupNewOutcomeCallable CfwClient::DescribeResourceGroupNewCallable(const DescribeResourceGroupNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceGroupNewOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceGroupNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeRuleOverviewOutcomeCallable CfwClient::DescribeRuleOverviewCallable(const DescribeRuleOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeSecurityGroupListOutcomeCallable CfwClient::DescribeSecurityGroupListCallable(const DescribeSecurityGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSourceAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeSourceAssetOutcomeCallable CfwClient::DescribeSourceAssetCallable(const DescribeSourceAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSourceAssetOutcome()>>(
        [this, request]()
        {
            return this->DescribeSourceAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSwitchLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeSwitchListsOutcomeCallable CfwClient::DescribeSwitchListsCallable(const DescribeSwitchListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSwitchListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSwitchLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTLogInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeTLogInfoOutcomeCallable CfwClient::DescribeTLogInfoCallable(const DescribeTLogInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTLogInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTLogInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTLogIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeTLogIpListOutcomeCallable CfwClient::DescribeTLogIpListCallable(const DescribeTLogIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTLogIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTLogIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeTableStatusOutcomeCallable CfwClient::DescribeTableStatusCallable(const DescribeTableStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnHandleEventTabList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeUnHandleEventTabListOutcomeCallable CfwClient::DescribeUnHandleEventTabListCallable(const DescribeUnHandleEventTabListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnHandleEventTabListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnHandleEventTabList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::DescribeVpcAcRuleOutcomeCallable CfwClient::DescribeVpcAcRuleCallable(const DescribeVpcAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcAcRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExpandCfwVertical(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ExpandCfwVerticalOutcomeCallable CfwClient::ExpandCfwVerticalCallable(const ExpandCfwVerticalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExpandCfwVerticalOutcome()>>(
        [this, request]()
        {
            return this->ExpandCfwVertical(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAcRuleOutcomeCallable CfwClient::ModifyAcRuleCallable(const ModifyAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAcRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAllPublicIPSwitchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAllPublicIPSwitchStatusOutcomeCallable CfwClient::ModifyAllPublicIPSwitchStatusCallable(const ModifyAllPublicIPSwitchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAllPublicIPSwitchStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAllPublicIPSwitchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAllRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAllRuleStatusOutcomeCallable CfwClient::ModifyAllRuleStatusCallable(const ModifyAllRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAllRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAllRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAllVPCSwitchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAllVPCSwitchStatusOutcomeCallable CfwClient::ModifyAllVPCSwitchStatusCallable(const ModifyAllVPCSwitchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAllVPCSwitchStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAllVPCSwitchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAssetScan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyAssetScanOutcomeCallable CfwClient::ModifyAssetScanCallable(const ModifyAssetScanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAssetScanOutcome()>>(
        [this, request]()
        {
            return this->ModifyAssetScan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBlockIgnoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyBlockIgnoreListOutcomeCallable CfwClient::ModifyBlockIgnoreListCallable(const ModifyBlockIgnoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBlockIgnoreListOutcome()>>(
        [this, request]()
        {
            return this->ModifyBlockIgnoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBlockTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyBlockTopOutcomeCallable CfwClient::ModifyBlockTopCallable(const ModifyBlockTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBlockTopOutcome()>>(
        [this, request]()
        {
            return this->ModifyBlockTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnterpriseSecurityDispatchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyEnterpriseSecurityDispatchStatusOutcomeCallable CfwClient::ModifyEnterpriseSecurityDispatchStatusCallable(const ModifyEnterpriseSecurityDispatchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnterpriseSecurityDispatchStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnterpriseSecurityDispatchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnterpriseSecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::ModifyEnterpriseSecurityGroupRuleCallable(const ModifyEnterpriseSecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnterpriseSecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnterpriseSecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatAcRuleOutcomeCallable CfwClient::ModifyNatAcRuleCallable(const ModifyNatAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatAcRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatFwReSelect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatFwReSelectOutcomeCallable CfwClient::ModifyNatFwReSelectCallable(const ModifyNatFwReSelectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatFwReSelectOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatFwReSelect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatFwSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatFwSwitchOutcomeCallable CfwClient::ModifyNatFwSwitchCallable(const ModifyNatFwSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatFwSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatFwSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatFwVpcDnsSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatFwVpcDnsSwitchOutcomeCallable CfwClient::ModifyNatFwVpcDnsSwitchCallable(const ModifyNatFwVpcDnsSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatFwVpcDnsSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatFwVpcDnsSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatSequenceRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyNatSequenceRulesOutcomeCallable CfwClient::ModifyNatSequenceRulesCallable(const ModifyNatSequenceRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatSequenceRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatSequenceRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPublicIPSwitchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyPublicIPSwitchStatusOutcomeCallable CfwClient::ModifyPublicIPSwitchStatusCallable(const ModifyPublicIPSwitchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPublicIPSwitchStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyPublicIPSwitchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyResourceGroupOutcomeCallable CfwClient::ModifyResourceGroupCallable(const ModifyResourceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRunSyncAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyRunSyncAssetOutcomeCallable CfwClient::ModifyRunSyncAssetCallable(const ModifyRunSyncAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRunSyncAssetOutcome()>>(
        [this, request]()
        {
            return this->ModifyRunSyncAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupItemRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySecurityGroupItemRuleStatusOutcomeCallable CfwClient::ModifySecurityGroupItemRuleStatusCallable(const ModifySecurityGroupItemRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupItemRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupItemRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupSequenceRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySecurityGroupSequenceRulesOutcomeCallable CfwClient::ModifySecurityGroupSequenceRulesCallable(const ModifySecurityGroupSequenceRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupSequenceRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupSequenceRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySequenceRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifySequenceRulesOutcomeCallable CfwClient::ModifySequenceRulesCallable(const ModifySequenceRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySequenceRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifySequenceRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStorageSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyStorageSettingOutcomeCallable CfwClient::ModifyStorageSettingCallable(const ModifyStorageSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStorageSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyStorageSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTableStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::ModifyTableStatusOutcomeCallable CfwClient::ModifyTableStatusCallable(const ModifyTableStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTableStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyTableStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::RemoveAcRuleOutcomeCallable CfwClient::RemoveAcRuleCallable(const RemoveAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveAcRuleOutcome()>>(
        [this, request]()
        {
            return this->RemoveAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveEnterpriseSecurityGroupRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::RemoveEnterpriseSecurityGroupRuleOutcomeCallable CfwClient::RemoveEnterpriseSecurityGroupRuleCallable(const RemoveEnterpriseSecurityGroupRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveEnterpriseSecurityGroupRuleOutcome()>>(
        [this, request]()
        {
            return this->RemoveEnterpriseSecurityGroupRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveNatAcRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::RemoveNatAcRuleOutcomeCallable CfwClient::RemoveNatAcRuleCallable(const RemoveNatAcRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveNatAcRuleOutcome()>>(
        [this, request]()
        {
            return this->RemoveNatAcRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetNatFwDnatRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::SetNatFwDnatRuleOutcomeCallable CfwClient::SetNatFwDnatRuleCallable(const SetNatFwDnatRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetNatFwDnatRuleOutcome()>>(
        [this, request]()
        {
            return this->SetNatFwDnatRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetNatFwEip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::SetNatFwEipOutcomeCallable CfwClient::SetNatFwEipCallable(const SetNatFwEipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetNatFwEipOutcome()>>(
        [this, request]()
        {
            return this->SetNatFwEip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopSecurityGroupRuleDispatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfwClient::StopSecurityGroupRuleDispatchOutcomeCallable CfwClient::StopSecurityGroupRuleDispatchCallable(const StopSecurityGroupRuleDispatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopSecurityGroupRuleDispatchOutcome()>>(
        [this, request]()
        {
            return this->StopSecurityGroupRuleDispatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

