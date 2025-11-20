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

#include <tencentcloud/tiw/v20190919/TiwClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tiw::V20190919;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-19";
    const string ENDPOINT = "tiw.intl.tencentcloudapi.com";
}

TiwClient::TiwClient(const Credential &credential, const string &region) :
    TiwClient(credential, region, ClientProfile())
{
}

TiwClient::TiwClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiwClient::ApplyTiwTrialOutcome TiwClient::ApplyTiwTrial(const ApplyTiwTrialRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyTiwTrial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyTiwTrialResponse rsp = ApplyTiwTrialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyTiwTrialOutcome(rsp);
        else
            return ApplyTiwTrialOutcome(o.GetError());
    }
    else
    {
        return ApplyTiwTrialOutcome(outcome.GetError());
    }
}

void TiwClient::ApplyTiwTrialAsync(const ApplyTiwTrialRequest& request, const ApplyTiwTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyTiwTrialRequest&;
    using Resp = ApplyTiwTrialResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyTiwTrial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::ApplyTiwTrialOutcomeCallable TiwClient::ApplyTiwTrialCallable(const ApplyTiwTrialRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyTiwTrialOutcome>>();
    ApplyTiwTrialAsync(
    request,
    [prom](
        const TiwClient*,
        const ApplyTiwTrialRequest&,
        ApplyTiwTrialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::CreateApplicationOutcome TiwClient::CreateApplication(const CreateApplicationRequest &request)
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

void TiwClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TiwClient::CreateApplicationOutcomeCallable TiwClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationOutcome>>();
    CreateApplicationAsync(
    request,
    [prom](
        const TiwClient*,
        const CreateApplicationRequest&,
        CreateApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::CreateSnapshotTaskOutcome TiwClient::CreateSnapshotTask(const CreateSnapshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotTaskResponse rsp = CreateSnapshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotTaskOutcome(rsp);
        else
            return CreateSnapshotTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotTaskOutcome(outcome.GetError());
    }
}

void TiwClient::CreateSnapshotTaskAsync(const CreateSnapshotTaskRequest& request, const CreateSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSnapshotTaskRequest&;
    using Resp = CreateSnapshotTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSnapshotTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::CreateSnapshotTaskOutcomeCallable TiwClient::CreateSnapshotTaskCallable(const CreateSnapshotTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSnapshotTaskOutcome>>();
    CreateSnapshotTaskAsync(
    request,
    [prom](
        const TiwClient*,
        const CreateSnapshotTaskRequest&,
        CreateSnapshotTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::CreateTranscodeOutcome TiwClient::CreateTranscode(const CreateTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTranscodeResponse rsp = CreateTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTranscodeOutcome(rsp);
        else
            return CreateTranscodeOutcome(o.GetError());
    }
    else
    {
        return CreateTranscodeOutcome(outcome.GetError());
    }
}

void TiwClient::CreateTranscodeAsync(const CreateTranscodeRequest& request, const CreateTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTranscodeRequest&;
    using Resp = CreateTranscodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTranscode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::CreateTranscodeOutcomeCallable TiwClient::CreateTranscodeCallable(const CreateTranscodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTranscodeOutcome>>();
    CreateTranscodeAsync(
    request,
    [prom](
        const TiwClient*,
        const CreateTranscodeRequest&,
        CreateTranscodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::CreateVideoGenerationTaskOutcome TiwClient::CreateVideoGenerationTask(const CreateVideoGenerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoGenerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoGenerationTaskResponse rsp = CreateVideoGenerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoGenerationTaskOutcome(rsp);
        else
            return CreateVideoGenerationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoGenerationTaskOutcome(outcome.GetError());
    }
}

void TiwClient::CreateVideoGenerationTaskAsync(const CreateVideoGenerationTaskRequest& request, const CreateVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVideoGenerationTaskRequest&;
    using Resp = CreateVideoGenerationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVideoGenerationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::CreateVideoGenerationTaskOutcomeCallable TiwClient::CreateVideoGenerationTaskCallable(const CreateVideoGenerationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVideoGenerationTaskOutcome>>();
    CreateVideoGenerationTaskAsync(
    request,
    [prom](
        const TiwClient*,
        const CreateVideoGenerationTaskRequest&,
        CreateVideoGenerationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeAPIServiceOutcome TiwClient::DescribeAPIService(const DescribeAPIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPIServiceResponse rsp = DescribeAPIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPIServiceOutcome(rsp);
        else
            return DescribeAPIServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeAPIServiceOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeAPIServiceAsync(const DescribeAPIServiceRequest& request, const DescribeAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAPIServiceRequest&;
    using Resp = DescribeAPIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAPIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeAPIServiceOutcomeCallable TiwClient::DescribeAPIServiceCallable(const DescribeAPIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAPIServiceOutcome>>();
    DescribeAPIServiceAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeAPIServiceRequest&,
        DescribeAPIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeApplicationInfosOutcome TiwClient::DescribeApplicationInfos(const DescribeApplicationInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationInfosResponse rsp = DescribeApplicationInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationInfosOutcome(rsp);
        else
            return DescribeApplicationInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationInfosOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeApplicationInfosAsync(const DescribeApplicationInfosRequest& request, const DescribeApplicationInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationInfosRequest&;
    using Resp = DescribeApplicationInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeApplicationInfosOutcomeCallable TiwClient::DescribeApplicationInfosCallable(const DescribeApplicationInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationInfosOutcome>>();
    DescribeApplicationInfosAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeApplicationInfosRequest&,
        DescribeApplicationInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeApplicationUsageOutcome TiwClient::DescribeApplicationUsage(const DescribeApplicationUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationUsageResponse rsp = DescribeApplicationUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationUsageOutcome(rsp);
        else
            return DescribeApplicationUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationUsageOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeApplicationUsageAsync(const DescribeApplicationUsageRequest& request, const DescribeApplicationUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationUsageRequest&;
    using Resp = DescribeApplicationUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeApplicationUsageOutcomeCallable TiwClient::DescribeApplicationUsageCallable(const DescribeApplicationUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationUsageOutcome>>();
    DescribeApplicationUsageAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeApplicationUsageRequest&,
        DescribeApplicationUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeBoardSDKLogOutcome TiwClient::DescribeBoardSDKLog(const DescribeBoardSDKLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBoardSDKLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBoardSDKLogResponse rsp = DescribeBoardSDKLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBoardSDKLogOutcome(rsp);
        else
            return DescribeBoardSDKLogOutcome(o.GetError());
    }
    else
    {
        return DescribeBoardSDKLogOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeBoardSDKLogAsync(const DescribeBoardSDKLogRequest& request, const DescribeBoardSDKLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBoardSDKLogRequest&;
    using Resp = DescribeBoardSDKLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBoardSDKLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeBoardSDKLogOutcomeCallable TiwClient::DescribeBoardSDKLogCallable(const DescribeBoardSDKLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBoardSDKLogOutcome>>();
    DescribeBoardSDKLogAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeBoardSDKLogRequest&,
        DescribeBoardSDKLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeIMApplicationsOutcome TiwClient::DescribeIMApplications(const DescribeIMApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIMApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIMApplicationsResponse rsp = DescribeIMApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIMApplicationsOutcome(rsp);
        else
            return DescribeIMApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeIMApplicationsOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeIMApplicationsAsync(const DescribeIMApplicationsRequest& request, const DescribeIMApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIMApplicationsRequest&;
    using Resp = DescribeIMApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIMApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeIMApplicationsOutcomeCallable TiwClient::DescribeIMApplicationsCallable(const DescribeIMApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIMApplicationsOutcome>>();
    DescribeIMApplicationsAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeIMApplicationsRequest&,
        DescribeIMApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeOnlineRecordOutcome TiwClient::DescribeOnlineRecord(const DescribeOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineRecordResponse rsp = DescribeOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineRecordOutcome(rsp);
        else
            return DescribeOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOnlineRecordAsync(const DescribeOnlineRecordRequest& request, const DescribeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOnlineRecordRequest&;
    using Resp = DescribeOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeOnlineRecordOutcomeCallable TiwClient::DescribeOnlineRecordCallable(const DescribeOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOnlineRecordOutcome>>();
    DescribeOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeOnlineRecordRequest&,
        DescribeOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeOnlineRecordCallbackOutcome TiwClient::DescribeOnlineRecordCallback(const DescribeOnlineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineRecordCallbackResponse rsp = DescribeOnlineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineRecordCallbackOutcome(rsp);
        else
            return DescribeOnlineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOnlineRecordCallbackAsync(const DescribeOnlineRecordCallbackRequest& request, const DescribeOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOnlineRecordCallbackRequest&;
    using Resp = DescribeOnlineRecordCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOnlineRecordCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeOnlineRecordCallbackOutcomeCallable TiwClient::DescribeOnlineRecordCallbackCallable(const DescribeOnlineRecordCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOnlineRecordCallbackOutcome>>();
    DescribeOnlineRecordCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeOnlineRecordCallbackRequest&,
        DescribeOnlineRecordCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribePostpaidUsageOutcome TiwClient::DescribePostpaidUsage(const DescribePostpaidUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePostpaidUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePostpaidUsageResponse rsp = DescribePostpaidUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePostpaidUsageOutcome(rsp);
        else
            return DescribePostpaidUsageOutcome(o.GetError());
    }
    else
    {
        return DescribePostpaidUsageOutcome(outcome.GetError());
    }
}

void TiwClient::DescribePostpaidUsageAsync(const DescribePostpaidUsageRequest& request, const DescribePostpaidUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePostpaidUsageRequest&;
    using Resp = DescribePostpaidUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePostpaidUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribePostpaidUsageOutcomeCallable TiwClient::DescribePostpaidUsageCallable(const DescribePostpaidUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePostpaidUsageOutcome>>();
    DescribePostpaidUsageAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribePostpaidUsageRequest&,
        DescribePostpaidUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeQualityMetricsOutcome TiwClient::DescribeQualityMetrics(const DescribeQualityMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityMetricsResponse rsp = DescribeQualityMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityMetricsOutcome(rsp);
        else
            return DescribeQualityMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityMetricsOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeQualityMetricsAsync(const DescribeQualityMetricsRequest& request, const DescribeQualityMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQualityMetricsRequest&;
    using Resp = DescribeQualityMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQualityMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeQualityMetricsOutcomeCallable TiwClient::DescribeQualityMetricsCallable(const DescribeQualityMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQualityMetricsOutcome>>();
    DescribeQualityMetricsAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeQualityMetricsRequest&,
        DescribeQualityMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeRecordSearchOutcome TiwClient::DescribeRecordSearch(const DescribeRecordSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordSearchResponse rsp = DescribeRecordSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordSearchOutcome(rsp);
        else
            return DescribeRecordSearchOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordSearchOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeRecordSearchAsync(const DescribeRecordSearchRequest& request, const DescribeRecordSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordSearchRequest&;
    using Resp = DescribeRecordSearchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordSearch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeRecordSearchOutcomeCallable TiwClient::DescribeRecordSearchCallable(const DescribeRecordSearchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordSearchOutcome>>();
    DescribeRecordSearchAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeRecordSearchRequest&,
        DescribeRecordSearchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeRoomListOutcome TiwClient::DescribeRoomList(const DescribeRoomListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomListResponse rsp = DescribeRoomListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomListOutcome(rsp);
        else
            return DescribeRoomListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomListOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeRoomListAsync(const DescribeRoomListRequest& request, const DescribeRoomListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoomListRequest&;
    using Resp = DescribeRoomListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoomList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeRoomListOutcomeCallable TiwClient::DescribeRoomListCallable(const DescribeRoomListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoomListOutcome>>();
    DescribeRoomListAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeRoomListRequest&,
        DescribeRoomListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeSnapshotTaskOutcome TiwClient::DescribeSnapshotTask(const DescribeSnapshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotTaskResponse rsp = DescribeSnapshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotTaskOutcome(rsp);
        else
            return DescribeSnapshotTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotTaskOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeSnapshotTaskAsync(const DescribeSnapshotTaskRequest& request, const DescribeSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotTaskRequest&;
    using Resp = DescribeSnapshotTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeSnapshotTaskOutcomeCallable TiwClient::DescribeSnapshotTaskCallable(const DescribeSnapshotTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotTaskOutcome>>();
    DescribeSnapshotTaskAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeSnapshotTaskRequest&,
        DescribeSnapshotTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeTIWDailyUsageOutcome TiwClient::DescribeTIWDailyUsage(const DescribeTIWDailyUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTIWDailyUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTIWDailyUsageResponse rsp = DescribeTIWDailyUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTIWDailyUsageOutcome(rsp);
        else
            return DescribeTIWDailyUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTIWDailyUsageOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTIWDailyUsageAsync(const DescribeTIWDailyUsageRequest& request, const DescribeTIWDailyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTIWDailyUsageRequest&;
    using Resp = DescribeTIWDailyUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTIWDailyUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeTIWDailyUsageOutcomeCallable TiwClient::DescribeTIWDailyUsageCallable(const DescribeTIWDailyUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTIWDailyUsageOutcome>>();
    DescribeTIWDailyUsageAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeTIWDailyUsageRequest&,
        DescribeTIWDailyUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeTIWRoomDailyUsageOutcome TiwClient::DescribeTIWRoomDailyUsage(const DescribeTIWRoomDailyUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTIWRoomDailyUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTIWRoomDailyUsageResponse rsp = DescribeTIWRoomDailyUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTIWRoomDailyUsageOutcome(rsp);
        else
            return DescribeTIWRoomDailyUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTIWRoomDailyUsageOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTIWRoomDailyUsageAsync(const DescribeTIWRoomDailyUsageRequest& request, const DescribeTIWRoomDailyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTIWRoomDailyUsageRequest&;
    using Resp = DescribeTIWRoomDailyUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTIWRoomDailyUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeTIWRoomDailyUsageOutcomeCallable TiwClient::DescribeTIWRoomDailyUsageCallable(const DescribeTIWRoomDailyUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTIWRoomDailyUsageOutcome>>();
    DescribeTIWRoomDailyUsageAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeTIWRoomDailyUsageRequest&,
        DescribeTIWRoomDailyUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeTranscodeOutcome TiwClient::DescribeTranscode(const DescribeTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeResponse rsp = DescribeTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeOutcome(rsp);
        else
            return DescribeTranscodeOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeAsync(const DescribeTranscodeRequest& request, const DescribeTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTranscodeRequest&;
    using Resp = DescribeTranscodeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTranscode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeTranscodeOutcomeCallable TiwClient::DescribeTranscodeCallable(const DescribeTranscodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTranscodeOutcome>>();
    DescribeTranscodeAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeTranscodeRequest&,
        DescribeTranscodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeTranscodeCallbackOutcome TiwClient::DescribeTranscodeCallback(const DescribeTranscodeCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeCallbackResponse rsp = DescribeTranscodeCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeCallbackOutcome(rsp);
        else
            return DescribeTranscodeCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeCallbackAsync(const DescribeTranscodeCallbackRequest& request, const DescribeTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTranscodeCallbackRequest&;
    using Resp = DescribeTranscodeCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTranscodeCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeTranscodeCallbackOutcomeCallable TiwClient::DescribeTranscodeCallbackCallable(const DescribeTranscodeCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTranscodeCallbackOutcome>>();
    DescribeTranscodeCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeTranscodeCallbackRequest&,
        DescribeTranscodeCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeTranscodeSearchOutcome TiwClient::DescribeTranscodeSearch(const DescribeTranscodeSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeSearchResponse rsp = DescribeTranscodeSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeSearchOutcome(rsp);
        else
            return DescribeTranscodeSearchOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeSearchOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeSearchAsync(const DescribeTranscodeSearchRequest& request, const DescribeTranscodeSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTranscodeSearchRequest&;
    using Resp = DescribeTranscodeSearchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTranscodeSearch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeTranscodeSearchOutcomeCallable TiwClient::DescribeTranscodeSearchCallable(const DescribeTranscodeSearchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTranscodeSearchOutcome>>();
    DescribeTranscodeSearchAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeTranscodeSearchRequest&,
        DescribeTranscodeSearchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeUsageSummaryOutcome TiwClient::DescribeUsageSummary(const DescribeUsageSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsageSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageSummaryResponse rsp = DescribeUsageSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageSummaryOutcome(rsp);
        else
            return DescribeUsageSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageSummaryOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeUsageSummaryAsync(const DescribeUsageSummaryRequest& request, const DescribeUsageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsageSummaryRequest&;
    using Resp = DescribeUsageSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsageSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeUsageSummaryOutcomeCallable TiwClient::DescribeUsageSummaryCallable(const DescribeUsageSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsageSummaryOutcome>>();
    DescribeUsageSummaryAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeUsageSummaryRequest&,
        DescribeUsageSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeUserListOutcome TiwClient::DescribeUserList(const DescribeUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserListResponse rsp = DescribeUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserListOutcome(rsp);
        else
            return DescribeUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserListOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeUserListAsync(const DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserListRequest&;
    using Resp = DescribeUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeUserListOutcomeCallable TiwClient::DescribeUserListCallable(const DescribeUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserListOutcome>>();
    DescribeUserListAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeUserListRequest&,
        DescribeUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeUserResourcesOutcome TiwClient::DescribeUserResources(const DescribeUserResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResourcesResponse rsp = DescribeUserResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserResourcesOutcome(rsp);
        else
            return DescribeUserResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeUserResourcesOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeUserResourcesAsync(const DescribeUserResourcesRequest& request, const DescribeUserResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserResourcesRequest&;
    using Resp = DescribeUserResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeUserResourcesOutcomeCallable TiwClient::DescribeUserResourcesCallable(const DescribeUserResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserResourcesOutcome>>();
    DescribeUserResourcesAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeUserResourcesRequest&,
        DescribeUserResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeUserStatusOutcome TiwClient::DescribeUserStatus(const DescribeUserStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserStatusResponse rsp = DescribeUserStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserStatusOutcome(rsp);
        else
            return DescribeUserStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeUserStatusOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeUserStatusAsync(const DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserStatusRequest&;
    using Resp = DescribeUserStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeUserStatusOutcomeCallable TiwClient::DescribeUserStatusCallable(const DescribeUserStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserStatusOutcome>>();
    DescribeUserStatusAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeUserStatusRequest&,
        DescribeUserStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeVideoGenerationTaskOutcome TiwClient::DescribeVideoGenerationTask(const DescribeVideoGenerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoGenerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoGenerationTaskResponse rsp = DescribeVideoGenerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoGenerationTaskOutcome(rsp);
        else
            return DescribeVideoGenerationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoGenerationTaskOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeVideoGenerationTaskAsync(const DescribeVideoGenerationTaskRequest& request, const DescribeVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoGenerationTaskRequest&;
    using Resp = DescribeVideoGenerationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoGenerationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeVideoGenerationTaskOutcomeCallable TiwClient::DescribeVideoGenerationTaskCallable(const DescribeVideoGenerationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoGenerationTaskOutcome>>();
    DescribeVideoGenerationTaskAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeVideoGenerationTaskRequest&,
        DescribeVideoGenerationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeVideoGenerationTaskCallbackOutcome TiwClient::DescribeVideoGenerationTaskCallback(const DescribeVideoGenerationTaskCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoGenerationTaskCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoGenerationTaskCallbackResponse rsp = DescribeVideoGenerationTaskCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoGenerationTaskCallbackOutcome(rsp);
        else
            return DescribeVideoGenerationTaskCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoGenerationTaskCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeVideoGenerationTaskCallbackAsync(const DescribeVideoGenerationTaskCallbackRequest& request, const DescribeVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoGenerationTaskCallbackRequest&;
    using Resp = DescribeVideoGenerationTaskCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoGenerationTaskCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeVideoGenerationTaskCallbackOutcomeCallable TiwClient::DescribeVideoGenerationTaskCallbackCallable(const DescribeVideoGenerationTaskCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoGenerationTaskCallbackOutcome>>();
    DescribeVideoGenerationTaskCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeVideoGenerationTaskCallbackRequest&,
        DescribeVideoGenerationTaskCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeWhiteboardApplicationConfigOutcome TiwClient::DescribeWhiteboardApplicationConfig(const DescribeWhiteboardApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardApplicationConfigResponse rsp = DescribeWhiteboardApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardApplicationConfigOutcome(rsp);
        else
            return DescribeWhiteboardApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardApplicationConfigOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardApplicationConfigAsync(const DescribeWhiteboardApplicationConfigRequest& request, const DescribeWhiteboardApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteboardApplicationConfigRequest&;
    using Resp = DescribeWhiteboardApplicationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteboardApplicationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeWhiteboardApplicationConfigOutcomeCallable TiwClient::DescribeWhiteboardApplicationConfigCallable(const DescribeWhiteboardApplicationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteboardApplicationConfigOutcome>>();
    DescribeWhiteboardApplicationConfigAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeWhiteboardApplicationConfigRequest&,
        DescribeWhiteboardApplicationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeWhiteboardBucketConfigOutcome TiwClient::DescribeWhiteboardBucketConfig(const DescribeWhiteboardBucketConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardBucketConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardBucketConfigResponse rsp = DescribeWhiteboardBucketConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardBucketConfigOutcome(rsp);
        else
            return DescribeWhiteboardBucketConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardBucketConfigOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardBucketConfigAsync(const DescribeWhiteboardBucketConfigRequest& request, const DescribeWhiteboardBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteboardBucketConfigRequest&;
    using Resp = DescribeWhiteboardBucketConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteboardBucketConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeWhiteboardBucketConfigOutcomeCallable TiwClient::DescribeWhiteboardBucketConfigCallable(const DescribeWhiteboardBucketConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteboardBucketConfigOutcome>>();
    DescribeWhiteboardBucketConfigAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeWhiteboardBucketConfigRequest&,
        DescribeWhiteboardBucketConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeWhiteboardPushOutcome TiwClient::DescribeWhiteboardPush(const DescribeWhiteboardPushRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardPush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardPushResponse rsp = DescribeWhiteboardPushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardPushOutcome(rsp);
        else
            return DescribeWhiteboardPushOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardPushOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardPushAsync(const DescribeWhiteboardPushRequest& request, const DescribeWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteboardPushRequest&;
    using Resp = DescribeWhiteboardPushResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteboardPush", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeWhiteboardPushOutcomeCallable TiwClient::DescribeWhiteboardPushCallable(const DescribeWhiteboardPushRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteboardPushOutcome>>();
    DescribeWhiteboardPushAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeWhiteboardPushRequest&,
        DescribeWhiteboardPushOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeWhiteboardPushCallbackOutcome TiwClient::DescribeWhiteboardPushCallback(const DescribeWhiteboardPushCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardPushCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardPushCallbackResponse rsp = DescribeWhiteboardPushCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardPushCallbackOutcome(rsp);
        else
            return DescribeWhiteboardPushCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardPushCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardPushCallbackAsync(const DescribeWhiteboardPushCallbackRequest& request, const DescribeWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteboardPushCallbackRequest&;
    using Resp = DescribeWhiteboardPushCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteboardPushCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeWhiteboardPushCallbackOutcomeCallable TiwClient::DescribeWhiteboardPushCallbackCallable(const DescribeWhiteboardPushCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteboardPushCallbackOutcome>>();
    DescribeWhiteboardPushCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeWhiteboardPushCallbackRequest&,
        DescribeWhiteboardPushCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeWhiteboardPushSearchOutcome TiwClient::DescribeWhiteboardPushSearch(const DescribeWhiteboardPushSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardPushSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardPushSearchResponse rsp = DescribeWhiteboardPushSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardPushSearchOutcome(rsp);
        else
            return DescribeWhiteboardPushSearchOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardPushSearchOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardPushSearchAsync(const DescribeWhiteboardPushSearchRequest& request, const DescribeWhiteboardPushSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteboardPushSearchRequest&;
    using Resp = DescribeWhiteboardPushSearchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteboardPushSearch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeWhiteboardPushSearchOutcomeCallable TiwClient::DescribeWhiteboardPushSearchCallable(const DescribeWhiteboardPushSearchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteboardPushSearchOutcome>>();
    DescribeWhiteboardPushSearchAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeWhiteboardPushSearchRequest&,
        DescribeWhiteboardPushSearchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::ModifyApplicationOutcome TiwClient::ModifyApplication(const ModifyApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationResponse rsp = ModifyApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationOutcome(rsp);
        else
            return ModifyApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationOutcome(outcome.GetError());
    }
}

void TiwClient::ModifyApplicationAsync(const ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationRequest&;
    using Resp = ModifyApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::ModifyApplicationOutcomeCallable TiwClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationOutcome>>();
    ModifyApplicationAsync(
    request,
    [prom](
        const TiwClient*,
        const ModifyApplicationRequest&,
        ModifyApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::ModifyAutoRenewFlagOutcome TiwClient::ModifyAutoRenewFlag(const ModifyAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoRenewFlagResponse rsp = ModifyAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoRenewFlagOutcome(rsp);
        else
            return ModifyAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoRenewFlagOutcome(outcome.GetError());
    }
}

void TiwClient::ModifyAutoRenewFlagAsync(const ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoRenewFlagRequest&;
    using Resp = ModifyAutoRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::ModifyAutoRenewFlagOutcomeCallable TiwClient::ModifyAutoRenewFlagCallable(const ModifyAutoRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoRenewFlagOutcome>>();
    ModifyAutoRenewFlagAsync(
    request,
    [prom](
        const TiwClient*,
        const ModifyAutoRenewFlagRequest&,
        ModifyAutoRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::ModifyWhiteboardApplicationConfigOutcome TiwClient::ModifyWhiteboardApplicationConfig(const ModifyWhiteboardApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWhiteboardApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWhiteboardApplicationConfigResponse rsp = ModifyWhiteboardApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWhiteboardApplicationConfigOutcome(rsp);
        else
            return ModifyWhiteboardApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyWhiteboardApplicationConfigOutcome(outcome.GetError());
    }
}

void TiwClient::ModifyWhiteboardApplicationConfigAsync(const ModifyWhiteboardApplicationConfigRequest& request, const ModifyWhiteboardApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWhiteboardApplicationConfigRequest&;
    using Resp = ModifyWhiteboardApplicationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWhiteboardApplicationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::ModifyWhiteboardApplicationConfigOutcomeCallable TiwClient::ModifyWhiteboardApplicationConfigCallable(const ModifyWhiteboardApplicationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWhiteboardApplicationConfigOutcome>>();
    ModifyWhiteboardApplicationConfigAsync(
    request,
    [prom](
        const TiwClient*,
        const ModifyWhiteboardApplicationConfigRequest&,
        ModifyWhiteboardApplicationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::ModifyWhiteboardBucketConfigOutcome TiwClient::ModifyWhiteboardBucketConfig(const ModifyWhiteboardBucketConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWhiteboardBucketConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWhiteboardBucketConfigResponse rsp = ModifyWhiteboardBucketConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWhiteboardBucketConfigOutcome(rsp);
        else
            return ModifyWhiteboardBucketConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyWhiteboardBucketConfigOutcome(outcome.GetError());
    }
}

void TiwClient::ModifyWhiteboardBucketConfigAsync(const ModifyWhiteboardBucketConfigRequest& request, const ModifyWhiteboardBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWhiteboardBucketConfigRequest&;
    using Resp = ModifyWhiteboardBucketConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWhiteboardBucketConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::ModifyWhiteboardBucketConfigOutcomeCallable TiwClient::ModifyWhiteboardBucketConfigCallable(const ModifyWhiteboardBucketConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWhiteboardBucketConfigOutcome>>();
    ModifyWhiteboardBucketConfigAsync(
    request,
    [prom](
        const TiwClient*,
        const ModifyWhiteboardBucketConfigRequest&,
        ModifyWhiteboardBucketConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::PauseOnlineRecordOutcome TiwClient::PauseOnlineRecord(const PauseOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "PauseOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseOnlineRecordResponse rsp = PauseOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseOnlineRecordOutcome(rsp);
        else
            return PauseOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return PauseOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::PauseOnlineRecordAsync(const PauseOnlineRecordRequest& request, const PauseOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseOnlineRecordRequest&;
    using Resp = PauseOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "PauseOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::PauseOnlineRecordOutcomeCallable TiwClient::PauseOnlineRecordCallable(const PauseOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseOnlineRecordOutcome>>();
    PauseOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const PauseOnlineRecordRequest&,
        PauseOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::ResumeOnlineRecordOutcome TiwClient::ResumeOnlineRecord(const ResumeOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeOnlineRecordResponse rsp = ResumeOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeOnlineRecordOutcome(rsp);
        else
            return ResumeOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return ResumeOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::ResumeOnlineRecordAsync(const ResumeOnlineRecordRequest& request, const ResumeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeOnlineRecordRequest&;
    using Resp = ResumeOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::ResumeOnlineRecordOutcomeCallable TiwClient::ResumeOnlineRecordCallable(const ResumeOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeOnlineRecordOutcome>>();
    ResumeOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const ResumeOnlineRecordRequest&,
        ResumeOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetOnlineRecordCallbackOutcome TiwClient::SetOnlineRecordCallback(const SetOnlineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetOnlineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOnlineRecordCallbackResponse rsp = SetOnlineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOnlineRecordCallbackOutcome(rsp);
        else
            return SetOnlineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return SetOnlineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetOnlineRecordCallbackAsync(const SetOnlineRecordCallbackRequest& request, const SetOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetOnlineRecordCallbackRequest&;
    using Resp = SetOnlineRecordCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetOnlineRecordCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetOnlineRecordCallbackOutcomeCallable TiwClient::SetOnlineRecordCallbackCallable(const SetOnlineRecordCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetOnlineRecordCallbackOutcome>>();
    SetOnlineRecordCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetOnlineRecordCallbackRequest&,
        SetOnlineRecordCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetOnlineRecordCallbackKeyOutcome TiwClient::SetOnlineRecordCallbackKey(const SetOnlineRecordCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetOnlineRecordCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOnlineRecordCallbackKeyResponse rsp = SetOnlineRecordCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOnlineRecordCallbackKeyOutcome(rsp);
        else
            return SetOnlineRecordCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetOnlineRecordCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetOnlineRecordCallbackKeyAsync(const SetOnlineRecordCallbackKeyRequest& request, const SetOnlineRecordCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetOnlineRecordCallbackKeyRequest&;
    using Resp = SetOnlineRecordCallbackKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SetOnlineRecordCallbackKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetOnlineRecordCallbackKeyOutcomeCallable TiwClient::SetOnlineRecordCallbackKeyCallable(const SetOnlineRecordCallbackKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetOnlineRecordCallbackKeyOutcome>>();
    SetOnlineRecordCallbackKeyAsync(
    request,
    [prom](
        const TiwClient*,
        const SetOnlineRecordCallbackKeyRequest&,
        SetOnlineRecordCallbackKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetTranscodeCallbackOutcome TiwClient::SetTranscodeCallback(const SetTranscodeCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetTranscodeCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTranscodeCallbackResponse rsp = SetTranscodeCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTranscodeCallbackOutcome(rsp);
        else
            return SetTranscodeCallbackOutcome(o.GetError());
    }
    else
    {
        return SetTranscodeCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetTranscodeCallbackAsync(const SetTranscodeCallbackRequest& request, const SetTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetTranscodeCallbackRequest&;
    using Resp = SetTranscodeCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetTranscodeCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetTranscodeCallbackOutcomeCallable TiwClient::SetTranscodeCallbackCallable(const SetTranscodeCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetTranscodeCallbackOutcome>>();
    SetTranscodeCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetTranscodeCallbackRequest&,
        SetTranscodeCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetTranscodeCallbackKeyOutcome TiwClient::SetTranscodeCallbackKey(const SetTranscodeCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetTranscodeCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTranscodeCallbackKeyResponse rsp = SetTranscodeCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTranscodeCallbackKeyOutcome(rsp);
        else
            return SetTranscodeCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetTranscodeCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetTranscodeCallbackKeyAsync(const SetTranscodeCallbackKeyRequest& request, const SetTranscodeCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetTranscodeCallbackKeyRequest&;
    using Resp = SetTranscodeCallbackKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SetTranscodeCallbackKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetTranscodeCallbackKeyOutcomeCallable TiwClient::SetTranscodeCallbackKeyCallable(const SetTranscodeCallbackKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetTranscodeCallbackKeyOutcome>>();
    SetTranscodeCallbackKeyAsync(
    request,
    [prom](
        const TiwClient*,
        const SetTranscodeCallbackKeyRequest&,
        SetTranscodeCallbackKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetVideoGenerationTaskCallbackOutcome TiwClient::SetVideoGenerationTaskCallback(const SetVideoGenerationTaskCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetVideoGenerationTaskCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVideoGenerationTaskCallbackResponse rsp = SetVideoGenerationTaskCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVideoGenerationTaskCallbackOutcome(rsp);
        else
            return SetVideoGenerationTaskCallbackOutcome(o.GetError());
    }
    else
    {
        return SetVideoGenerationTaskCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetVideoGenerationTaskCallbackAsync(const SetVideoGenerationTaskCallbackRequest& request, const SetVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetVideoGenerationTaskCallbackRequest&;
    using Resp = SetVideoGenerationTaskCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetVideoGenerationTaskCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetVideoGenerationTaskCallbackOutcomeCallable TiwClient::SetVideoGenerationTaskCallbackCallable(const SetVideoGenerationTaskCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetVideoGenerationTaskCallbackOutcome>>();
    SetVideoGenerationTaskCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetVideoGenerationTaskCallbackRequest&,
        SetVideoGenerationTaskCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetVideoGenerationTaskCallbackKeyOutcome TiwClient::SetVideoGenerationTaskCallbackKey(const SetVideoGenerationTaskCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetVideoGenerationTaskCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVideoGenerationTaskCallbackKeyResponse rsp = SetVideoGenerationTaskCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVideoGenerationTaskCallbackKeyOutcome(rsp);
        else
            return SetVideoGenerationTaskCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetVideoGenerationTaskCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetVideoGenerationTaskCallbackKeyAsync(const SetVideoGenerationTaskCallbackKeyRequest& request, const SetVideoGenerationTaskCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetVideoGenerationTaskCallbackKeyRequest&;
    using Resp = SetVideoGenerationTaskCallbackKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SetVideoGenerationTaskCallbackKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetVideoGenerationTaskCallbackKeyOutcomeCallable TiwClient::SetVideoGenerationTaskCallbackKeyCallable(const SetVideoGenerationTaskCallbackKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetVideoGenerationTaskCallbackKeyOutcome>>();
    SetVideoGenerationTaskCallbackKeyAsync(
    request,
    [prom](
        const TiwClient*,
        const SetVideoGenerationTaskCallbackKeyRequest&,
        SetVideoGenerationTaskCallbackKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetWhiteboardPushCallbackOutcome TiwClient::SetWhiteboardPushCallback(const SetWhiteboardPushCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetWhiteboardPushCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetWhiteboardPushCallbackResponse rsp = SetWhiteboardPushCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetWhiteboardPushCallbackOutcome(rsp);
        else
            return SetWhiteboardPushCallbackOutcome(o.GetError());
    }
    else
    {
        return SetWhiteboardPushCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetWhiteboardPushCallbackAsync(const SetWhiteboardPushCallbackRequest& request, const SetWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetWhiteboardPushCallbackRequest&;
    using Resp = SetWhiteboardPushCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetWhiteboardPushCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetWhiteboardPushCallbackOutcomeCallable TiwClient::SetWhiteboardPushCallbackCallable(const SetWhiteboardPushCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetWhiteboardPushCallbackOutcome>>();
    SetWhiteboardPushCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetWhiteboardPushCallbackRequest&,
        SetWhiteboardPushCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetWhiteboardPushCallbackKeyOutcome TiwClient::SetWhiteboardPushCallbackKey(const SetWhiteboardPushCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetWhiteboardPushCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetWhiteboardPushCallbackKeyResponse rsp = SetWhiteboardPushCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetWhiteboardPushCallbackKeyOutcome(rsp);
        else
            return SetWhiteboardPushCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetWhiteboardPushCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetWhiteboardPushCallbackKeyAsync(const SetWhiteboardPushCallbackKeyRequest& request, const SetWhiteboardPushCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetWhiteboardPushCallbackKeyRequest&;
    using Resp = SetWhiteboardPushCallbackKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SetWhiteboardPushCallbackKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetWhiteboardPushCallbackKeyOutcomeCallable TiwClient::SetWhiteboardPushCallbackKeyCallable(const SetWhiteboardPushCallbackKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetWhiteboardPushCallbackKeyOutcome>>();
    SetWhiteboardPushCallbackKeyAsync(
    request,
    [prom](
        const TiwClient*,
        const SetWhiteboardPushCallbackKeyRequest&,
        SetWhiteboardPushCallbackKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::StartOnlineRecordOutcome TiwClient::StartOnlineRecord(const StartOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartOnlineRecordResponse rsp = StartOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartOnlineRecordOutcome(rsp);
        else
            return StartOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return StartOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::StartOnlineRecordAsync(const StartOnlineRecordRequest& request, const StartOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartOnlineRecordRequest&;
    using Resp = StartOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StartOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::StartOnlineRecordOutcomeCallable TiwClient::StartOnlineRecordCallable(const StartOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartOnlineRecordOutcome>>();
    StartOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const StartOnlineRecordRequest&,
        StartOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::StartWhiteboardPushOutcome TiwClient::StartWhiteboardPush(const StartWhiteboardPushRequest &request)
{
    auto outcome = MakeRequest(request, "StartWhiteboardPush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartWhiteboardPushResponse rsp = StartWhiteboardPushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartWhiteboardPushOutcome(rsp);
        else
            return StartWhiteboardPushOutcome(o.GetError());
    }
    else
    {
        return StartWhiteboardPushOutcome(outcome.GetError());
    }
}

void TiwClient::StartWhiteboardPushAsync(const StartWhiteboardPushRequest& request, const StartWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartWhiteboardPushRequest&;
    using Resp = StartWhiteboardPushResponse;

    DoRequestAsync<Req, Resp>(
        "StartWhiteboardPush", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::StartWhiteboardPushOutcomeCallable TiwClient::StartWhiteboardPushCallable(const StartWhiteboardPushRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartWhiteboardPushOutcome>>();
    StartWhiteboardPushAsync(
    request,
    [prom](
        const TiwClient*,
        const StartWhiteboardPushRequest&,
        StartWhiteboardPushOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::StopOnlineRecordOutcome TiwClient::StopOnlineRecord(const StopOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopOnlineRecordResponse rsp = StopOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopOnlineRecordOutcome(rsp);
        else
            return StopOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return StopOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::StopOnlineRecordAsync(const StopOnlineRecordRequest& request, const StopOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopOnlineRecordRequest&;
    using Resp = StopOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StopOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::StopOnlineRecordOutcomeCallable TiwClient::StopOnlineRecordCallable(const StopOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopOnlineRecordOutcome>>();
    StopOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const StopOnlineRecordRequest&,
        StopOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::StopWhiteboardPushOutcome TiwClient::StopWhiteboardPush(const StopWhiteboardPushRequest &request)
{
    auto outcome = MakeRequest(request, "StopWhiteboardPush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopWhiteboardPushResponse rsp = StopWhiteboardPushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopWhiteboardPushOutcome(rsp);
        else
            return StopWhiteboardPushOutcome(o.GetError());
    }
    else
    {
        return StopWhiteboardPushOutcome(outcome.GetError());
    }
}

void TiwClient::StopWhiteboardPushAsync(const StopWhiteboardPushRequest& request, const StopWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopWhiteboardPushRequest&;
    using Resp = StopWhiteboardPushResponse;

    DoRequestAsync<Req, Resp>(
        "StopWhiteboardPush", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::StopWhiteboardPushOutcomeCallable TiwClient::StopWhiteboardPushCallable(const StopWhiteboardPushRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopWhiteboardPushOutcome>>();
    StopWhiteboardPushAsync(
    request,
    [prom](
        const TiwClient*,
        const StopWhiteboardPushRequest&,
        StopWhiteboardPushOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

