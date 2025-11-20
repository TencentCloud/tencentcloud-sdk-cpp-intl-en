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

#include <tencentcloud/car/v20220110/CarClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Car::V20220110;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-10";
    const string ENDPOINT = "car.intl.tencentcloudapi.com";
}

CarClient::CarClient(const Credential &credential, const string &region) :
    CarClient(credential, region, ClientProfile())
{
}

CarClient::CarClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CarClient::ApplyConcurrentOutcome CarClient::ApplyConcurrent(const ApplyConcurrentRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyConcurrent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyConcurrentResponse rsp = ApplyConcurrentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyConcurrentOutcome(rsp);
        else
            return ApplyConcurrentOutcome(o.GetError());
    }
    else
    {
        return ApplyConcurrentOutcome(outcome.GetError());
    }
}

void CarClient::ApplyConcurrentAsync(const ApplyConcurrentRequest& request, const ApplyConcurrentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyConcurrentRequest&;
    using Resp = ApplyConcurrentResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyConcurrent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::ApplyConcurrentOutcomeCallable CarClient::ApplyConcurrentCallable(const ApplyConcurrentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyConcurrentOutcome>>();
    ApplyConcurrentAsync(
    request,
    [prom](
        const CarClient*,
        const ApplyConcurrentRequest&,
        ApplyConcurrentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::BindConcurrentPackagesToProjectOutcome CarClient::BindConcurrentPackagesToProject(const BindConcurrentPackagesToProjectRequest &request)
{
    auto outcome = MakeRequest(request, "BindConcurrentPackagesToProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindConcurrentPackagesToProjectResponse rsp = BindConcurrentPackagesToProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindConcurrentPackagesToProjectOutcome(rsp);
        else
            return BindConcurrentPackagesToProjectOutcome(o.GetError());
    }
    else
    {
        return BindConcurrentPackagesToProjectOutcome(outcome.GetError());
    }
}

void CarClient::BindConcurrentPackagesToProjectAsync(const BindConcurrentPackagesToProjectRequest& request, const BindConcurrentPackagesToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindConcurrentPackagesToProjectRequest&;
    using Resp = BindConcurrentPackagesToProjectResponse;

    DoRequestAsync<Req, Resp>(
        "BindConcurrentPackagesToProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::BindConcurrentPackagesToProjectOutcomeCallable CarClient::BindConcurrentPackagesToProjectCallable(const BindConcurrentPackagesToProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindConcurrentPackagesToProjectOutcome>>();
    BindConcurrentPackagesToProjectAsync(
    request,
    [prom](
        const CarClient*,
        const BindConcurrentPackagesToProjectRequest&,
        BindConcurrentPackagesToProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::CreateApplicationOutcome CarClient::CreateApplication(const CreateApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationResponse rsp = CreateApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationOutcome(rsp);
        else
            return CreateApplicationOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationOutcome(outcome.GetError());
    }
}

void CarClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationRequest&;
    using Resp = CreateApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::CreateApplicationOutcomeCallable CarClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationOutcome>>();
    CreateApplicationAsync(
    request,
    [prom](
        const CarClient*,
        const CreateApplicationRequest&,
        CreateApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::CreateApplicationProjectOutcome CarClient::CreateApplicationProject(const CreateApplicationProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationProjectResponse rsp = CreateApplicationProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationProjectOutcome(rsp);
        else
            return CreateApplicationProjectOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationProjectOutcome(outcome.GetError());
    }
}

void CarClient::CreateApplicationProjectAsync(const CreateApplicationProjectRequest& request, const CreateApplicationProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationProjectRequest&;
    using Resp = CreateApplicationProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::CreateApplicationProjectOutcomeCallable CarClient::CreateApplicationProjectCallable(const CreateApplicationProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationProjectOutcome>>();
    CreateApplicationProjectAsync(
    request,
    [prom](
        const CarClient*,
        const CreateApplicationProjectRequest&,
        CreateApplicationProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::CreateApplicationSnapshotOutcome CarClient::CreateApplicationSnapshot(const CreateApplicationSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationSnapshotResponse rsp = CreateApplicationSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationSnapshotOutcome(rsp);
        else
            return CreateApplicationSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationSnapshotOutcome(outcome.GetError());
    }
}

void CarClient::CreateApplicationSnapshotAsync(const CreateApplicationSnapshotRequest& request, const CreateApplicationSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationSnapshotRequest&;
    using Resp = CreateApplicationSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::CreateApplicationSnapshotOutcomeCallable CarClient::CreateApplicationSnapshotCallable(const CreateApplicationSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationSnapshotOutcome>>();
    CreateApplicationSnapshotAsync(
    request,
    [prom](
        const CarClient*,
        const CreateApplicationSnapshotRequest&,
        CreateApplicationSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::CreateApplicationVersionOutcome CarClient::CreateApplicationVersion(const CreateApplicationVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationVersionResponse rsp = CreateApplicationVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationVersionOutcome(rsp);
        else
            return CreateApplicationVersionOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationVersionOutcome(outcome.GetError());
    }
}

void CarClient::CreateApplicationVersionAsync(const CreateApplicationVersionRequest& request, const CreateApplicationVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationVersionRequest&;
    using Resp = CreateApplicationVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::CreateApplicationVersionOutcomeCallable CarClient::CreateApplicationVersionCallable(const CreateApplicationVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationVersionOutcome>>();
    CreateApplicationVersionAsync(
    request,
    [prom](
        const CarClient*,
        const CreateApplicationVersionRequest&,
        CreateApplicationVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::CreateSessionOutcome CarClient::CreateSession(const CreateSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSessionResponse rsp = CreateSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSessionOutcome(rsp);
        else
            return CreateSessionOutcome(o.GetError());
    }
    else
    {
        return CreateSessionOutcome(outcome.GetError());
    }
}

void CarClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSessionRequest&;
    using Resp = CreateSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::CreateSessionOutcomeCallable CarClient::CreateSessionCallable(const CreateSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSessionOutcome>>();
    CreateSessionAsync(
    request,
    [prom](
        const CarClient*,
        const CreateSessionRequest&,
        CreateSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DeleteApplicationOutcome CarClient::DeleteApplication(const DeleteApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationResponse rsp = DeleteApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationOutcome(rsp);
        else
            return DeleteApplicationOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationOutcome(outcome.GetError());
    }
}

void CarClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationRequest&;
    using Resp = DeleteApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DeleteApplicationOutcomeCallable CarClient::DeleteApplicationCallable(const DeleteApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationOutcome>>();
    DeleteApplicationAsync(
    request,
    [prom](
        const CarClient*,
        const DeleteApplicationRequest&,
        DeleteApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DeleteApplicationProjectsOutcome CarClient::DeleteApplicationProjects(const DeleteApplicationProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationProjectsResponse rsp = DeleteApplicationProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationProjectsOutcome(rsp);
        else
            return DeleteApplicationProjectsOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationProjectsOutcome(outcome.GetError());
    }
}

void CarClient::DeleteApplicationProjectsAsync(const DeleteApplicationProjectsRequest& request, const DeleteApplicationProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationProjectsRequest&;
    using Resp = DeleteApplicationProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DeleteApplicationProjectsOutcomeCallable CarClient::DeleteApplicationProjectsCallable(const DeleteApplicationProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationProjectsOutcome>>();
    DeleteApplicationProjectsAsync(
    request,
    [prom](
        const CarClient*,
        const DeleteApplicationProjectsRequest&,
        DeleteApplicationProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DeleteApplicationVersionOutcome CarClient::DeleteApplicationVersion(const DeleteApplicationVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationVersionResponse rsp = DeleteApplicationVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationVersionOutcome(rsp);
        else
            return DeleteApplicationVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationVersionOutcome(outcome.GetError());
    }
}

void CarClient::DeleteApplicationVersionAsync(const DeleteApplicationVersionRequest& request, const DeleteApplicationVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationVersionRequest&;
    using Resp = DeleteApplicationVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DeleteApplicationVersionOutcomeCallable CarClient::DeleteApplicationVersionCallable(const DeleteApplicationVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationVersionOutcome>>();
    DeleteApplicationVersionAsync(
    request,
    [prom](
        const CarClient*,
        const DeleteApplicationVersionRequest&,
        DeleteApplicationVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeApplicationFileInfoOutcome CarClient::DescribeApplicationFileInfo(const DescribeApplicationFileInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationFileInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationFileInfoResponse rsp = DescribeApplicationFileInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationFileInfoOutcome(rsp);
        else
            return DescribeApplicationFileInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationFileInfoOutcome(outcome.GetError());
    }
}

void CarClient::DescribeApplicationFileInfoAsync(const DescribeApplicationFileInfoRequest& request, const DescribeApplicationFileInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationFileInfoRequest&;
    using Resp = DescribeApplicationFileInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationFileInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeApplicationFileInfoOutcomeCallable CarClient::DescribeApplicationFileInfoCallable(const DescribeApplicationFileInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationFileInfoOutcome>>();
    DescribeApplicationFileInfoAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeApplicationFileInfoRequest&,
        DescribeApplicationFileInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeApplicationListOutcome CarClient::DescribeApplicationList(const DescribeApplicationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationListResponse rsp = DescribeApplicationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationListOutcome(rsp);
        else
            return DescribeApplicationListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationListOutcome(outcome.GetError());
    }
}

void CarClient::DescribeApplicationListAsync(const DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationListRequest&;
    using Resp = DescribeApplicationListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeApplicationListOutcomeCallable CarClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationListOutcome>>();
    DescribeApplicationListAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeApplicationListRequest&,
        DescribeApplicationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeApplicationPathListOutcome CarClient::DescribeApplicationPathList(const DescribeApplicationPathListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationPathList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationPathListResponse rsp = DescribeApplicationPathListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationPathListOutcome(rsp);
        else
            return DescribeApplicationPathListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationPathListOutcome(outcome.GetError());
    }
}

void CarClient::DescribeApplicationPathListAsync(const DescribeApplicationPathListRequest& request, const DescribeApplicationPathListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationPathListRequest&;
    using Resp = DescribeApplicationPathListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationPathList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeApplicationPathListOutcomeCallable CarClient::DescribeApplicationPathListCallable(const DescribeApplicationPathListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationPathListOutcome>>();
    DescribeApplicationPathListAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeApplicationPathListRequest&,
        DescribeApplicationPathListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeApplicationProjectAdvancedConfigOutcome CarClient::DescribeApplicationProjectAdvancedConfig(const DescribeApplicationProjectAdvancedConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationProjectAdvancedConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationProjectAdvancedConfigResponse rsp = DescribeApplicationProjectAdvancedConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationProjectAdvancedConfigOutcome(rsp);
        else
            return DescribeApplicationProjectAdvancedConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationProjectAdvancedConfigOutcome(outcome.GetError());
    }
}

void CarClient::DescribeApplicationProjectAdvancedConfigAsync(const DescribeApplicationProjectAdvancedConfigRequest& request, const DescribeApplicationProjectAdvancedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationProjectAdvancedConfigRequest&;
    using Resp = DescribeApplicationProjectAdvancedConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationProjectAdvancedConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeApplicationProjectAdvancedConfigOutcomeCallable CarClient::DescribeApplicationProjectAdvancedConfigCallable(const DescribeApplicationProjectAdvancedConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationProjectAdvancedConfigOutcome>>();
    DescribeApplicationProjectAdvancedConfigAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeApplicationProjectAdvancedConfigRequest&,
        DescribeApplicationProjectAdvancedConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeApplicationProjectsOutcome CarClient::DescribeApplicationProjects(const DescribeApplicationProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationProjectsResponse rsp = DescribeApplicationProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationProjectsOutcome(rsp);
        else
            return DescribeApplicationProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationProjectsOutcome(outcome.GetError());
    }
}

void CarClient::DescribeApplicationProjectsAsync(const DescribeApplicationProjectsRequest& request, const DescribeApplicationProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationProjectsRequest&;
    using Resp = DescribeApplicationProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeApplicationProjectsOutcomeCallable CarClient::DescribeApplicationProjectsCallable(const DescribeApplicationProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationProjectsOutcome>>();
    DescribeApplicationProjectsAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeApplicationProjectsRequest&,
        DescribeApplicationProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeApplicationStatusOutcome CarClient::DescribeApplicationStatus(const DescribeApplicationStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationStatusResponse rsp = DescribeApplicationStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationStatusOutcome(rsp);
        else
            return DescribeApplicationStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationStatusOutcome(outcome.GetError());
    }
}

void CarClient::DescribeApplicationStatusAsync(const DescribeApplicationStatusRequest& request, const DescribeApplicationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationStatusRequest&;
    using Resp = DescribeApplicationStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeApplicationStatusOutcomeCallable CarClient::DescribeApplicationStatusCallable(const DescribeApplicationStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationStatusOutcome>>();
    DescribeApplicationStatusAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeApplicationStatusRequest&,
        DescribeApplicationStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeApplicationVersionOutcome CarClient::DescribeApplicationVersion(const DescribeApplicationVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationVersionResponse rsp = DescribeApplicationVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationVersionOutcome(rsp);
        else
            return DescribeApplicationVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationVersionOutcome(outcome.GetError());
    }
}

void CarClient::DescribeApplicationVersionAsync(const DescribeApplicationVersionRequest& request, const DescribeApplicationVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationVersionRequest&;
    using Resp = DescribeApplicationVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeApplicationVersionOutcomeCallable CarClient::DescribeApplicationVersionCallable(const DescribeApplicationVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationVersionOutcome>>();
    DescribeApplicationVersionAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeApplicationVersionRequest&,
        DescribeApplicationVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeConcurrentCountOutcome CarClient::DescribeConcurrentCount(const DescribeConcurrentCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrentCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrentCountResponse rsp = DescribeConcurrentCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrentCountOutcome(rsp);
        else
            return DescribeConcurrentCountOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrentCountOutcome(outcome.GetError());
    }
}

void CarClient::DescribeConcurrentCountAsync(const DescribeConcurrentCountRequest& request, const DescribeConcurrentCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConcurrentCountRequest&;
    using Resp = DescribeConcurrentCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConcurrentCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeConcurrentCountOutcomeCallable CarClient::DescribeConcurrentCountCallable(const DescribeConcurrentCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConcurrentCountOutcome>>();
    DescribeConcurrentCountAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeConcurrentCountRequest&,
        DescribeConcurrentCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeConcurrentPackagesOutcome CarClient::DescribeConcurrentPackages(const DescribeConcurrentPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrentPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrentPackagesResponse rsp = DescribeConcurrentPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrentPackagesOutcome(rsp);
        else
            return DescribeConcurrentPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrentPackagesOutcome(outcome.GetError());
    }
}

void CarClient::DescribeConcurrentPackagesAsync(const DescribeConcurrentPackagesRequest& request, const DescribeConcurrentPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConcurrentPackagesRequest&;
    using Resp = DescribeConcurrentPackagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConcurrentPackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeConcurrentPackagesOutcomeCallable CarClient::DescribeConcurrentPackagesCallable(const DescribeConcurrentPackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConcurrentPackagesOutcome>>();
    DescribeConcurrentPackagesAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeConcurrentPackagesRequest&,
        DescribeConcurrentPackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeConcurrentSummaryOutcome CarClient::DescribeConcurrentSummary(const DescribeConcurrentSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrentSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrentSummaryResponse rsp = DescribeConcurrentSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrentSummaryOutcome(rsp);
        else
            return DescribeConcurrentSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrentSummaryOutcome(outcome.GetError());
    }
}

void CarClient::DescribeConcurrentSummaryAsync(const DescribeConcurrentSummaryRequest& request, const DescribeConcurrentSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConcurrentSummaryRequest&;
    using Resp = DescribeConcurrentSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConcurrentSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeConcurrentSummaryOutcomeCallable CarClient::DescribeConcurrentSummaryCallable(const DescribeConcurrentSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConcurrentSummaryOutcome>>();
    DescribeConcurrentSummaryAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeConcurrentSummaryRequest&,
        DescribeConcurrentSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DescribeCosCredentialOutcome CarClient::DescribeCosCredential(const DescribeCosCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosCredentialResponse rsp = DescribeCosCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosCredentialOutcome(rsp);
        else
            return DescribeCosCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeCosCredentialOutcome(outcome.GetError());
    }
}

void CarClient::DescribeCosCredentialAsync(const DescribeCosCredentialRequest& request, const DescribeCosCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosCredentialRequest&;
    using Resp = DescribeCosCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DescribeCosCredentialOutcomeCallable CarClient::DescribeCosCredentialCallable(const DescribeCosCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosCredentialOutcome>>();
    DescribeCosCredentialAsync(
    request,
    [prom](
        const CarClient*,
        const DescribeCosCredentialRequest&,
        DescribeCosCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DestroySessionOutcome CarClient::DestroySession(const DestroySessionRequest &request)
{
    auto outcome = MakeRequest(request, "DestroySession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroySessionResponse rsp = DestroySessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroySessionOutcome(rsp);
        else
            return DestroySessionOutcome(o.GetError());
    }
    else
    {
        return DestroySessionOutcome(outcome.GetError());
    }
}

void CarClient::DestroySessionAsync(const DestroySessionRequest& request, const DestroySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroySessionRequest&;
    using Resp = DestroySessionResponse;

    DoRequestAsync<Req, Resp>(
        "DestroySession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DestroySessionOutcomeCallable CarClient::DestroySessionCallable(const DestroySessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroySessionOutcome>>();
    DestroySessionAsync(
    request,
    [prom](
        const CarClient*,
        const DestroySessionRequest&,
        DestroySessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::ModifyApplicationBaseInfoOutcome CarClient::ModifyApplicationBaseInfo(const ModifyApplicationBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationBaseInfoResponse rsp = ModifyApplicationBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationBaseInfoOutcome(rsp);
        else
            return ModifyApplicationBaseInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationBaseInfoOutcome(outcome.GetError());
    }
}

void CarClient::ModifyApplicationBaseInfoAsync(const ModifyApplicationBaseInfoRequest& request, const ModifyApplicationBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationBaseInfoRequest&;
    using Resp = ModifyApplicationBaseInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationBaseInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::ModifyApplicationBaseInfoOutcomeCallable CarClient::ModifyApplicationBaseInfoCallable(const ModifyApplicationBaseInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationBaseInfoOutcome>>();
    ModifyApplicationBaseInfoAsync(
    request,
    [prom](
        const CarClient*,
        const ModifyApplicationBaseInfoRequest&,
        ModifyApplicationBaseInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::ModifyApplicationProjectOutcome CarClient::ModifyApplicationProject(const ModifyApplicationProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProjectResponse rsp = ModifyApplicationProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProjectOutcome(rsp);
        else
            return ModifyApplicationProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProjectOutcome(outcome.GetError());
    }
}

void CarClient::ModifyApplicationProjectAsync(const ModifyApplicationProjectRequest& request, const ModifyApplicationProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationProjectRequest&;
    using Resp = ModifyApplicationProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::ModifyApplicationProjectOutcomeCallable CarClient::ModifyApplicationProjectCallable(const ModifyApplicationProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationProjectOutcome>>();
    ModifyApplicationProjectAsync(
    request,
    [prom](
        const CarClient*,
        const ModifyApplicationProjectRequest&,
        ModifyApplicationProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::ModifyApplicationVersionOutcome CarClient::ModifyApplicationVersion(const ModifyApplicationVersionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationVersionResponse rsp = ModifyApplicationVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationVersionOutcome(rsp);
        else
            return ModifyApplicationVersionOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationVersionOutcome(outcome.GetError());
    }
}

void CarClient::ModifyApplicationVersionAsync(const ModifyApplicationVersionRequest& request, const ModifyApplicationVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationVersionRequest&;
    using Resp = ModifyApplicationVersionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::ModifyApplicationVersionOutcomeCallable CarClient::ModifyApplicationVersionCallable(const ModifyApplicationVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationVersionOutcome>>();
    ModifyApplicationVersionAsync(
    request,
    [prom](
        const CarClient*,
        const ModifyApplicationVersionRequest&,
        ModifyApplicationVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::ModifyConcurrentPackageOutcome CarClient::ModifyConcurrentPackage(const ModifyConcurrentPackageRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConcurrentPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConcurrentPackageResponse rsp = ModifyConcurrentPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConcurrentPackageOutcome(rsp);
        else
            return ModifyConcurrentPackageOutcome(o.GetError());
    }
    else
    {
        return ModifyConcurrentPackageOutcome(outcome.GetError());
    }
}

void CarClient::ModifyConcurrentPackageAsync(const ModifyConcurrentPackageRequest& request, const ModifyConcurrentPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConcurrentPackageRequest&;
    using Resp = ModifyConcurrentPackageResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConcurrentPackage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::ModifyConcurrentPackageOutcomeCallable CarClient::ModifyConcurrentPackageCallable(const ModifyConcurrentPackageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConcurrentPackageOutcome>>();
    ModifyConcurrentPackageAsync(
    request,
    [prom](
        const CarClient*,
        const ModifyConcurrentPackageRequest&,
        ModifyConcurrentPackageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::ModifyMobileApplicationInfoOutcome CarClient::ModifyMobileApplicationInfo(const ModifyMobileApplicationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMobileApplicationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMobileApplicationInfoResponse rsp = ModifyMobileApplicationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMobileApplicationInfoOutcome(rsp);
        else
            return ModifyMobileApplicationInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyMobileApplicationInfoOutcome(outcome.GetError());
    }
}

void CarClient::ModifyMobileApplicationInfoAsync(const ModifyMobileApplicationInfoRequest& request, const ModifyMobileApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMobileApplicationInfoRequest&;
    using Resp = ModifyMobileApplicationInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMobileApplicationInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::ModifyMobileApplicationInfoOutcomeCallable CarClient::ModifyMobileApplicationInfoCallable(const ModifyMobileApplicationInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMobileApplicationInfoOutcome>>();
    ModifyMobileApplicationInfoAsync(
    request,
    [prom](
        const CarClient*,
        const ModifyMobileApplicationInfoRequest&,
        ModifyMobileApplicationInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::ResetConcurrentPackagesOutcome CarClient::ResetConcurrentPackages(const ResetConcurrentPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetConcurrentPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetConcurrentPackagesResponse rsp = ResetConcurrentPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetConcurrentPackagesOutcome(rsp);
        else
            return ResetConcurrentPackagesOutcome(o.GetError());
    }
    else
    {
        return ResetConcurrentPackagesOutcome(outcome.GetError());
    }
}

void CarClient::ResetConcurrentPackagesAsync(const ResetConcurrentPackagesRequest& request, const ResetConcurrentPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetConcurrentPackagesRequest&;
    using Resp = ResetConcurrentPackagesResponse;

    DoRequestAsync<Req, Resp>(
        "ResetConcurrentPackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::ResetConcurrentPackagesOutcomeCallable CarClient::ResetConcurrentPackagesCallable(const ResetConcurrentPackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetConcurrentPackagesOutcome>>();
    ResetConcurrentPackagesAsync(
    request,
    [prom](
        const CarClient*,
        const ResetConcurrentPackagesRequest&,
        ResetConcurrentPackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::SetApplicationVersionOnlineOutcome CarClient::SetApplicationVersionOnline(const SetApplicationVersionOnlineRequest &request)
{
    auto outcome = MakeRequest(request, "SetApplicationVersionOnline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetApplicationVersionOnlineResponse rsp = SetApplicationVersionOnlineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetApplicationVersionOnlineOutcome(rsp);
        else
            return SetApplicationVersionOnlineOutcome(o.GetError());
    }
    else
    {
        return SetApplicationVersionOnlineOutcome(outcome.GetError());
    }
}

void CarClient::SetApplicationVersionOnlineAsync(const SetApplicationVersionOnlineRequest& request, const SetApplicationVersionOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetApplicationVersionOnlineRequest&;
    using Resp = SetApplicationVersionOnlineResponse;

    DoRequestAsync<Req, Resp>(
        "SetApplicationVersionOnline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::SetApplicationVersionOnlineOutcomeCallable CarClient::SetApplicationVersionOnlineCallable(const SetApplicationVersionOnlineRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetApplicationVersionOnlineOutcome>>();
    SetApplicationVersionOnlineAsync(
    request,
    [prom](
        const CarClient*,
        const SetApplicationVersionOnlineRequest&,
        SetApplicationVersionOnlineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::StartPublishStreamOutcome CarClient::StartPublishStream(const StartPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamResponse rsp = StartPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamOutcome(rsp);
        else
            return StartPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamOutcome(outcome.GetError());
    }
}

void CarClient::StartPublishStreamAsync(const StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartPublishStreamRequest&;
    using Resp = StartPublishStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StartPublishStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::StartPublishStreamOutcomeCallable CarClient::StartPublishStreamCallable(const StartPublishStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartPublishStreamOutcome>>();
    StartPublishStreamAsync(
    request,
    [prom](
        const CarClient*,
        const StartPublishStreamRequest&,
        StartPublishStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::StartPublishStreamWithURLOutcome CarClient::StartPublishStreamWithURL(const StartPublishStreamWithURLRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStreamWithURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamWithURLResponse rsp = StartPublishStreamWithURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamWithURLOutcome(rsp);
        else
            return StartPublishStreamWithURLOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamWithURLOutcome(outcome.GetError());
    }
}

void CarClient::StartPublishStreamWithURLAsync(const StartPublishStreamWithURLRequest& request, const StartPublishStreamWithURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartPublishStreamWithURLRequest&;
    using Resp = StartPublishStreamWithURLResponse;

    DoRequestAsync<Req, Resp>(
        "StartPublishStreamWithURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::StartPublishStreamWithURLOutcomeCallable CarClient::StartPublishStreamWithURLCallable(const StartPublishStreamWithURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartPublishStreamWithURLOutcome>>();
    StartPublishStreamWithURLAsync(
    request,
    [prom](
        const CarClient*,
        const StartPublishStreamWithURLRequest&,
        StartPublishStreamWithURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::StopPublishStreamOutcome CarClient::StopPublishStream(const StopPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopPublishStreamResponse rsp = StopPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopPublishStreamOutcome(rsp);
        else
            return StopPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StopPublishStreamOutcome(outcome.GetError());
    }
}

void CarClient::StopPublishStreamAsync(const StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopPublishStreamRequest&;
    using Resp = StopPublishStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StopPublishStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::StopPublishStreamOutcomeCallable CarClient::StopPublishStreamCallable(const StopPublishStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopPublishStreamOutcome>>();
    StopPublishStreamAsync(
    request,
    [prom](
        const CarClient*,
        const StopPublishStreamRequest&,
        StopPublishStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::UnbindConcurrentPackagesFromProjectOutcome CarClient::UnbindConcurrentPackagesFromProject(const UnbindConcurrentPackagesFromProjectRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindConcurrentPackagesFromProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindConcurrentPackagesFromProjectResponse rsp = UnbindConcurrentPackagesFromProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindConcurrentPackagesFromProjectOutcome(rsp);
        else
            return UnbindConcurrentPackagesFromProjectOutcome(o.GetError());
    }
    else
    {
        return UnbindConcurrentPackagesFromProjectOutcome(outcome.GetError());
    }
}

void CarClient::UnbindConcurrentPackagesFromProjectAsync(const UnbindConcurrentPackagesFromProjectRequest& request, const UnbindConcurrentPackagesFromProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindConcurrentPackagesFromProjectRequest&;
    using Resp = UnbindConcurrentPackagesFromProjectResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindConcurrentPackagesFromProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::UnbindConcurrentPackagesFromProjectOutcomeCallable CarClient::UnbindConcurrentPackagesFromProjectCallable(const UnbindConcurrentPackagesFromProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindConcurrentPackagesFromProjectOutcome>>();
    UnbindConcurrentPackagesFromProjectAsync(
    request,
    [prom](
        const CarClient*,
        const UnbindConcurrentPackagesFromProjectRequest&,
        UnbindConcurrentPackagesFromProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

