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

#include <tencentcloud/redis/v20180412/RedisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Redis::V20180412;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-12";
    const string ENDPOINT = "redis.tencentcloudapi.com";
}

RedisClient::RedisClient(const Credential &credential, const string &region) :
    RedisClient(credential, region, ClientProfile())
{
}

RedisClient::RedisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RedisClient::DescribeInstanceAccountOutcome RedisClient::DescribeInstanceAccount(const DescribeInstanceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceAccountResponse rsp = DescribeInstanceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceAccountOutcome(rsp);
        else
            return DescribeInstanceAccountOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceAccountOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceAccountAsync(const DescribeInstanceAccountRequest& request, const DescribeInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceAccountOutcomeCallable RedisClient::DescribeInstanceAccountCallable(const DescribeInstanceAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceAccountOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorBigKeyOutcome RedisClient::DescribeInstanceMonitorBigKey(const DescribeInstanceMonitorBigKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorBigKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorBigKeyResponse rsp = DescribeInstanceMonitorBigKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorBigKeyOutcome(rsp);
        else
            return DescribeInstanceMonitorBigKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorBigKeyOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorBigKeyAsync(const DescribeInstanceMonitorBigKeyRequest& request, const DescribeInstanceMonitorBigKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorBigKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorBigKeyOutcomeCallable RedisClient::DescribeInstanceMonitorBigKeyCallable(const DescribeInstanceMonitorBigKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorBigKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorBigKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorBigKeySizeDistOutcome RedisClient::DescribeInstanceMonitorBigKeySizeDist(const DescribeInstanceMonitorBigKeySizeDistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorBigKeySizeDist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorBigKeySizeDistResponse rsp = DescribeInstanceMonitorBigKeySizeDistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorBigKeySizeDistOutcome(rsp);
        else
            return DescribeInstanceMonitorBigKeySizeDistOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorBigKeySizeDistOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorBigKeySizeDistAsync(const DescribeInstanceMonitorBigKeySizeDistRequest& request, const DescribeInstanceMonitorBigKeySizeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorBigKeySizeDist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorBigKeySizeDistOutcomeCallable RedisClient::DescribeInstanceMonitorBigKeySizeDistCallable(const DescribeInstanceMonitorBigKeySizeDistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorBigKeySizeDistOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorBigKeySizeDist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorBigKeyTypeDistOutcome RedisClient::DescribeInstanceMonitorBigKeyTypeDist(const DescribeInstanceMonitorBigKeyTypeDistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorBigKeyTypeDist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorBigKeyTypeDistResponse rsp = DescribeInstanceMonitorBigKeyTypeDistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorBigKeyTypeDistOutcome(rsp);
        else
            return DescribeInstanceMonitorBigKeyTypeDistOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorBigKeyTypeDistOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorBigKeyTypeDistAsync(const DescribeInstanceMonitorBigKeyTypeDistRequest& request, const DescribeInstanceMonitorBigKeyTypeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorBigKeyTypeDist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorBigKeyTypeDistOutcomeCallable RedisClient::DescribeInstanceMonitorBigKeyTypeDistCallable(const DescribeInstanceMonitorBigKeyTypeDistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorBigKeyTypeDistOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorBigKeyTypeDist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorHotKeyOutcome RedisClient::DescribeInstanceMonitorHotKey(const DescribeInstanceMonitorHotKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorHotKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorHotKeyResponse rsp = DescribeInstanceMonitorHotKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorHotKeyOutcome(rsp);
        else
            return DescribeInstanceMonitorHotKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorHotKeyOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorHotKeyAsync(const DescribeInstanceMonitorHotKeyRequest& request, const DescribeInstanceMonitorHotKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorHotKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorHotKeyOutcomeCallable RedisClient::DescribeInstanceMonitorHotKeyCallable(const DescribeInstanceMonitorHotKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorHotKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorHotKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorSIPOutcome RedisClient::DescribeInstanceMonitorSIP(const DescribeInstanceMonitorSIPRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorSIP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorSIPResponse rsp = DescribeInstanceMonitorSIPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorSIPOutcome(rsp);
        else
            return DescribeInstanceMonitorSIPOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorSIPOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorSIPAsync(const DescribeInstanceMonitorSIPRequest& request, const DescribeInstanceMonitorSIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorSIP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorSIPOutcomeCallable RedisClient::DescribeInstanceMonitorSIPCallable(const DescribeInstanceMonitorSIPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorSIPOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorSIP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorTookDistOutcome RedisClient::DescribeInstanceMonitorTookDist(const DescribeInstanceMonitorTookDistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorTookDist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorTookDistResponse rsp = DescribeInstanceMonitorTookDistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorTookDistOutcome(rsp);
        else
            return DescribeInstanceMonitorTookDistOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorTookDistOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorTookDistAsync(const DescribeInstanceMonitorTookDistRequest& request, const DescribeInstanceMonitorTookDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorTookDist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorTookDistOutcomeCallable RedisClient::DescribeInstanceMonitorTookDistCallable(const DescribeInstanceMonitorTookDistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorTookDistOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorTookDist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorTopNCmdOutcome RedisClient::DescribeInstanceMonitorTopNCmd(const DescribeInstanceMonitorTopNCmdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorTopNCmd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorTopNCmdResponse rsp = DescribeInstanceMonitorTopNCmdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorTopNCmdOutcome(rsp);
        else
            return DescribeInstanceMonitorTopNCmdOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorTopNCmdOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorTopNCmdAsync(const DescribeInstanceMonitorTopNCmdRequest& request, const DescribeInstanceMonitorTopNCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorTopNCmd(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorTopNCmdOutcomeCallable RedisClient::DescribeInstanceMonitorTopNCmdCallable(const DescribeInstanceMonitorTopNCmdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorTopNCmdOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorTopNCmd(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorTopNCmdTookOutcome RedisClient::DescribeInstanceMonitorTopNCmdTook(const DescribeInstanceMonitorTopNCmdTookRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorTopNCmdTook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorTopNCmdTookResponse rsp = DescribeInstanceMonitorTopNCmdTookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorTopNCmdTookOutcome(rsp);
        else
            return DescribeInstanceMonitorTopNCmdTookOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorTopNCmdTookOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorTopNCmdTookAsync(const DescribeInstanceMonitorTopNCmdTookRequest& request, const DescribeInstanceMonitorTopNCmdTookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorTopNCmdTook(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorTopNCmdTookOutcomeCallable RedisClient::DescribeInstanceMonitorTopNCmdTookCallable(const DescribeInstanceMonitorTopNCmdTookRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorTopNCmdTookOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorTopNCmdTook(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeMaintenanceWindowOutcome RedisClient::DescribeMaintenanceWindow(const DescribeMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintenanceWindowResponse rsp = DescribeMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintenanceWindowOutcome(rsp);
        else
            return DescribeMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintenanceWindowOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeMaintenanceWindowAsync(const DescribeMaintenanceWindowRequest& request, const DescribeMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMaintenanceWindow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeMaintenanceWindowOutcomeCallable RedisClient::DescribeMaintenanceWindowCallable(const DescribeMaintenanceWindowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMaintenanceWindowOutcome()>>(
        [this, request]()
        {
            return this->DescribeMaintenanceWindow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeProductInfoOutcome RedisClient::DescribeProductInfo(const DescribeProductInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductInfoResponse rsp = DescribeProductInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductInfoOutcome(rsp);
        else
            return DescribeProductInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProductInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeProductInfoAsync(const DescribeProductInfoRequest& request, const DescribeProductInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeProductInfoOutcomeCallable RedisClient::DescribeProductInfoCallable(const DescribeProductInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeReplicationGroupOutcome RedisClient::DescribeReplicationGroup(const DescribeReplicationGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicationGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicationGroupResponse rsp = DescribeReplicationGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicationGroupOutcome(rsp);
        else
            return DescribeReplicationGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicationGroupOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeReplicationGroupAsync(const DescribeReplicationGroupRequest& request, const DescribeReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReplicationGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeReplicationGroupOutcomeCallable RedisClient::DescribeReplicationGroupCallable(const DescribeReplicationGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReplicationGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeReplicationGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeSlowLogOutcome RedisClient::DescribeSlowLog(const DescribeSlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogResponse rsp = DescribeSlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogOutcome(rsp);
        else
            return DescribeSlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeSlowLogAsync(const DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeSlowLogOutcomeCallable RedisClient::DescribeSlowLogCallable(const DescribeSlowLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::InquiryPriceCreateInstanceOutcome RedisClient::InquiryPriceCreateInstance(const InquiryPriceCreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateInstanceResponse rsp = InquiryPriceCreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateInstanceOutcome(rsp);
        else
            return InquiryPriceCreateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::InquiryPriceCreateInstanceAsync(const InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::InquiryPriceCreateInstanceOutcomeCallable RedisClient::InquiryPriceCreateInstanceCallable(const InquiryPriceCreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::InquiryPriceUpgradeInstanceOutcome RedisClient::InquiryPriceUpgradeInstance(const InquiryPriceUpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpgradeInstanceResponse rsp = InquiryPriceUpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpgradeInstanceOutcome(rsp);
        else
            return InquiryPriceUpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpgradeInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::InquiryPriceUpgradeInstanceAsync(const InquiryPriceUpgradeInstanceRequest& request, const InquiryPriceUpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpgradeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::InquiryPriceUpgradeInstanceOutcomeCallable RedisClient::InquiryPriceUpgradeInstanceCallable(const InquiryPriceUpgradeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpgradeInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpgradeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::ModfiyInstancePasswordOutcome RedisClient::ModfiyInstancePassword(const ModfiyInstancePasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModfiyInstancePassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModfiyInstancePasswordResponse rsp = ModfiyInstancePasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModfiyInstancePasswordOutcome(rsp);
        else
            return ModfiyInstancePasswordOutcome(o.GetError());
    }
    else
    {
        return ModfiyInstancePasswordOutcome(outcome.GetError());
    }
}

void RedisClient::ModfiyInstancePasswordAsync(const ModfiyInstancePasswordRequest& request, const ModfiyInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModfiyInstancePassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ModfiyInstancePasswordOutcomeCallable RedisClient::ModfiyInstancePasswordCallable(const ModfiyInstancePasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModfiyInstancePasswordOutcome()>>(
        [this, request]()
        {
            return this->ModfiyInstancePassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

