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

#include <tencentcloud/cfs/v20190719/CfsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cfs::V20190719;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-19";
    const string ENDPOINT = "cfs.intl.tencentcloudapi.com";
}

CfsClient::CfsClient(const Credential &credential, const string &region) :
    CfsClient(credential, region, ClientProfile())
{
}

CfsClient::CfsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CfsClient::BindAutoSnapshotPolicyOutcome CfsClient::BindAutoSnapshotPolicy(const BindAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "BindAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAutoSnapshotPolicyResponse rsp = BindAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAutoSnapshotPolicyOutcome(rsp);
        else
            return BindAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return BindAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::BindAutoSnapshotPolicyAsync(const BindAutoSnapshotPolicyRequest& request, const BindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindAutoSnapshotPolicyRequest&;
    using Resp = BindAutoSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "BindAutoSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::BindAutoSnapshotPolicyOutcomeCallable CfsClient::BindAutoSnapshotPolicyCallable(const BindAutoSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindAutoSnapshotPolicyOutcome>>();
    BindAutoSnapshotPolicyAsync(
    request,
    [prom](
        const CfsClient*,
        const BindAutoSnapshotPolicyRequest&,
        BindAutoSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::CreateAutoSnapshotPolicyOutcome CfsClient::CreateAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoSnapshotPolicyResponse rsp = CreateAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoSnapshotPolicyOutcome(rsp);
        else
            return CreateAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::CreateAutoSnapshotPolicyAsync(const CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAutoSnapshotPolicyRequest&;
    using Resp = CreateAutoSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::CreateAutoSnapshotPolicyOutcomeCallable CfsClient::CreateAutoSnapshotPolicyCallable(const CreateAutoSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoSnapshotPolicyOutcome>>();
    CreateAutoSnapshotPolicyAsync(
    request,
    [prom](
        const CfsClient*,
        const CreateAutoSnapshotPolicyRequest&,
        CreateAutoSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::CreateCfsFileSystemOutcome CfsClient::CreateCfsFileSystem(const CreateCfsFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCfsFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCfsFileSystemResponse rsp = CreateCfsFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCfsFileSystemOutcome(rsp);
        else
            return CreateCfsFileSystemOutcome(o.GetError());
    }
    else
    {
        return CreateCfsFileSystemOutcome(outcome.GetError());
    }
}

void CfsClient::CreateCfsFileSystemAsync(const CreateCfsFileSystemRequest& request, const CreateCfsFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCfsFileSystemRequest&;
    using Resp = CreateCfsFileSystemResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCfsFileSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::CreateCfsFileSystemOutcomeCallable CfsClient::CreateCfsFileSystemCallable(const CreateCfsFileSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCfsFileSystemOutcome>>();
    CreateCfsFileSystemAsync(
    request,
    [prom](
        const CfsClient*,
        const CreateCfsFileSystemRequest&,
        CreateCfsFileSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::CreateCfsPGroupOutcome CfsClient::CreateCfsPGroup(const CreateCfsPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCfsPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCfsPGroupResponse rsp = CreateCfsPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCfsPGroupOutcome(rsp);
        else
            return CreateCfsPGroupOutcome(o.GetError());
    }
    else
    {
        return CreateCfsPGroupOutcome(outcome.GetError());
    }
}

void CfsClient::CreateCfsPGroupAsync(const CreateCfsPGroupRequest& request, const CreateCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCfsPGroupRequest&;
    using Resp = CreateCfsPGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCfsPGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::CreateCfsPGroupOutcomeCallable CfsClient::CreateCfsPGroupCallable(const CreateCfsPGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCfsPGroupOutcome>>();
    CreateCfsPGroupAsync(
    request,
    [prom](
        const CfsClient*,
        const CreateCfsPGroupRequest&,
        CreateCfsPGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::CreateCfsRuleOutcome CfsClient::CreateCfsRule(const CreateCfsRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCfsRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCfsRuleResponse rsp = CreateCfsRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCfsRuleOutcome(rsp);
        else
            return CreateCfsRuleOutcome(o.GetError());
    }
    else
    {
        return CreateCfsRuleOutcome(outcome.GetError());
    }
}

void CfsClient::CreateCfsRuleAsync(const CreateCfsRuleRequest& request, const CreateCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCfsRuleRequest&;
    using Resp = CreateCfsRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCfsRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::CreateCfsRuleOutcomeCallable CfsClient::CreateCfsRuleCallable(const CreateCfsRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCfsRuleOutcome>>();
    CreateCfsRuleAsync(
    request,
    [prom](
        const CfsClient*,
        const CreateCfsRuleRequest&,
        CreateCfsRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::CreateCfsSnapshotOutcome CfsClient::CreateCfsSnapshot(const CreateCfsSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCfsSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCfsSnapshotResponse rsp = CreateCfsSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCfsSnapshotOutcome(rsp);
        else
            return CreateCfsSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateCfsSnapshotOutcome(outcome.GetError());
    }
}

void CfsClient::CreateCfsSnapshotAsync(const CreateCfsSnapshotRequest& request, const CreateCfsSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCfsSnapshotRequest&;
    using Resp = CreateCfsSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCfsSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::CreateCfsSnapshotOutcomeCallable CfsClient::CreateCfsSnapshotCallable(const CreateCfsSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCfsSnapshotOutcome>>();
    CreateCfsSnapshotAsync(
    request,
    [prom](
        const CfsClient*,
        const CreateCfsSnapshotRequest&,
        CreateCfsSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::CreateMigrationTaskOutcome CfsClient::CreateMigrationTask(const CreateMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrationTaskResponse rsp = CreateMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrationTaskOutcome(rsp);
        else
            return CreateMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateMigrationTaskOutcome(outcome.GetError());
    }
}

void CfsClient::CreateMigrationTaskAsync(const CreateMigrationTaskRequest& request, const CreateMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMigrationTaskRequest&;
    using Resp = CreateMigrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMigrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::CreateMigrationTaskOutcomeCallable CfsClient::CreateMigrationTaskCallable(const CreateMigrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMigrationTaskOutcome>>();
    CreateMigrationTaskAsync(
    request,
    [prom](
        const CfsClient*,
        const CreateMigrationTaskRequest&,
        CreateMigrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DeleteAutoSnapshotPolicyOutcome CfsClient::DeleteAutoSnapshotPolicy(const DeleteAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoSnapshotPolicyResponse rsp = DeleteAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoSnapshotPolicyOutcome(rsp);
        else
            return DeleteAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteAutoSnapshotPolicyAsync(const DeleteAutoSnapshotPolicyRequest& request, const DeleteAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAutoSnapshotPolicyRequest&;
    using Resp = DeleteAutoSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAutoSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DeleteAutoSnapshotPolicyOutcomeCallable CfsClient::DeleteAutoSnapshotPolicyCallable(const DeleteAutoSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAutoSnapshotPolicyOutcome>>();
    DeleteAutoSnapshotPolicyAsync(
    request,
    [prom](
        const CfsClient*,
        const DeleteAutoSnapshotPolicyRequest&,
        DeleteAutoSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DeleteCfsFileSystemOutcome CfsClient::DeleteCfsFileSystem(const DeleteCfsFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCfsFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCfsFileSystemResponse rsp = DeleteCfsFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCfsFileSystemOutcome(rsp);
        else
            return DeleteCfsFileSystemOutcome(o.GetError());
    }
    else
    {
        return DeleteCfsFileSystemOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteCfsFileSystemAsync(const DeleteCfsFileSystemRequest& request, const DeleteCfsFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCfsFileSystemRequest&;
    using Resp = DeleteCfsFileSystemResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCfsFileSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DeleteCfsFileSystemOutcomeCallable CfsClient::DeleteCfsFileSystemCallable(const DeleteCfsFileSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCfsFileSystemOutcome>>();
    DeleteCfsFileSystemAsync(
    request,
    [prom](
        const CfsClient*,
        const DeleteCfsFileSystemRequest&,
        DeleteCfsFileSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DeleteCfsPGroupOutcome CfsClient::DeleteCfsPGroup(const DeleteCfsPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCfsPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCfsPGroupResponse rsp = DeleteCfsPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCfsPGroupOutcome(rsp);
        else
            return DeleteCfsPGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteCfsPGroupOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteCfsPGroupAsync(const DeleteCfsPGroupRequest& request, const DeleteCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCfsPGroupRequest&;
    using Resp = DeleteCfsPGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCfsPGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DeleteCfsPGroupOutcomeCallable CfsClient::DeleteCfsPGroupCallable(const DeleteCfsPGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCfsPGroupOutcome>>();
    DeleteCfsPGroupAsync(
    request,
    [prom](
        const CfsClient*,
        const DeleteCfsPGroupRequest&,
        DeleteCfsPGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DeleteCfsRuleOutcome CfsClient::DeleteCfsRule(const DeleteCfsRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCfsRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCfsRuleResponse rsp = DeleteCfsRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCfsRuleOutcome(rsp);
        else
            return DeleteCfsRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCfsRuleOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteCfsRuleAsync(const DeleteCfsRuleRequest& request, const DeleteCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCfsRuleRequest&;
    using Resp = DeleteCfsRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCfsRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DeleteCfsRuleOutcomeCallable CfsClient::DeleteCfsRuleCallable(const DeleteCfsRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCfsRuleOutcome>>();
    DeleteCfsRuleAsync(
    request,
    [prom](
        const CfsClient*,
        const DeleteCfsRuleRequest&,
        DeleteCfsRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DeleteCfsSnapshotOutcome CfsClient::DeleteCfsSnapshot(const DeleteCfsSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCfsSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCfsSnapshotResponse rsp = DeleteCfsSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCfsSnapshotOutcome(rsp);
        else
            return DeleteCfsSnapshotOutcome(o.GetError());
    }
    else
    {
        return DeleteCfsSnapshotOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteCfsSnapshotAsync(const DeleteCfsSnapshotRequest& request, const DeleteCfsSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCfsSnapshotRequest&;
    using Resp = DeleteCfsSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCfsSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DeleteCfsSnapshotOutcomeCallable CfsClient::DeleteCfsSnapshotCallable(const DeleteCfsSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCfsSnapshotOutcome>>();
    DeleteCfsSnapshotAsync(
    request,
    [prom](
        const CfsClient*,
        const DeleteCfsSnapshotRequest&,
        DeleteCfsSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DeleteMigrationTaskOutcome CfsClient::DeleteMigrationTask(const DeleteMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMigrationTaskResponse rsp = DeleteMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMigrationTaskOutcome(rsp);
        else
            return DeleteMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteMigrationTaskOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteMigrationTaskAsync(const DeleteMigrationTaskRequest& request, const DeleteMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMigrationTaskRequest&;
    using Resp = DeleteMigrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMigrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DeleteMigrationTaskOutcomeCallable CfsClient::DeleteMigrationTaskCallable(const DeleteMigrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMigrationTaskOutcome>>();
    DeleteMigrationTaskAsync(
    request,
    [prom](
        const CfsClient*,
        const DeleteMigrationTaskRequest&,
        DeleteMigrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DeleteMountTargetOutcome CfsClient::DeleteMountTarget(const DeleteMountTargetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMountTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMountTargetResponse rsp = DeleteMountTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMountTargetOutcome(rsp);
        else
            return DeleteMountTargetOutcome(o.GetError());
    }
    else
    {
        return DeleteMountTargetOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteMountTargetAsync(const DeleteMountTargetRequest& request, const DeleteMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMountTargetRequest&;
    using Resp = DeleteMountTargetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMountTarget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DeleteMountTargetOutcomeCallable CfsClient::DeleteMountTargetCallable(const DeleteMountTargetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMountTargetOutcome>>();
    DeleteMountTargetAsync(
    request,
    [prom](
        const CfsClient*,
        const DeleteMountTargetRequest&,
        DeleteMountTargetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeAutoSnapshotPoliciesOutcome CfsClient::DescribeAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoSnapshotPoliciesResponse rsp = DescribeAutoSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoSnapshotPoliciesOutcome(rsp);
        else
            return DescribeAutoSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeAutoSnapshotPoliciesAsync(const DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoSnapshotPoliciesRequest&;
    using Resp = DescribeAutoSnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoSnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeAutoSnapshotPoliciesOutcomeCallable CfsClient::DescribeAutoSnapshotPoliciesCallable(const DescribeAutoSnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoSnapshotPoliciesOutcome>>();
    DescribeAutoSnapshotPoliciesAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeAutoSnapshotPoliciesRequest&,
        DescribeAutoSnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeAvailableZoneInfoOutcome CfsClient::DescribeAvailableZoneInfo(const DescribeAvailableZoneInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableZoneInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableZoneInfoResponse rsp = DescribeAvailableZoneInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableZoneInfoOutcome(rsp);
        else
            return DescribeAvailableZoneInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableZoneInfoOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeAvailableZoneInfoAsync(const DescribeAvailableZoneInfoRequest& request, const DescribeAvailableZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAvailableZoneInfoRequest&;
    using Resp = DescribeAvailableZoneInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAvailableZoneInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeAvailableZoneInfoOutcomeCallable CfsClient::DescribeAvailableZoneInfoCallable(const DescribeAvailableZoneInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAvailableZoneInfoOutcome>>();
    DescribeAvailableZoneInfoAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeAvailableZoneInfoRequest&,
        DescribeAvailableZoneInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeBucketListOutcome CfsClient::DescribeBucketList(const DescribeBucketListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBucketList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBucketListResponse rsp = DescribeBucketListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBucketListOutcome(rsp);
        else
            return DescribeBucketListOutcome(o.GetError());
    }
    else
    {
        return DescribeBucketListOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeBucketListAsync(const DescribeBucketListRequest& request, const DescribeBucketListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBucketListRequest&;
    using Resp = DescribeBucketListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBucketList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeBucketListOutcomeCallable CfsClient::DescribeBucketListCallable(const DescribeBucketListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBucketListOutcome>>();
    DescribeBucketListAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeBucketListRequest&,
        DescribeBucketListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeCfsFileSystemClientsOutcome CfsClient::DescribeCfsFileSystemClients(const DescribeCfsFileSystemClientsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsFileSystemClients");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsFileSystemClientsResponse rsp = DescribeCfsFileSystemClientsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsFileSystemClientsOutcome(rsp);
        else
            return DescribeCfsFileSystemClientsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsFileSystemClientsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsFileSystemClientsAsync(const DescribeCfsFileSystemClientsRequest& request, const DescribeCfsFileSystemClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCfsFileSystemClientsRequest&;
    using Resp = DescribeCfsFileSystemClientsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCfsFileSystemClients", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeCfsFileSystemClientsOutcomeCallable CfsClient::DescribeCfsFileSystemClientsCallable(const DescribeCfsFileSystemClientsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCfsFileSystemClientsOutcome>>();
    DescribeCfsFileSystemClientsAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeCfsFileSystemClientsRequest&,
        DescribeCfsFileSystemClientsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeCfsFileSystemsOutcome CfsClient::DescribeCfsFileSystems(const DescribeCfsFileSystemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsFileSystems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsFileSystemsResponse rsp = DescribeCfsFileSystemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsFileSystemsOutcome(rsp);
        else
            return DescribeCfsFileSystemsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsFileSystemsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsFileSystemsAsync(const DescribeCfsFileSystemsRequest& request, const DescribeCfsFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCfsFileSystemsRequest&;
    using Resp = DescribeCfsFileSystemsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCfsFileSystems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeCfsFileSystemsOutcomeCallable CfsClient::DescribeCfsFileSystemsCallable(const DescribeCfsFileSystemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCfsFileSystemsOutcome>>();
    DescribeCfsFileSystemsAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeCfsFileSystemsRequest&,
        DescribeCfsFileSystemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeCfsPGroupsOutcome CfsClient::DescribeCfsPGroups(const DescribeCfsPGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsPGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsPGroupsResponse rsp = DescribeCfsPGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsPGroupsOutcome(rsp);
        else
            return DescribeCfsPGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsPGroupsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsPGroupsAsync(const DescribeCfsPGroupsRequest& request, const DescribeCfsPGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCfsPGroupsRequest&;
    using Resp = DescribeCfsPGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCfsPGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeCfsPGroupsOutcomeCallable CfsClient::DescribeCfsPGroupsCallable(const DescribeCfsPGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCfsPGroupsOutcome>>();
    DescribeCfsPGroupsAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeCfsPGroupsRequest&,
        DescribeCfsPGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeCfsRulesOutcome CfsClient::DescribeCfsRules(const DescribeCfsRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsRulesResponse rsp = DescribeCfsRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsRulesOutcome(rsp);
        else
            return DescribeCfsRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsRulesOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsRulesAsync(const DescribeCfsRulesRequest& request, const DescribeCfsRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCfsRulesRequest&;
    using Resp = DescribeCfsRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCfsRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeCfsRulesOutcomeCallable CfsClient::DescribeCfsRulesCallable(const DescribeCfsRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCfsRulesOutcome>>();
    DescribeCfsRulesAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeCfsRulesRequest&,
        DescribeCfsRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeCfsServiceStatusOutcome CfsClient::DescribeCfsServiceStatus(const DescribeCfsServiceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsServiceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsServiceStatusResponse rsp = DescribeCfsServiceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsServiceStatusOutcome(rsp);
        else
            return DescribeCfsServiceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsServiceStatusOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsServiceStatusAsync(const DescribeCfsServiceStatusRequest& request, const DescribeCfsServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCfsServiceStatusRequest&;
    using Resp = DescribeCfsServiceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCfsServiceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeCfsServiceStatusOutcomeCallable CfsClient::DescribeCfsServiceStatusCallable(const DescribeCfsServiceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCfsServiceStatusOutcome>>();
    DescribeCfsServiceStatusAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeCfsServiceStatusRequest&,
        DescribeCfsServiceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeCfsSnapshotOverviewOutcome CfsClient::DescribeCfsSnapshotOverview(const DescribeCfsSnapshotOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsSnapshotOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsSnapshotOverviewResponse rsp = DescribeCfsSnapshotOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsSnapshotOverviewOutcome(rsp);
        else
            return DescribeCfsSnapshotOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsSnapshotOverviewOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsSnapshotOverviewAsync(const DescribeCfsSnapshotOverviewRequest& request, const DescribeCfsSnapshotOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCfsSnapshotOverviewRequest&;
    using Resp = DescribeCfsSnapshotOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCfsSnapshotOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeCfsSnapshotOverviewOutcomeCallable CfsClient::DescribeCfsSnapshotOverviewCallable(const DescribeCfsSnapshotOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCfsSnapshotOverviewOutcome>>();
    DescribeCfsSnapshotOverviewAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeCfsSnapshotOverviewRequest&,
        DescribeCfsSnapshotOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeCfsSnapshotsOutcome CfsClient::DescribeCfsSnapshots(const DescribeCfsSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsSnapshotsResponse rsp = DescribeCfsSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsSnapshotsOutcome(rsp);
        else
            return DescribeCfsSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsSnapshotsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsSnapshotsAsync(const DescribeCfsSnapshotsRequest& request, const DescribeCfsSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCfsSnapshotsRequest&;
    using Resp = DescribeCfsSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCfsSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeCfsSnapshotsOutcomeCallable CfsClient::DescribeCfsSnapshotsCallable(const DescribeCfsSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCfsSnapshotsOutcome>>();
    DescribeCfsSnapshotsAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeCfsSnapshotsRequest&,
        DescribeCfsSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeMigrationTasksOutcome CfsClient::DescribeMigrationTasks(const DescribeMigrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationTasksResponse rsp = DescribeMigrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationTasksOutcome(rsp);
        else
            return DescribeMigrationTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationTasksOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeMigrationTasksAsync(const DescribeMigrationTasksRequest& request, const DescribeMigrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrationTasksRequest&;
    using Resp = DescribeMigrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeMigrationTasksOutcomeCallable CfsClient::DescribeMigrationTasksCallable(const DescribeMigrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrationTasksOutcome>>();
    DescribeMigrationTasksAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeMigrationTasksRequest&,
        DescribeMigrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeMountTargetsOutcome CfsClient::DescribeMountTargets(const DescribeMountTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMountTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMountTargetsResponse rsp = DescribeMountTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMountTargetsOutcome(rsp);
        else
            return DescribeMountTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeMountTargetsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeMountTargetsAsync(const DescribeMountTargetsRequest& request, const DescribeMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMountTargetsRequest&;
    using Resp = DescribeMountTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMountTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeMountTargetsOutcomeCallable CfsClient::DescribeMountTargetsCallable(const DescribeMountTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMountTargetsOutcome>>();
    DescribeMountTargetsAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeMountTargetsRequest&,
        DescribeMountTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::DescribeSnapshotOperationLogsOutcome CfsClient::DescribeSnapshotOperationLogs(const DescribeSnapshotOperationLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotOperationLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotOperationLogsResponse rsp = DescribeSnapshotOperationLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotOperationLogsOutcome(rsp);
        else
            return DescribeSnapshotOperationLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotOperationLogsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeSnapshotOperationLogsAsync(const DescribeSnapshotOperationLogsRequest& request, const DescribeSnapshotOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotOperationLogsRequest&;
    using Resp = DescribeSnapshotOperationLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotOperationLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::DescribeSnapshotOperationLogsOutcomeCallable CfsClient::DescribeSnapshotOperationLogsCallable(const DescribeSnapshotOperationLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotOperationLogsOutcome>>();
    DescribeSnapshotOperationLogsAsync(
    request,
    [prom](
        const CfsClient*,
        const DescribeSnapshotOperationLogsRequest&,
        DescribeSnapshotOperationLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::ModifyFileSystemAutoScaleUpRuleOutcome CfsClient::ModifyFileSystemAutoScaleUpRule(const ModifyFileSystemAutoScaleUpRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileSystemAutoScaleUpRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileSystemAutoScaleUpRuleResponse rsp = ModifyFileSystemAutoScaleUpRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileSystemAutoScaleUpRuleOutcome(rsp);
        else
            return ModifyFileSystemAutoScaleUpRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyFileSystemAutoScaleUpRuleOutcome(outcome.GetError());
    }
}

void CfsClient::ModifyFileSystemAutoScaleUpRuleAsync(const ModifyFileSystemAutoScaleUpRuleRequest& request, const ModifyFileSystemAutoScaleUpRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFileSystemAutoScaleUpRuleRequest&;
    using Resp = ModifyFileSystemAutoScaleUpRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFileSystemAutoScaleUpRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::ModifyFileSystemAutoScaleUpRuleOutcomeCallable CfsClient::ModifyFileSystemAutoScaleUpRuleCallable(const ModifyFileSystemAutoScaleUpRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFileSystemAutoScaleUpRuleOutcome>>();
    ModifyFileSystemAutoScaleUpRuleAsync(
    request,
    [prom](
        const CfsClient*,
        const ModifyFileSystemAutoScaleUpRuleRequest&,
        ModifyFileSystemAutoScaleUpRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::ScaleUpFileSystemOutcome CfsClient::ScaleUpFileSystem(const ScaleUpFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleUpFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleUpFileSystemResponse rsp = ScaleUpFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleUpFileSystemOutcome(rsp);
        else
            return ScaleUpFileSystemOutcome(o.GetError());
    }
    else
    {
        return ScaleUpFileSystemOutcome(outcome.GetError());
    }
}

void CfsClient::ScaleUpFileSystemAsync(const ScaleUpFileSystemRequest& request, const ScaleUpFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScaleUpFileSystemRequest&;
    using Resp = ScaleUpFileSystemResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleUpFileSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::ScaleUpFileSystemOutcomeCallable CfsClient::ScaleUpFileSystemCallable(const ScaleUpFileSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleUpFileSystemOutcome>>();
    ScaleUpFileSystemAsync(
    request,
    [prom](
        const CfsClient*,
        const ScaleUpFileSystemRequest&,
        ScaleUpFileSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::SignUpCfsServiceOutcome CfsClient::SignUpCfsService(const SignUpCfsServiceRequest &request)
{
    auto outcome = MakeRequest(request, "SignUpCfsService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SignUpCfsServiceResponse rsp = SignUpCfsServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SignUpCfsServiceOutcome(rsp);
        else
            return SignUpCfsServiceOutcome(o.GetError());
    }
    else
    {
        return SignUpCfsServiceOutcome(outcome.GetError());
    }
}

void CfsClient::SignUpCfsServiceAsync(const SignUpCfsServiceRequest& request, const SignUpCfsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SignUpCfsServiceRequest&;
    using Resp = SignUpCfsServiceResponse;

    DoRequestAsync<Req, Resp>(
        "SignUpCfsService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::SignUpCfsServiceOutcomeCallable CfsClient::SignUpCfsServiceCallable(const SignUpCfsServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<SignUpCfsServiceOutcome>>();
    SignUpCfsServiceAsync(
    request,
    [prom](
        const CfsClient*,
        const SignUpCfsServiceRequest&,
        SignUpCfsServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::StopMigrationTaskOutcome CfsClient::StopMigrationTask(const StopMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMigrationTaskResponse rsp = StopMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMigrationTaskOutcome(rsp);
        else
            return StopMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return StopMigrationTaskOutcome(outcome.GetError());
    }
}

void CfsClient::StopMigrationTaskAsync(const StopMigrationTaskRequest& request, const StopMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMigrationTaskRequest&;
    using Resp = StopMigrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopMigrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::StopMigrationTaskOutcomeCallable CfsClient::StopMigrationTaskCallable(const StopMigrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMigrationTaskOutcome>>();
    StopMigrationTaskAsync(
    request,
    [prom](
        const CfsClient*,
        const StopMigrationTaskRequest&,
        StopMigrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::UnbindAutoSnapshotPolicyOutcome CfsClient::UnbindAutoSnapshotPolicy(const UnbindAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindAutoSnapshotPolicyResponse rsp = UnbindAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindAutoSnapshotPolicyOutcome(rsp);
        else
            return UnbindAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return UnbindAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::UnbindAutoSnapshotPolicyAsync(const UnbindAutoSnapshotPolicyRequest& request, const UnbindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindAutoSnapshotPolicyRequest&;
    using Resp = UnbindAutoSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindAutoSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::UnbindAutoSnapshotPolicyOutcomeCallable CfsClient::UnbindAutoSnapshotPolicyCallable(const UnbindAutoSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindAutoSnapshotPolicyOutcome>>();
    UnbindAutoSnapshotPolicyAsync(
    request,
    [prom](
        const CfsClient*,
        const UnbindAutoSnapshotPolicyRequest&,
        UnbindAutoSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::UpdateAutoSnapshotPolicyOutcome CfsClient::UpdateAutoSnapshotPolicy(const UpdateAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAutoSnapshotPolicyResponse rsp = UpdateAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAutoSnapshotPolicyOutcome(rsp);
        else
            return UpdateAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return UpdateAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateAutoSnapshotPolicyAsync(const UpdateAutoSnapshotPolicyRequest& request, const UpdateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAutoSnapshotPolicyRequest&;
    using Resp = UpdateAutoSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAutoSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::UpdateAutoSnapshotPolicyOutcomeCallable CfsClient::UpdateAutoSnapshotPolicyCallable(const UpdateAutoSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAutoSnapshotPolicyOutcome>>();
    UpdateAutoSnapshotPolicyAsync(
    request,
    [prom](
        const CfsClient*,
        const UpdateAutoSnapshotPolicyRequest&,
        UpdateAutoSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::UpdateCfsFileSystemNameOutcome CfsClient::UpdateCfsFileSystemName(const UpdateCfsFileSystemNameRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsFileSystemName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsFileSystemNameResponse rsp = UpdateCfsFileSystemNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsFileSystemNameOutcome(rsp);
        else
            return UpdateCfsFileSystemNameOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsFileSystemNameOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsFileSystemNameAsync(const UpdateCfsFileSystemNameRequest& request, const UpdateCfsFileSystemNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCfsFileSystemNameRequest&;
    using Resp = UpdateCfsFileSystemNameResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCfsFileSystemName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::UpdateCfsFileSystemNameOutcomeCallable CfsClient::UpdateCfsFileSystemNameCallable(const UpdateCfsFileSystemNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCfsFileSystemNameOutcome>>();
    UpdateCfsFileSystemNameAsync(
    request,
    [prom](
        const CfsClient*,
        const UpdateCfsFileSystemNameRequest&,
        UpdateCfsFileSystemNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::UpdateCfsFileSystemPGroupOutcome CfsClient::UpdateCfsFileSystemPGroup(const UpdateCfsFileSystemPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsFileSystemPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsFileSystemPGroupResponse rsp = UpdateCfsFileSystemPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsFileSystemPGroupOutcome(rsp);
        else
            return UpdateCfsFileSystemPGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsFileSystemPGroupOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsFileSystemPGroupAsync(const UpdateCfsFileSystemPGroupRequest& request, const UpdateCfsFileSystemPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCfsFileSystemPGroupRequest&;
    using Resp = UpdateCfsFileSystemPGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCfsFileSystemPGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::UpdateCfsFileSystemPGroupOutcomeCallable CfsClient::UpdateCfsFileSystemPGroupCallable(const UpdateCfsFileSystemPGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCfsFileSystemPGroupOutcome>>();
    UpdateCfsFileSystemPGroupAsync(
    request,
    [prom](
        const CfsClient*,
        const UpdateCfsFileSystemPGroupRequest&,
        UpdateCfsFileSystemPGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::UpdateCfsFileSystemSizeLimitOutcome CfsClient::UpdateCfsFileSystemSizeLimit(const UpdateCfsFileSystemSizeLimitRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsFileSystemSizeLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsFileSystemSizeLimitResponse rsp = UpdateCfsFileSystemSizeLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsFileSystemSizeLimitOutcome(rsp);
        else
            return UpdateCfsFileSystemSizeLimitOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsFileSystemSizeLimitOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsFileSystemSizeLimitAsync(const UpdateCfsFileSystemSizeLimitRequest& request, const UpdateCfsFileSystemSizeLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCfsFileSystemSizeLimitRequest&;
    using Resp = UpdateCfsFileSystemSizeLimitResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCfsFileSystemSizeLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::UpdateCfsFileSystemSizeLimitOutcomeCallable CfsClient::UpdateCfsFileSystemSizeLimitCallable(const UpdateCfsFileSystemSizeLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCfsFileSystemSizeLimitOutcome>>();
    UpdateCfsFileSystemSizeLimitAsync(
    request,
    [prom](
        const CfsClient*,
        const UpdateCfsFileSystemSizeLimitRequest&,
        UpdateCfsFileSystemSizeLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::UpdateCfsPGroupOutcome CfsClient::UpdateCfsPGroup(const UpdateCfsPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsPGroupResponse rsp = UpdateCfsPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsPGroupOutcome(rsp);
        else
            return UpdateCfsPGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsPGroupOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsPGroupAsync(const UpdateCfsPGroupRequest& request, const UpdateCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCfsPGroupRequest&;
    using Resp = UpdateCfsPGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCfsPGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::UpdateCfsPGroupOutcomeCallable CfsClient::UpdateCfsPGroupCallable(const UpdateCfsPGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCfsPGroupOutcome>>();
    UpdateCfsPGroupAsync(
    request,
    [prom](
        const CfsClient*,
        const UpdateCfsPGroupRequest&,
        UpdateCfsPGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::UpdateCfsRuleOutcome CfsClient::UpdateCfsRule(const UpdateCfsRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsRuleResponse rsp = UpdateCfsRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsRuleOutcome(rsp);
        else
            return UpdateCfsRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsRuleOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsRuleAsync(const UpdateCfsRuleRequest& request, const UpdateCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCfsRuleRequest&;
    using Resp = UpdateCfsRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCfsRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::UpdateCfsRuleOutcomeCallable CfsClient::UpdateCfsRuleCallable(const UpdateCfsRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCfsRuleOutcome>>();
    UpdateCfsRuleAsync(
    request,
    [prom](
        const CfsClient*,
        const UpdateCfsRuleRequest&,
        UpdateCfsRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CfsClient::UpdateCfsSnapshotAttributeOutcome CfsClient::UpdateCfsSnapshotAttribute(const UpdateCfsSnapshotAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsSnapshotAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsSnapshotAttributeResponse rsp = UpdateCfsSnapshotAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsSnapshotAttributeOutcome(rsp);
        else
            return UpdateCfsSnapshotAttributeOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsSnapshotAttributeOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsSnapshotAttributeAsync(const UpdateCfsSnapshotAttributeRequest& request, const UpdateCfsSnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCfsSnapshotAttributeRequest&;
    using Resp = UpdateCfsSnapshotAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCfsSnapshotAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CfsClient::UpdateCfsSnapshotAttributeOutcomeCallable CfsClient::UpdateCfsSnapshotAttributeCallable(const UpdateCfsSnapshotAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCfsSnapshotAttributeOutcome>>();
    UpdateCfsSnapshotAttributeAsync(
    request,
    [prom](
        const CfsClient*,
        const UpdateCfsSnapshotAttributeRequest&,
        UpdateCfsSnapshotAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

