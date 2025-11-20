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

#include <tencentcloud/trro/v20220325/TrroClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trro::V20220325;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-03-25";
    const string ENDPOINT = "trro.intl.tencentcloudapi.com";
}

TrroClient::TrroClient(const Credential &credential, const string &region) :
    TrroClient(credential, region, ClientProfile())
{
}

TrroClient::TrroClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrroClient::BatchDeleteDevicesOutcome TrroClient::BatchDeleteDevices(const BatchDeleteDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteDevicesResponse rsp = BatchDeleteDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteDevicesOutcome(rsp);
        else
            return BatchDeleteDevicesOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteDevicesOutcome(outcome.GetError());
    }
}

void TrroClient::BatchDeleteDevicesAsync(const BatchDeleteDevicesRequest& request, const BatchDeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeleteDevicesRequest&;
    using Resp = BatchDeleteDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::BatchDeleteDevicesOutcomeCallable TrroClient::BatchDeleteDevicesCallable(const BatchDeleteDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteDevicesOutcome>>();
    BatchDeleteDevicesAsync(
    request,
    [prom](
        const TrroClient*,
        const BatchDeleteDevicesRequest&,
        BatchDeleteDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::BatchDeletePolicyOutcome TrroClient::BatchDeletePolicy(const BatchDeletePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeletePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeletePolicyResponse rsp = BatchDeletePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeletePolicyOutcome(rsp);
        else
            return BatchDeletePolicyOutcome(o.GetError());
    }
    else
    {
        return BatchDeletePolicyOutcome(outcome.GetError());
    }
}

void TrroClient::BatchDeletePolicyAsync(const BatchDeletePolicyRequest& request, const BatchDeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeletePolicyRequest&;
    using Resp = BatchDeletePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeletePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::BatchDeletePolicyOutcomeCallable TrroClient::BatchDeletePolicyCallable(const BatchDeletePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeletePolicyOutcome>>();
    BatchDeletePolicyAsync(
    request,
    [prom](
        const TrroClient*,
        const BatchDeletePolicyRequest&,
        BatchDeletePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::CreateDeviceOutcome TrroClient::CreateDevice(const CreateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceResponse rsp = CreateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceOutcome(rsp);
        else
            return CreateDeviceOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceOutcome(outcome.GetError());
    }
}

void TrroClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceRequest&;
    using Resp = CreateDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::CreateDeviceOutcomeCallable TrroClient::CreateDeviceCallable(const CreateDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceOutcome>>();
    CreateDeviceAsync(
    request,
    [prom](
        const TrroClient*,
        const CreateDeviceRequest&,
        CreateDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::CreateProjectOutcome TrroClient::CreateProject(const CreateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectResponse rsp = CreateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectOutcome(rsp);
        else
            return CreateProjectOutcome(o.GetError());
    }
    else
    {
        return CreateProjectOutcome(outcome.GetError());
    }
}

void TrroClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProjectRequest&;
    using Resp = CreateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::CreateProjectOutcomeCallable TrroClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProjectOutcome>>();
    CreateProjectAsync(
    request,
    [prom](
        const TrroClient*,
        const CreateProjectRequest&,
        CreateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::DeleteProjectOutcome TrroClient::DeleteProject(const DeleteProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectResponse rsp = DeleteProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectOutcome(rsp);
        else
            return DeleteProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectOutcome(outcome.GetError());
    }
}

void TrroClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectRequest&;
    using Resp = DeleteProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::DeleteProjectOutcomeCallable TrroClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectOutcome>>();
    DeleteProjectAsync(
    request,
    [prom](
        const TrroClient*,
        const DeleteProjectRequest&,
        DeleteProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::DescribeDeviceInfoOutcome TrroClient::DescribeDeviceInfo(const DescribeDeviceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceInfoResponse rsp = DescribeDeviceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceInfoOutcome(rsp);
        else
            return DescribeDeviceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceInfoOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeDeviceInfoAsync(const DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceInfoRequest&;
    using Resp = DescribeDeviceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::DescribeDeviceInfoOutcomeCallable TrroClient::DescribeDeviceInfoCallable(const DescribeDeviceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceInfoOutcome>>();
    DescribeDeviceInfoAsync(
    request,
    [prom](
        const TrroClient*,
        const DescribeDeviceInfoRequest&,
        DescribeDeviceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::DescribeDeviceSessionListOutcome TrroClient::DescribeDeviceSessionList(const DescribeDeviceSessionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceSessionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceSessionListResponse rsp = DescribeDeviceSessionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceSessionListOutcome(rsp);
        else
            return DescribeDeviceSessionListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceSessionListOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeDeviceSessionListAsync(const DescribeDeviceSessionListRequest& request, const DescribeDeviceSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceSessionListRequest&;
    using Resp = DescribeDeviceSessionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceSessionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::DescribeDeviceSessionListOutcomeCallable TrroClient::DescribeDeviceSessionListCallable(const DescribeDeviceSessionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceSessionListOutcome>>();
    DescribeDeviceSessionListAsync(
    request,
    [prom](
        const TrroClient*,
        const DescribeDeviceSessionListRequest&,
        DescribeDeviceSessionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::DescribeProjectInfoOutcome TrroClient::DescribeProjectInfo(const DescribeProjectInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectInfoResponse rsp = DescribeProjectInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectInfoOutcome(rsp);
        else
            return DescribeProjectInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectInfoOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeProjectInfoAsync(const DescribeProjectInfoRequest& request, const DescribeProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectInfoRequest&;
    using Resp = DescribeProjectInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::DescribeProjectInfoOutcomeCallable TrroClient::DescribeProjectInfoCallable(const DescribeProjectInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectInfoOutcome>>();
    DescribeProjectInfoAsync(
    request,
    [prom](
        const TrroClient*,
        const DescribeProjectInfoRequest&,
        DescribeProjectInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::DescribeProjectListOutcome TrroClient::DescribeProjectList(const DescribeProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectListResponse rsp = DescribeProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectListOutcome(rsp);
        else
            return DescribeProjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectListOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeProjectListAsync(const DescribeProjectListRequest& request, const DescribeProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectListRequest&;
    using Resp = DescribeProjectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::DescribeProjectListOutcomeCallable TrroClient::DescribeProjectListCallable(const DescribeProjectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectListOutcome>>();
    DescribeProjectListAsync(
    request,
    [prom](
        const TrroClient*,
        const DescribeProjectListRequest&,
        DescribeProjectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::DescribeRecentSessionListOutcome TrroClient::DescribeRecentSessionList(const DescribeRecentSessionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecentSessionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecentSessionListResponse rsp = DescribeRecentSessionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecentSessionListOutcome(rsp);
        else
            return DescribeRecentSessionListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecentSessionListOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeRecentSessionListAsync(const DescribeRecentSessionListRequest& request, const DescribeRecentSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecentSessionListRequest&;
    using Resp = DescribeRecentSessionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecentSessionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::DescribeRecentSessionListOutcomeCallable TrroClient::DescribeRecentSessionListCallable(const DescribeRecentSessionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecentSessionListOutcome>>();
    DescribeRecentSessionListAsync(
    request,
    [prom](
        const TrroClient*,
        const DescribeRecentSessionListRequest&,
        DescribeRecentSessionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::DescribeSessionStatisticsOutcome TrroClient::DescribeSessionStatistics(const DescribeSessionStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionStatisticsResponse rsp = DescribeSessionStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionStatisticsOutcome(rsp);
        else
            return DescribeSessionStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionStatisticsOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeSessionStatisticsAsync(const DescribeSessionStatisticsRequest& request, const DescribeSessionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionStatisticsRequest&;
    using Resp = DescribeSessionStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSessionStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::DescribeSessionStatisticsOutcomeCallable TrroClient::DescribeSessionStatisticsCallable(const DescribeSessionStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionStatisticsOutcome>>();
    DescribeSessionStatisticsAsync(
    request,
    [prom](
        const TrroClient*,
        const DescribeSessionStatisticsRequest&,
        DescribeSessionStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::DescribeSessionStatisticsByIntervalOutcome TrroClient::DescribeSessionStatisticsByInterval(const DescribeSessionStatisticsByIntervalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionStatisticsByInterval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionStatisticsByIntervalResponse rsp = DescribeSessionStatisticsByIntervalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionStatisticsByIntervalOutcome(rsp);
        else
            return DescribeSessionStatisticsByIntervalOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionStatisticsByIntervalOutcome(outcome.GetError());
    }
}

void TrroClient::DescribeSessionStatisticsByIntervalAsync(const DescribeSessionStatisticsByIntervalRequest& request, const DescribeSessionStatisticsByIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionStatisticsByIntervalRequest&;
    using Resp = DescribeSessionStatisticsByIntervalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSessionStatisticsByInterval", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::DescribeSessionStatisticsByIntervalOutcomeCallable TrroClient::DescribeSessionStatisticsByIntervalCallable(const DescribeSessionStatisticsByIntervalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionStatisticsByIntervalOutcome>>();
    DescribeSessionStatisticsByIntervalAsync(
    request,
    [prom](
        const TrroClient*,
        const DescribeSessionStatisticsByIntervalRequest&,
        DescribeSessionStatisticsByIntervalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::GetDeviceLicenseOutcome TrroClient::GetDeviceLicense(const GetDeviceLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceLicenseResponse rsp = GetDeviceLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceLicenseOutcome(rsp);
        else
            return GetDeviceLicenseOutcome(o.GetError());
    }
    else
    {
        return GetDeviceLicenseOutcome(outcome.GetError());
    }
}

void TrroClient::GetDeviceLicenseAsync(const GetDeviceLicenseRequest& request, const GetDeviceLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceLicenseRequest&;
    using Resp = GetDeviceLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeviceLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::GetDeviceLicenseOutcomeCallable TrroClient::GetDeviceLicenseCallable(const GetDeviceLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceLicenseOutcome>>();
    GetDeviceLicenseAsync(
    request,
    [prom](
        const TrroClient*,
        const GetDeviceLicenseRequest&,
        GetDeviceLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::GetDevicesOutcome TrroClient::GetDevices(const GetDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "GetDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDevicesResponse rsp = GetDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDevicesOutcome(rsp);
        else
            return GetDevicesOutcome(o.GetError());
    }
    else
    {
        return GetDevicesOutcome(outcome.GetError());
    }
}

void TrroClient::GetDevicesAsync(const GetDevicesRequest& request, const GetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDevicesRequest&;
    using Resp = GetDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "GetDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::GetDevicesOutcomeCallable TrroClient::GetDevicesCallable(const GetDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDevicesOutcome>>();
    GetDevicesAsync(
    request,
    [prom](
        const TrroClient*,
        const GetDevicesRequest&,
        GetDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::GetLicenseStatOutcome TrroClient::GetLicenseStat(const GetLicenseStatRequest &request)
{
    auto outcome = MakeRequest(request, "GetLicenseStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLicenseStatResponse rsp = GetLicenseStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLicenseStatOutcome(rsp);
        else
            return GetLicenseStatOutcome(o.GetError());
    }
    else
    {
        return GetLicenseStatOutcome(outcome.GetError());
    }
}

void TrroClient::GetLicenseStatAsync(const GetLicenseStatRequest& request, const GetLicenseStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLicenseStatRequest&;
    using Resp = GetLicenseStatResponse;

    DoRequestAsync<Req, Resp>(
        "GetLicenseStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::GetLicenseStatOutcomeCallable TrroClient::GetLicenseStatCallable(const GetLicenseStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLicenseStatOutcome>>();
    GetLicenseStatAsync(
    request,
    [prom](
        const TrroClient*,
        const GetLicenseStatRequest&,
        GetLicenseStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::GetLicensesOutcome TrroClient::GetLicenses(const GetLicensesRequest &request)
{
    auto outcome = MakeRequest(request, "GetLicenses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLicensesResponse rsp = GetLicensesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLicensesOutcome(rsp);
        else
            return GetLicensesOutcome(o.GetError());
    }
    else
    {
        return GetLicensesOutcome(outcome.GetError());
    }
}

void TrroClient::GetLicensesAsync(const GetLicensesRequest& request, const GetLicensesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLicensesRequest&;
    using Resp = GetLicensesResponse;

    DoRequestAsync<Req, Resp>(
        "GetLicenses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::GetLicensesOutcomeCallable TrroClient::GetLicensesCallable(const GetLicensesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLicensesOutcome>>();
    GetLicensesAsync(
    request,
    [prom](
        const TrroClient*,
        const GetLicensesRequest&,
        GetLicensesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::ModifyDeviceOutcome TrroClient::ModifyDevice(const ModifyDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceResponse rsp = ModifyDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceOutcome(rsp);
        else
            return ModifyDeviceOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceOutcome(outcome.GetError());
    }
}

void TrroClient::ModifyDeviceAsync(const ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceRequest&;
    using Resp = ModifyDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::ModifyDeviceOutcomeCallable TrroClient::ModifyDeviceCallable(const ModifyDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceOutcome>>();
    ModifyDeviceAsync(
    request,
    [prom](
        const TrroClient*,
        const ModifyDeviceRequest&,
        ModifyDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::ModifyPolicyOutcome TrroClient::ModifyPolicy(const ModifyPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPolicyResponse rsp = ModifyPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPolicyOutcome(rsp);
        else
            return ModifyPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyPolicyOutcome(outcome.GetError());
    }
}

void TrroClient::ModifyPolicyAsync(const ModifyPolicyRequest& request, const ModifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPolicyRequest&;
    using Resp = ModifyPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::ModifyPolicyOutcomeCallable TrroClient::ModifyPolicyCallable(const ModifyPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPolicyOutcome>>();
    ModifyPolicyAsync(
    request,
    [prom](
        const TrroClient*,
        const ModifyPolicyRequest&,
        ModifyPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrroClient::ModifyProjectOutcome TrroClient::ModifyProject(const ModifyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectResponse rsp = ModifyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectOutcome(rsp);
        else
            return ModifyProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectOutcome(outcome.GetError());
    }
}

void TrroClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProjectRequest&;
    using Resp = ModifyProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrroClient::ModifyProjectOutcomeCallable TrroClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectOutcome>>();
    ModifyProjectAsync(
    request,
    [prom](
        const TrroClient*,
        const ModifyProjectRequest&,
        ModifyProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

