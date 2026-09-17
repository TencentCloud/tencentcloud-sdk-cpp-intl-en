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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyEventConfig request structure.
                */
                class ModifyEventConfigRequest : public AbstractModel
                {
                public:
                    ModifyEventConfigRequest();
                    ~ModifyEventConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Mode 
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置
                     * @param _mode 
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return NotificationUrl 
                     * 
                     */
                    std::string GetNotificationUrl() const;

                    /**
                     * 设置
                     * @param _notificationUrl 
                     * 
                     */
                    void SetNotificationUrl(const std::string& _notificationUrl);

                    /**
                     * 判断参数 NotificationUrl 是否已赋值
                     * @return NotificationUrl 是否已赋值
                     * 
                     */
                    bool NotificationUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return UploadMediaCompleteEventSwitch 
                     * 
                     */
                    std::string GetUploadMediaCompleteEventSwitch() const;

                    /**
                     * 设置
                     * @param _uploadMediaCompleteEventSwitch 
                     * 
                     */
                    void SetUploadMediaCompleteEventSwitch(const std::string& _uploadMediaCompleteEventSwitch);

                    /**
                     * 判断参数 UploadMediaCompleteEventSwitch 是否已赋值
                     * @return UploadMediaCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool UploadMediaCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return DeleteMediaCompleteEventSwitch 
                     * 
                     */
                    std::string GetDeleteMediaCompleteEventSwitch() const;

                    /**
                     * 设置
                     * @param _deleteMediaCompleteEventSwitch 
                     * 
                     */
                    void SetDeleteMediaCompleteEventSwitch(const std::string& _deleteMediaCompleteEventSwitch);

                    /**
                     * 判断参数 DeleteMediaCompleteEventSwitch 是否已赋值
                     * @return DeleteMediaCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool DeleteMediaCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return PersistenceCompleteEventSwitch 
                     * 
                     */
                    std::string GetPersistenceCompleteEventSwitch() const;

                    /**
                     * 设置
                     * @param _persistenceCompleteEventSwitch 
                     * 
                     */
                    void SetPersistenceCompleteEventSwitch(const std::string& _persistenceCompleteEventSwitch);

                    /**
                     * 判断参数 PersistenceCompleteEventSwitch 是否已赋值
                     * @return PersistenceCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool PersistenceCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return SignKey 
                     * 
                     */
                    std::string GetSignKey() const;

                    /**
                     * 设置
                     * @param _signKey 
                     * 
                     */
                    void SetSignKey(const std::string& _signKey);

                    /**
                     * 判断参数 SignKey 是否已赋值
                     * @return SignKey 是否已赋值
                     * 
                     */
                    bool SignKeyHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_notificationUrl;
                    bool m_notificationUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_uploadMediaCompleteEventSwitch;
                    bool m_uploadMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_deleteMediaCompleteEventSwitch;
                    bool m_deleteMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_persistenceCompleteEventSwitch;
                    bool m_persistenceCompleteEventSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_signKey;
                    bool m_signKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_
