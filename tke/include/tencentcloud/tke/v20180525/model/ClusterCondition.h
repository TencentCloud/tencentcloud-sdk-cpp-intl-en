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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCONDITION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Cluster creation process
                */
                class ClusterCondition : public AbstractModel
                {
                public:
                    ClusterCondition();
                    ~ClusterCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Process type
                     * @return Type Process type
                     */
                    std::string GetType() const;

                    /**
                     * 设置Process type
                     * @param Type Process type
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Process status
                     * @return Status Process status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Process status
                     * @param Status Process status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Last time when the status is probed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LastProbeTime Last time when the status is probed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLastProbeTime() const;

                    /**
                     * 设置Last time when the status is probed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LastProbeTime Last time when the status is probed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLastProbeTime(const std::string& _lastProbeTime);

                    /**
                     * 判断参数 LastProbeTime 是否已赋值
                     * @return LastProbeTime 是否已赋值
                     */
                    bool LastProbeTimeHasBeenSet() const;

                    /**
                     * 获取Last time when transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LastTransitionTime Last time when transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLastTransitionTime() const;

                    /**
                     * 设置Last time when transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LastTransitionTime Last time when transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLastTransitionTime(const std::string& _lastTransitionTime);

                    /**
                     * 判断参数 LastTransitionTime 是否已赋值
                     * @return LastTransitionTime 是否已赋值
                     */
                    bool LastTransitionTimeHasBeenSet() const;

                    /**
                     * 获取Reasons for transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Reason Reasons for transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reasons for transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Reason Reasons for transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取More information on transition
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Message More information on transition
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置More information on transition
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Message More information on transition
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Process type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Process status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Last time when the status is probed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_lastProbeTime;
                    bool m_lastProbeTimeHasBeenSet;

                    /**
                     * Last time when transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_lastTransitionTime;
                    bool m_lastTransitionTimeHasBeenSet;

                    /**
                     * Reasons for transiting to the process
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * More information on transition
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCONDITION_H_
