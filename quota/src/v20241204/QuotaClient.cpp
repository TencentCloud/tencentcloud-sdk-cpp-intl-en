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

#include <tencentcloud/quota/v20241204/QuotaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Quota::V20241204;
using namespace TencentCloud::Quota::V20241204::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-12-04";
    const string ENDPOINT = "quota.intl.tencentcloudapi.com";
}

QuotaClient::QuotaClient(const Credential &credential, const string &region) :
    QuotaClient(credential, region, ClientProfile())
{
}

QuotaClient::QuotaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


QuotaClient::CreateAlarmOutcome QuotaClient::CreateAlarm(const CreateAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmResponse rsp = CreateAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmOutcome(rsp);
        else
            return CreateAlarmOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmOutcome(outcome.GetError());
    }
}

void QuotaClient::CreateAlarmAsync(const CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlarmRequest&;
    using Resp = CreateAlarmResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlarm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

QuotaClient::CreateAlarmOutcomeCallable QuotaClient::CreateAlarmCallable(const CreateAlarmRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlarmOutcome>>();
    CreateAlarmAsync(
    request,
    [prom](
        const QuotaClient*,
        const CreateAlarmRequest&,
        CreateAlarmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

QuotaClient::DeleteAlarmOutcome QuotaClient::DeleteAlarm(const DeleteAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmResponse rsp = DeleteAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmOutcome(rsp);
        else
            return DeleteAlarmOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmOutcome(outcome.GetError());
    }
}

void QuotaClient::DeleteAlarmAsync(const DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAlarmRequest&;
    using Resp = DeleteAlarmResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlarm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

QuotaClient::DeleteAlarmOutcomeCallable QuotaClient::DeleteAlarmCallable(const DeleteAlarmRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlarmOutcome>>();
    DeleteAlarmAsync(
    request,
    [prom](
        const QuotaClient*,
        const DeleteAlarmRequest&,
        DeleteAlarmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

QuotaClient::DescribeAlarmsOutcome QuotaClient::DescribeAlarms(const DescribeAlarmsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmsResponse rsp = DescribeAlarmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmsOutcome(rsp);
        else
            return DescribeAlarmsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmsOutcome(outcome.GetError());
    }
}

void QuotaClient::DescribeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmsRequest&;
    using Resp = DescribeAlarmsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

QuotaClient::DescribeAlarmsOutcomeCallable QuotaClient::DescribeAlarmsCallable(const DescribeAlarmsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmsOutcome>>();
    DescribeAlarmsAsync(
    request,
    [prom](
        const QuotaClient*,
        const DescribeAlarmsRequest&,
        DescribeAlarmsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

QuotaClient::EnableAlarmOutcome QuotaClient::EnableAlarm(const EnableAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "EnableAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableAlarmResponse rsp = EnableAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableAlarmOutcome(rsp);
        else
            return EnableAlarmOutcome(o.GetError());
    }
    else
    {
        return EnableAlarmOutcome(outcome.GetError());
    }
}

void QuotaClient::EnableAlarmAsync(const EnableAlarmRequest& request, const EnableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableAlarmRequest&;
    using Resp = EnableAlarmResponse;

    DoRequestAsync<Req, Resp>(
        "EnableAlarm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

QuotaClient::EnableAlarmOutcomeCallable QuotaClient::EnableAlarmCallable(const EnableAlarmRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableAlarmOutcome>>();
    EnableAlarmAsync(
    request,
    [prom](
        const QuotaClient*,
        const EnableAlarmRequest&,
        EnableAlarmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

QuotaClient::UpdateAlarmOutcome QuotaClient::UpdateAlarm(const UpdateAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAlarmResponse rsp = UpdateAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAlarmOutcome(rsp);
        else
            return UpdateAlarmOutcome(o.GetError());
    }
    else
    {
        return UpdateAlarmOutcome(outcome.GetError());
    }
}

void QuotaClient::UpdateAlarmAsync(const UpdateAlarmRequest& request, const UpdateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAlarmRequest&;
    using Resp = UpdateAlarmResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAlarm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

QuotaClient::UpdateAlarmOutcomeCallable QuotaClient::UpdateAlarmCallable(const UpdateAlarmRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAlarmOutcome>>();
    UpdateAlarmAsync(
    request,
    [prom](
        const QuotaClient*,
        const UpdateAlarmRequest&,
        UpdateAlarmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

