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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ALERTCHANNELRECORD_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ALERTCHANNELRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Alert notification recipient group.
                */
                class AlertChannelRecord : public AbstractModel
                {
                public:
                    AlertChannelRecord();
                    ~AlertChannelRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return NoticeId Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _noticeId Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取Consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return AMPConsumerId Consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetAMPConsumerId() const;

                    /**
                     * 设置Consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _aMPConsumerId Consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAMPConsumerId(const std::string& _aMPConsumerId);

                    /**
                     * 判断参数 AMPConsumerId 是否已赋值
                     * @return AMPConsumerId 是否已赋值
                     * 
                     */
                    bool AMPConsumerIdHasBeenSet() const;

                    /**
                     * 获取Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return ProjectId Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _projectId Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Status.

Note: This field may return null, indicating that no valid value is found.
                     * @return Status Status.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status.

Note: This field may return null, indicating that no valid value is found.
                     * @param _status Status.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Create time.

Note: This field may return null, indicating that no valid value is found.
                     * @return CreatedAt Create time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Create time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _createdAt Create time.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Update time.

Note: This field may return null, indicating that no valid value is found.
                     * @return UpdatedAt Update time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _updatedAt Update time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取App ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return AppId App ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置App ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _appId App ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @return Uin Account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @param _uin Account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @return SubAccountUin Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @param _subAccountUin Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                private:

                    /**
                     * Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * Consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_aMPConsumerId;
                    bool m_aMPConsumerIdHasBeenSet;

                    /**
                     * Project ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Status.

Note: This field may return null, indicating that no valid value is found.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Create time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * App ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Account uin.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ALERTCHANNELRECORD_H_
