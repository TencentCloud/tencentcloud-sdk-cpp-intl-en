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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_STATEFULSETCONDITION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_STATEFULSETCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Instance status.
                */
                class StatefulSetCondition : public AbstractModel
                {
                public:
                    StatefulSetCondition();
                    ~StatefulSetCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Reason.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reason Reason.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reason Reason.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Status of the condition, True, False or Unknown.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status of the condition, True, False or Unknown.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the condition, True, False or Unknown.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status of the condition, True, False or Unknown.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Type.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Type.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastTransitionTime Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastTransitionTime() const;

                    /**
                     * 设置Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastTransitionTime Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastTransitionTime(const std::string& _lastTransitionTime);

                    /**
                     * 判断参数 LastTransitionTime 是否已赋值
                     * @return LastTransitionTime 是否已赋值
                     * 
                     */
                    bool LastTransitionTimeHasBeenSet() const;

                    /**
                     * 获取Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastUpdateTime Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastUpdateTime Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Reason.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Status of the condition, True, False or Unknown.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Type.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastTransitionTime;
                    bool m_lastTransitionTimeHasBeenSet;

                    /**
                     * Last update time.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_STATEFULSETCONDITION_H_
