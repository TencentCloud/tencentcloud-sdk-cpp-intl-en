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

#include <tencentcloud/mqtt/v20240516/MqttClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mqtt::V20240516;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-05-16";
    const string ENDPOINT = "mqtt.intl.tencentcloudapi.com";
}

MqttClient::MqttClient(const Credential &credential, const string &region) :
    MqttClient(credential, region, ClientProfile())
{
}

MqttClient::MqttClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MqttClient::AddClientSubscriptionOutcome MqttClient::AddClientSubscription(const AddClientSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "AddClientSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddClientSubscriptionResponse rsp = AddClientSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddClientSubscriptionOutcome(rsp);
        else
            return AddClientSubscriptionOutcome(o.GetError());
    }
    else
    {
        return AddClientSubscriptionOutcome(outcome.GetError());
    }
}

void MqttClient::AddClientSubscriptionAsync(const AddClientSubscriptionRequest& request, const AddClientSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddClientSubscriptionRequest&;
    using Resp = AddClientSubscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "AddClientSubscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::AddClientSubscriptionOutcomeCallable MqttClient::AddClientSubscriptionCallable(const AddClientSubscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddClientSubscriptionOutcome>>();
    AddClientSubscriptionAsync(
    request,
    [prom](
        const MqttClient*,
        const AddClientSubscriptionRequest&,
        AddClientSubscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::CreateAuthorizationPolicyOutcome MqttClient::CreateAuthorizationPolicy(const CreateAuthorizationPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuthorizationPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuthorizationPolicyResponse rsp = CreateAuthorizationPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuthorizationPolicyOutcome(rsp);
        else
            return CreateAuthorizationPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAuthorizationPolicyOutcome(outcome.GetError());
    }
}

void MqttClient::CreateAuthorizationPolicyAsync(const CreateAuthorizationPolicyRequest& request, const CreateAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAuthorizationPolicyRequest&;
    using Resp = CreateAuthorizationPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuthorizationPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateAuthorizationPolicyOutcomeCallable MqttClient::CreateAuthorizationPolicyCallable(const CreateAuthorizationPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuthorizationPolicyOutcome>>();
    CreateAuthorizationPolicyAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateAuthorizationPolicyRequest&,
        CreateAuthorizationPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::CreateInstanceOutcome MqttClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void MqttClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceRequest&;
    using Resp = CreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateInstanceOutcomeCallable MqttClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::CreateMessageEnrichmentRuleOutcome MqttClient::CreateMessageEnrichmentRule(const CreateMessageEnrichmentRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMessageEnrichmentRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMessageEnrichmentRuleResponse rsp = CreateMessageEnrichmentRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMessageEnrichmentRuleOutcome(rsp);
        else
            return CreateMessageEnrichmentRuleOutcome(o.GetError());
    }
    else
    {
        return CreateMessageEnrichmentRuleOutcome(outcome.GetError());
    }
}

void MqttClient::CreateMessageEnrichmentRuleAsync(const CreateMessageEnrichmentRuleRequest& request, const CreateMessageEnrichmentRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMessageEnrichmentRuleRequest&;
    using Resp = CreateMessageEnrichmentRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMessageEnrichmentRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateMessageEnrichmentRuleOutcomeCallable MqttClient::CreateMessageEnrichmentRuleCallable(const CreateMessageEnrichmentRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMessageEnrichmentRuleOutcome>>();
    CreateMessageEnrichmentRuleAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateMessageEnrichmentRuleRequest&,
        CreateMessageEnrichmentRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::CreateUserOutcome MqttClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void MqttClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateUserOutcomeCallable MqttClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DeleteAuthorizationPolicyOutcome MqttClient::DeleteAuthorizationPolicy(const DeleteAuthorizationPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuthorizationPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuthorizationPolicyResponse rsp = DeleteAuthorizationPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuthorizationPolicyOutcome(rsp);
        else
            return DeleteAuthorizationPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteAuthorizationPolicyOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteAuthorizationPolicyAsync(const DeleteAuthorizationPolicyRequest& request, const DeleteAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAuthorizationPolicyRequest&;
    using Resp = DeleteAuthorizationPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuthorizationPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteAuthorizationPolicyOutcomeCallable MqttClient::DeleteAuthorizationPolicyCallable(const DeleteAuthorizationPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuthorizationPolicyOutcome>>();
    DeleteAuthorizationPolicyAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteAuthorizationPolicyRequest&,
        DeleteAuthorizationPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DeleteClientSubscriptionOutcome MqttClient::DeleteClientSubscription(const DeleteClientSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClientSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClientSubscriptionResponse rsp = DeleteClientSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClientSubscriptionOutcome(rsp);
        else
            return DeleteClientSubscriptionOutcome(o.GetError());
    }
    else
    {
        return DeleteClientSubscriptionOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteClientSubscriptionAsync(const DeleteClientSubscriptionRequest& request, const DeleteClientSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClientSubscriptionRequest&;
    using Resp = DeleteClientSubscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClientSubscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteClientSubscriptionOutcomeCallable MqttClient::DeleteClientSubscriptionCallable(const DeleteClientSubscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClientSubscriptionOutcome>>();
    DeleteClientSubscriptionAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteClientSubscriptionRequest&,
        DeleteClientSubscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DeleteInstanceOutcome MqttClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceRequest&;
    using Resp = DeleteInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteInstanceOutcomeCallable MqttClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceOutcome>>();
    DeleteInstanceAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteInstanceRequest&,
        DeleteInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DeleteMessageEnrichmentRuleOutcome MqttClient::DeleteMessageEnrichmentRule(const DeleteMessageEnrichmentRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMessageEnrichmentRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMessageEnrichmentRuleResponse rsp = DeleteMessageEnrichmentRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMessageEnrichmentRuleOutcome(rsp);
        else
            return DeleteMessageEnrichmentRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteMessageEnrichmentRuleOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteMessageEnrichmentRuleAsync(const DeleteMessageEnrichmentRuleRequest& request, const DeleteMessageEnrichmentRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMessageEnrichmentRuleRequest&;
    using Resp = DeleteMessageEnrichmentRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMessageEnrichmentRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteMessageEnrichmentRuleOutcomeCallable MqttClient::DeleteMessageEnrichmentRuleCallable(const DeleteMessageEnrichmentRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMessageEnrichmentRuleOutcome>>();
    DeleteMessageEnrichmentRuleAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteMessageEnrichmentRuleRequest&,
        DeleteMessageEnrichmentRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DeleteTopicOutcome MqttClient::DeleteTopic(const DeleteTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicResponse rsp = DeleteTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicOutcome(rsp);
        else
            return DeleteTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicRequest&;
    using Resp = DeleteTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteTopicOutcomeCallable MqttClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicOutcome>>();
    DeleteTopicAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteTopicRequest&,
        DeleteTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DeleteUserOutcome MqttClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserRequest&;
    using Resp = DeleteUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteUserOutcomeCallable MqttClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeAuthorizationPoliciesOutcome MqttClient::DescribeAuthorizationPolicies(const DescribeAuthorizationPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthorizationPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthorizationPoliciesResponse rsp = DescribeAuthorizationPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthorizationPoliciesOutcome(rsp);
        else
            return DescribeAuthorizationPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthorizationPoliciesOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeAuthorizationPoliciesAsync(const DescribeAuthorizationPoliciesRequest& request, const DescribeAuthorizationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuthorizationPoliciesRequest&;
    using Resp = DescribeAuthorizationPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuthorizationPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeAuthorizationPoliciesOutcomeCallable MqttClient::DescribeAuthorizationPoliciesCallable(const DescribeAuthorizationPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuthorizationPoliciesOutcome>>();
    DescribeAuthorizationPoliciesAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeAuthorizationPoliciesRequest&,
        DescribeAuthorizationPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeClientListOutcome MqttClient::DescribeClientList(const DescribeClientListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientListResponse rsp = DescribeClientListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientListOutcome(rsp);
        else
            return DescribeClientListOutcome(o.GetError());
    }
    else
    {
        return DescribeClientListOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeClientListAsync(const DescribeClientListRequest& request, const DescribeClientListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClientListRequest&;
    using Resp = DescribeClientListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeClientListOutcomeCallable MqttClient::DescribeClientListCallable(const DescribeClientListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientListOutcome>>();
    DescribeClientListAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeClientListRequest&,
        DescribeClientListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeInstanceOutcome MqttClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceRequest&;
    using Resp = DescribeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeInstanceOutcomeCallable MqttClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOutcome>>();
    DescribeInstanceAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeInstanceRequest&,
        DescribeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeMessageByTopicOutcome MqttClient::DescribeMessageByTopic(const DescribeMessageByTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageByTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageByTopicResponse rsp = DescribeMessageByTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageByTopicOutcome(rsp);
        else
            return DescribeMessageByTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageByTopicOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeMessageByTopicAsync(const DescribeMessageByTopicRequest& request, const DescribeMessageByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageByTopicRequest&;
    using Resp = DescribeMessageByTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageByTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeMessageByTopicOutcomeCallable MqttClient::DescribeMessageByTopicCallable(const DescribeMessageByTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageByTopicOutcome>>();
    DescribeMessageByTopicAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeMessageByTopicRequest&,
        DescribeMessageByTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeMessageDetailsOutcome MqttClient::DescribeMessageDetails(const DescribeMessageDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageDetailsResponse rsp = DescribeMessageDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageDetailsOutcome(rsp);
        else
            return DescribeMessageDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageDetailsOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeMessageDetailsAsync(const DescribeMessageDetailsRequest& request, const DescribeMessageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageDetailsRequest&;
    using Resp = DescribeMessageDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeMessageDetailsOutcomeCallable MqttClient::DescribeMessageDetailsCallable(const DescribeMessageDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageDetailsOutcome>>();
    DescribeMessageDetailsAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeMessageDetailsRequest&,
        DescribeMessageDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeMessageEnrichmentRulesOutcome MqttClient::DescribeMessageEnrichmentRules(const DescribeMessageEnrichmentRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageEnrichmentRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageEnrichmentRulesResponse rsp = DescribeMessageEnrichmentRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageEnrichmentRulesOutcome(rsp);
        else
            return DescribeMessageEnrichmentRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageEnrichmentRulesOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeMessageEnrichmentRulesAsync(const DescribeMessageEnrichmentRulesRequest& request, const DescribeMessageEnrichmentRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageEnrichmentRulesRequest&;
    using Resp = DescribeMessageEnrichmentRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageEnrichmentRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeMessageEnrichmentRulesOutcomeCallable MqttClient::DescribeMessageEnrichmentRulesCallable(const DescribeMessageEnrichmentRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageEnrichmentRulesOutcome>>();
    DescribeMessageEnrichmentRulesAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeMessageEnrichmentRulesRequest&,
        DescribeMessageEnrichmentRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeTopicOutcome MqttClient::DescribeTopic(const DescribeTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicResponse rsp = DescribeTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicOutcome(rsp);
        else
            return DescribeTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeTopicAsync(const DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicRequest&;
    using Resp = DescribeTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeTopicOutcomeCallable MqttClient::DescribeTopicCallable(const DescribeTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicOutcome>>();
    DescribeTopicAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeTopicRequest&,
        DescribeTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeUserListOutcome MqttClient::DescribeUserList(const DescribeUserListRequest &request)
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

void MqttClient::DescribeUserListAsync(const DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MqttClient::DescribeUserListOutcomeCallable MqttClient::DescribeUserListCallable(const DescribeUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserListOutcome>>();
    DescribeUserListAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeUserListRequest&,
        DescribeUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::KickOutClientOutcome MqttClient::KickOutClient(const KickOutClientRequest &request)
{
    auto outcome = MakeRequest(request, "KickOutClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KickOutClientResponse rsp = KickOutClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KickOutClientOutcome(rsp);
        else
            return KickOutClientOutcome(o.GetError());
    }
    else
    {
        return KickOutClientOutcome(outcome.GetError());
    }
}

void MqttClient::KickOutClientAsync(const KickOutClientRequest& request, const KickOutClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KickOutClientRequest&;
    using Resp = KickOutClientResponse;

    DoRequestAsync<Req, Resp>(
        "KickOutClient", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::KickOutClientOutcomeCallable MqttClient::KickOutClientCallable(const KickOutClientRequest &request)
{
    const auto prom = std::make_shared<std::promise<KickOutClientOutcome>>();
    KickOutClientAsync(
    request,
    [prom](
        const MqttClient*,
        const KickOutClientRequest&,
        KickOutClientOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::ModifyAuthorizationPolicyOutcome MqttClient::ModifyAuthorizationPolicy(const ModifyAuthorizationPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuthorizationPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuthorizationPolicyResponse rsp = ModifyAuthorizationPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuthorizationPolicyOutcome(rsp);
        else
            return ModifyAuthorizationPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyAuthorizationPolicyOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyAuthorizationPolicyAsync(const ModifyAuthorizationPolicyRequest& request, const ModifyAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAuthorizationPolicyRequest&;
    using Resp = ModifyAuthorizationPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAuthorizationPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyAuthorizationPolicyOutcomeCallable MqttClient::ModifyAuthorizationPolicyCallable(const ModifyAuthorizationPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuthorizationPolicyOutcome>>();
    ModifyAuthorizationPolicyAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyAuthorizationPolicyRequest&,
        ModifyAuthorizationPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::ModifyInstanceOutcome MqttClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceRequest&;
    using Resp = ModifyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyInstanceOutcomeCallable MqttClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::ModifyMessageEnrichmentRuleOutcome MqttClient::ModifyMessageEnrichmentRule(const ModifyMessageEnrichmentRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMessageEnrichmentRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMessageEnrichmentRuleResponse rsp = ModifyMessageEnrichmentRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMessageEnrichmentRuleOutcome(rsp);
        else
            return ModifyMessageEnrichmentRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyMessageEnrichmentRuleOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyMessageEnrichmentRuleAsync(const ModifyMessageEnrichmentRuleRequest& request, const ModifyMessageEnrichmentRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMessageEnrichmentRuleRequest&;
    using Resp = ModifyMessageEnrichmentRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMessageEnrichmentRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyMessageEnrichmentRuleOutcomeCallable MqttClient::ModifyMessageEnrichmentRuleCallable(const ModifyMessageEnrichmentRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMessageEnrichmentRuleOutcome>>();
    ModifyMessageEnrichmentRuleAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyMessageEnrichmentRuleRequest&,
        ModifyMessageEnrichmentRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::ModifyUserOutcome MqttClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserRequest&;
    using Resp = ModifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyUserOutcomeCallable MqttClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::UpdateAuthorizationPolicyPriorityOutcome MqttClient::UpdateAuthorizationPolicyPriority(const UpdateAuthorizationPolicyPriorityRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAuthorizationPolicyPriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAuthorizationPolicyPriorityResponse rsp = UpdateAuthorizationPolicyPriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAuthorizationPolicyPriorityOutcome(rsp);
        else
            return UpdateAuthorizationPolicyPriorityOutcome(o.GetError());
    }
    else
    {
        return UpdateAuthorizationPolicyPriorityOutcome(outcome.GetError());
    }
}

void MqttClient::UpdateAuthorizationPolicyPriorityAsync(const UpdateAuthorizationPolicyPriorityRequest& request, const UpdateAuthorizationPolicyPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAuthorizationPolicyPriorityRequest&;
    using Resp = UpdateAuthorizationPolicyPriorityResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAuthorizationPolicyPriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::UpdateAuthorizationPolicyPriorityOutcomeCallable MqttClient::UpdateAuthorizationPolicyPriorityCallable(const UpdateAuthorizationPolicyPriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAuthorizationPolicyPriorityOutcome>>();
    UpdateAuthorizationPolicyPriorityAsync(
    request,
    [prom](
        const MqttClient*,
        const UpdateAuthorizationPolicyPriorityRequest&,
        UpdateAuthorizationPolicyPriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::UpdateMessageEnrichmentRulePriorityOutcome MqttClient::UpdateMessageEnrichmentRulePriority(const UpdateMessageEnrichmentRulePriorityRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateMessageEnrichmentRulePriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateMessageEnrichmentRulePriorityResponse rsp = UpdateMessageEnrichmentRulePriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateMessageEnrichmentRulePriorityOutcome(rsp);
        else
            return UpdateMessageEnrichmentRulePriorityOutcome(o.GetError());
    }
    else
    {
        return UpdateMessageEnrichmentRulePriorityOutcome(outcome.GetError());
    }
}

void MqttClient::UpdateMessageEnrichmentRulePriorityAsync(const UpdateMessageEnrichmentRulePriorityRequest& request, const UpdateMessageEnrichmentRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateMessageEnrichmentRulePriorityRequest&;
    using Resp = UpdateMessageEnrichmentRulePriorityResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateMessageEnrichmentRulePriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::UpdateMessageEnrichmentRulePriorityOutcomeCallable MqttClient::UpdateMessageEnrichmentRulePriorityCallable(const UpdateMessageEnrichmentRulePriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateMessageEnrichmentRulePriorityOutcome>>();
    UpdateMessageEnrichmentRulePriorityAsync(
    request,
    [prom](
        const MqttClient*,
        const UpdateMessageEnrichmentRulePriorityRequest&,
        UpdateMessageEnrichmentRulePriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

