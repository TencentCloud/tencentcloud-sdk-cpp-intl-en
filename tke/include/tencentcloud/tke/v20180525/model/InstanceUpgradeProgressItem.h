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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPROGRESSITEM_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPROGRESSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceUpgradePreCheckResult.h>
#include <tencentcloud/tke/v20180525/model/TaskStepInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Upgrade progress of a node
                */
                class InstanceUpgradeProgressItem : public AbstractModel
                {
                public:
                    InstanceUpgradeProgressItem();
                    ~InstanceUpgradeProgressItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node instance ID
                     * @return InstanceID Node instance ID
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Node instance ID
                     * @param InstanceID Node instance ID
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Task lifecycle
process: running
paused: stopped
pausing: stopping
done: completed
timeout: timed out
aborted: canceled
pending: not started
                     * @return LifeState Task lifecycle
process: running
paused: stopped
pausing: stopping
done: completed
timeout: timed out
aborted: canceled
pending: not started
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置Task lifecycle
process: running
paused: stopped
pausing: stopping
done: completed
timeout: timed out
aborted: canceled
pending: not started
                     * @param LifeState Task lifecycle
process: running
paused: stopped
pausing: stopping
done: completed
timeout: timed out
aborted: canceled
pending: not started
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取Upgrade start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return StartAt Upgrade start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Upgrade start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param StartAt Upgrade start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取Upgrade end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return EndAt Upgrade end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置Upgrade end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param EndAt Upgrade end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取Check result before upgrading
                     * @return CheckResult Check result before upgrading
                     */
                    InstanceUpgradePreCheckResult GetCheckResult() const;

                    /**
                     * 设置Check result before upgrading
                     * @param CheckResult Check result before upgrading
                     */
                    void SetCheckResult(const InstanceUpgradePreCheckResult& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取Upgrade steps details
                     * @return Detail Upgrade steps details
                     */
                    std::vector<TaskStepInfo> GetDetail() const;

                    /**
                     * 设置Upgrade steps details
                     * @param Detail Upgrade steps details
                     */
                    void SetDetail(const std::vector<TaskStepInfo>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * Node instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Task lifecycle
process: running
paused: stopped
pausing: stopping
done: completed
timeout: timed out
aborted: canceled
pending: not started
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * Upgrade start time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * Upgrade end time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * Check result before upgrading
                     */
                    InstanceUpgradePreCheckResult m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * Upgrade steps details
                     */
                    std::vector<TaskStepInfo> m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPROGRESSITEM_H_
