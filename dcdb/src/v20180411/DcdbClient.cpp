/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/dcdb/v20180411/DcdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dcdb::V20180411;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-11";
    const string ENDPOINT = "dcdb.tencentcloudapi.com";
}

DcdbClient::DcdbClient(const Credential &credential, const string &region) :
    DcdbClient(credential, region, ClientProfile())
{
}

DcdbClient::DcdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DcdbClient::CloneAccountOutcome DcdbClient::CloneAccount(const CloneAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CloneAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneAccountResponse rsp = CloneAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneAccountOutcome(rsp);
        else
            return CloneAccountOutcome(o.GetError());
    }
    else
    {
        return CloneAccountOutcome(outcome.GetError());
    }
}

void DcdbClient::CloneAccountAsync(const CloneAccountRequest& request, const CloneAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloneAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::CloneAccountOutcomeCallable DcdbClient::CloneAccountCallable(const CloneAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloneAccountOutcome()>>(
        [this, request]()
        {
            return this->CloneAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::CloseDBExtranetAccessOutcome DcdbClient::CloseDBExtranetAccess(const CloseDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CloseDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseDBExtranetAccessResponse rsp = CloseDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseDBExtranetAccessOutcome(rsp);
        else
            return CloseDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return CloseDBExtranetAccessOutcome(outcome.GetError());
    }
}

void DcdbClient::CloseDBExtranetAccessAsync(const CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::CloseDBExtranetAccessOutcomeCallable DcdbClient::CloseDBExtranetAccessCallable(const CloseDBExtranetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseDBExtranetAccessOutcome()>>(
        [this, request]()
        {
            return this->CloseDBExtranetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::CopyAccountPrivilegesOutcome DcdbClient::CopyAccountPrivileges(const CopyAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "CopyAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyAccountPrivilegesResponse rsp = CopyAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyAccountPrivilegesOutcome(rsp);
        else
            return CopyAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return CopyAccountPrivilegesOutcome(outcome.GetError());
    }
}

void DcdbClient::CopyAccountPrivilegesAsync(const CopyAccountPrivilegesRequest& request, const CopyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::CopyAccountPrivilegesOutcomeCallable DcdbClient::CopyAccountPrivilegesCallable(const CopyAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->CopyAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::CreateAccountOutcome DcdbClient::CreateAccount(const CreateAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountResponse rsp = CreateAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountOutcome(rsp);
        else
            return CreateAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAccountOutcome(outcome.GetError());
    }
}

void DcdbClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::CreateAccountOutcomeCallable DcdbClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DeleteAccountOutcome DcdbClient::DeleteAccount(const DeleteAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountResponse rsp = DeleteAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountOutcome(rsp);
        else
            return DeleteAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountOutcome(outcome.GetError());
    }
}

void DcdbClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DeleteAccountOutcomeCallable DcdbClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeAccountPrivilegesOutcome DcdbClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountPrivilegesResponse rsp = DescribeAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountPrivilegesOutcome(rsp);
        else
            return DescribeAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountPrivilegesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeAccountPrivilegesOutcomeCallable DcdbClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeAccountsOutcome DcdbClient::DescribeAccounts(const DescribeAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountsResponse rsp = DescribeAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountsOutcome(rsp);
        else
            return DescribeAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeAccountsOutcomeCallable DcdbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDBLogFilesOutcome DcdbClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBLogFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBLogFilesResponse rsp = DescribeDBLogFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBLogFilesOutcome(rsp);
        else
            return DescribeDBLogFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBLogFilesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBLogFilesAsync(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBLogFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDBLogFilesOutcomeCallable DcdbClient::DescribeDBLogFilesCallable(const DescribeDBLogFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBLogFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBLogFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDBParametersOutcome DcdbClient::DescribeDBParameters(const DescribeDBParametersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBParametersResponse rsp = DescribeDBParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBParametersOutcome(rsp);
        else
            return DescribeDBParametersOutcome(o.GetError());
    }
    else
    {
        return DescribeDBParametersOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDBParametersOutcomeCallable DcdbClient::DescribeDBParametersCallable(const DescribeDBParametersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBParametersOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBParameters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDBSyncModeOutcome DcdbClient::DescribeDBSyncMode(const DescribeDBSyncModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSyncMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSyncModeResponse rsp = DescribeDBSyncModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSyncModeOutcome(rsp);
        else
            return DescribeDBSyncModeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSyncModeOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDBSyncModeAsync(const DescribeDBSyncModeRequest& request, const DescribeDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSyncMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDBSyncModeOutcomeCallable DcdbClient::DescribeDBSyncModeCallable(const DescribeDBSyncModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSyncModeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSyncMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDCDBInstancesOutcome DcdbClient::DescribeDCDBInstances(const DescribeDCDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBInstancesResponse rsp = DescribeDCDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBInstancesOutcome(rsp);
        else
            return DescribeDCDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBInstancesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBInstancesAsync(const DescribeDCDBInstancesRequest& request, const DescribeDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDCDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDCDBInstancesOutcomeCallable DcdbClient::DescribeDCDBInstancesCallable(const DescribeDCDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDCDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDCDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDCDBShardsOutcome DcdbClient::DescribeDCDBShards(const DescribeDCDBShardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDCDBShards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDCDBShardsResponse rsp = DescribeDCDBShardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDCDBShardsOutcome(rsp);
        else
            return DescribeDCDBShardsOutcome(o.GetError());
    }
    else
    {
        return DescribeDCDBShardsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDCDBShardsAsync(const DescribeDCDBShardsRequest& request, const DescribeDCDBShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDCDBShards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDCDBShardsOutcomeCallable DcdbClient::DescribeDCDBShardsCallable(const DescribeDCDBShardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDCDBShardsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDCDBShards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDatabaseObjectsOutcome DcdbClient::DescribeDatabaseObjects(const DescribeDatabaseObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseObjectsResponse rsp = DescribeDatabaseObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseObjectsOutcome(rsp);
        else
            return DescribeDatabaseObjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseObjectsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDatabaseObjectsAsync(const DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDatabaseObjectsOutcomeCallable DcdbClient::DescribeDatabaseObjectsCallable(const DescribeDatabaseObjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseObjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseObjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDatabaseTableOutcome DcdbClient::DescribeDatabaseTable(const DescribeDatabaseTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseTableResponse rsp = DescribeDatabaseTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseTableOutcome(rsp);
        else
            return DescribeDatabaseTableOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseTableOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDatabaseTableAsync(const DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDatabaseTableOutcomeCallable DcdbClient::DescribeDatabaseTableCallable(const DescribeDatabaseTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseTableOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeDatabasesOutcome DcdbClient::DescribeDatabases(const DescribeDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabasesResponse rsp = DescribeDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabasesOutcome(rsp);
        else
            return DescribeDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabasesOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeDatabasesOutcomeCallable DcdbClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::DescribeProjectsOutcome DcdbClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void DcdbClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::DescribeProjectsOutcomeCallable DcdbClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::GrantAccountPrivilegesOutcome DcdbClient::GrantAccountPrivileges(const GrantAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "GrantAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantAccountPrivilegesResponse rsp = GrantAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantAccountPrivilegesOutcome(rsp);
        else
            return GrantAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return GrantAccountPrivilegesOutcome(outcome.GetError());
    }
}

void DcdbClient::GrantAccountPrivilegesAsync(const GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GrantAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::GrantAccountPrivilegesOutcomeCallable DcdbClient::GrantAccountPrivilegesCallable(const GrantAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GrantAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->GrantAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::InitDCDBInstancesOutcome DcdbClient::InitDCDBInstances(const InitDCDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InitDCDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitDCDBInstancesResponse rsp = InitDCDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitDCDBInstancesOutcome(rsp);
        else
            return InitDCDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InitDCDBInstancesOutcome(outcome.GetError());
    }
}

void DcdbClient::InitDCDBInstancesAsync(const InitDCDBInstancesRequest& request, const InitDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InitDCDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::InitDCDBInstancesOutcomeCallable DcdbClient::InitDCDBInstancesCallable(const InitDCDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InitDCDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->InitDCDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::ModifyAccountDescriptionOutcome DcdbClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountDescriptionResponse rsp = ModifyAccountDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountDescriptionOutcome(rsp);
        else
            return ModifyAccountDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountDescriptionOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ModifyAccountDescriptionOutcomeCallable DcdbClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountDescription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::ModifyDBInstancesProjectOutcome DcdbClient::ModifyDBInstancesProject(const ModifyDBInstancesProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstancesProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstancesProjectResponse rsp = ModifyDBInstancesProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstancesProjectOutcome(rsp);
        else
            return ModifyDBInstancesProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstancesProjectOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBInstancesProjectAsync(const ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstancesProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ModifyDBInstancesProjectOutcomeCallable DcdbClient::ModifyDBInstancesProjectCallable(const ModifyDBInstancesProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstancesProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstancesProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::ModifyDBParametersOutcome DcdbClient::ModifyDBParameters(const ModifyDBParametersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBParametersResponse rsp = ModifyDBParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBParametersOutcome(rsp);
        else
            return ModifyDBParametersOutcome(o.GetError());
    }
    else
    {
        return ModifyDBParametersOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBParametersAsync(const ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ModifyDBParametersOutcomeCallable DcdbClient::ModifyDBParametersCallable(const ModifyDBParametersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBParametersOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBParameters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::ModifyDBSyncModeOutcome DcdbClient::ModifyDBSyncMode(const ModifyDBSyncModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBSyncMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBSyncModeResponse rsp = ModifyDBSyncModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBSyncModeOutcome(rsp);
        else
            return ModifyDBSyncModeOutcome(o.GetError());
    }
    else
    {
        return ModifyDBSyncModeOutcome(outcome.GetError());
    }
}

void DcdbClient::ModifyDBSyncModeAsync(const ModifyDBSyncModeRequest& request, const ModifyDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBSyncMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ModifyDBSyncModeOutcomeCallable DcdbClient::ModifyDBSyncModeCallable(const ModifyDBSyncModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBSyncModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBSyncMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::OpenDBExtranetAccessOutcome DcdbClient::OpenDBExtranetAccess(const OpenDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBExtranetAccessResponse rsp = OpenDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBExtranetAccessOutcome(rsp);
        else
            return OpenDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return OpenDBExtranetAccessOutcome(outcome.GetError());
    }
}

void DcdbClient::OpenDBExtranetAccessAsync(const OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::OpenDBExtranetAccessOutcomeCallable DcdbClient::OpenDBExtranetAccessCallable(const OpenDBExtranetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenDBExtranetAccessOutcome()>>(
        [this, request]()
        {
            return this->OpenDBExtranetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcdbClient::ResetAccountPasswordOutcome DcdbClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAccountPasswordResponse rsp = ResetAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAccountPasswordOutcome(rsp);
        else
            return ResetAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetAccountPasswordOutcome(outcome.GetError());
    }
}

void DcdbClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcdbClient::ResetAccountPasswordOutcomeCallable DcdbClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetAccountPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

