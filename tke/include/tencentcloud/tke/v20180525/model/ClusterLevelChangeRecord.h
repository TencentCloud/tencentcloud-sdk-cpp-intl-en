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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELCHANGERECORD_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELCHANGERECORD_H_

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
                * Cluster model adjustment history
                */
                class ClusterLevelChangeRecord : public AbstractModel
                {
                public:
                    ClusterLevelChangeRecord();
                    ~ClusterLevelChangeRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID
                     * @return ID Record ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置Record ID
                     * @param _iD Record ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterID Cluster ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterID Cluster ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取Status (valid values: `trading`, `upgrading`, `success`, `failed`)
                     * @return Status Status (valid values: `trading`, `upgrading`, `success`, `failed`)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status (valid values: `trading`, `upgrading`, `success`, `failed`)
                     * @param _status Status (valid values: `trading`, `upgrading`, `success`, `failed`)
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
                     * 获取Status description
                     * @return Message Status description
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Status description
                     * @param _message Status description
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
                     * 获取Original model
                     * @return OldLevel Original model
                     * 
                     */
                    std::string GetOldLevel() const;

                    /**
                     * 设置Original model
                     * @param _oldLevel Original model
                     * 
                     */
                    void SetOldLevel(const std::string& _oldLevel);

                    /**
                     * 判断参数 OldLevel 是否已赋值
                     * @return OldLevel 是否已赋值
                     * 
                     */
                    bool OldLevelHasBeenSet() const;

                    /**
                     * 获取New model
                     * @return NewLevel New model
                     * 
                     */
                    std::string GetNewLevel() const;

                    /**
                     * 设置New model
                     * @param _newLevel New model
                     * 
                     */
                    void SetNewLevel(const std::string& _newLevel);

                    /**
                     * 判断参数 NewLevel 是否已赋值
                     * @return NewLevel 是否已赋值
                     * 
                     */
                    bool NewLevelHasBeenSet() const;

                    /**
                     * 获取Trigger type (valid values: `manual`, `auto`)
                     * @return TriggerType Trigger type (valid values: `manual`, `auto`)
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置Trigger type (valid values: `manual`, `auto`)
                     * @param _triggerType Trigger type (valid values: `manual`, `auto`)
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedAt Creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time
                     * @param _createdAt Creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartedAt Start time
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置Start time
                     * @param _startedAt Start time
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndedAt End time
                     * 
                     */
                    std::string GetEndedAt() const;

                    /**
                     * 设置End time
                     * @param _endedAt End time
                     * 
                     */
                    void SetEndedAt(const std::string& _endedAt);

                    /**
                     * 判断参数 EndedAt 是否已赋值
                     * @return EndedAt 是否已赋值
                     * 
                     */
                    bool EndedAtHasBeenSet() const;

                private:

                    /**
                     * Record ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Status (valid values: `trading`, `upgrading`, `success`, `failed`)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Original model
                     */
                    std::string m_oldLevel;
                    bool m_oldLevelHasBeenSet;

                    /**
                     * New model
                     */
                    std::string m_newLevel;
                    bool m_newLevelHasBeenSet;

                    /**
                     * Trigger type (valid values: `manual`, `auto`)
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endedAt;
                    bool m_endedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELCHANGERECORD_H_
