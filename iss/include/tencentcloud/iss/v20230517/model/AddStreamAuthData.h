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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDSTREAMAUTHDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDSTREAMAUTHDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Data structure returned by push/pull stream authentication settings
                */
                class AddStreamAuthData : public AbstractModel
                {
                public:
                    AddStreamAuthData();
                    ~AddStreamAuthData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication configuration ID (uuid).
                     * @return Id Authentication configuration ID (uuid).
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Authentication configuration ID (uuid).
                     * @param _id Authentication configuration ID (uuid).
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Whether to enable playback authentication. Valid values: `1`: enable, `0`: disable.
                     * @return PullState Whether to enable playback authentication. Valid values: `1`: enable, `0`: disable.
                     * 
                     */
                    int64_t GetPullState() const;

                    /**
                     * 设置Whether to enable playback authentication. Valid values: `1`: enable, `0`: disable.
                     * @param _pullState Whether to enable playback authentication. Valid values: `1`: enable, `0`: disable.
                     * 
                     */
                    void SetPullState(const int64_t& _pullState);

                    /**
                     * 判断参数 PullState 是否已赋值
                     * @return PullState 是否已赋值
                     * 
                     */
                    bool PullStateHasBeenSet() const;

                    /**
                     * 获取Playback key (alphanumeric only, length: 0-10 characters)
                     * @return PullSecret Playback key (alphanumeric only, length: 0-10 characters)
                     * 
                     */
                    std::string GetPullSecret() const;

                    /**
                     * 设置Playback key (alphanumeric only, length: 0-10 characters)
                     * @param _pullSecret Playback key (alphanumeric only, length: 0-10 characters)
                     * 
                     */
                    void SetPullSecret(const std::string& _pullSecret);

                    /**
                     * 判断参数 PullSecret 是否已赋值
                     * @return PullSecret 是否已赋值
                     * 
                     */
                    bool PullSecretHasBeenSet() const;

                    /**
                     * 获取Playback expiration time (unit: minute)
                     * @return PullExpired Playback expiration time (unit: minute)
                     * 
                     */
                    int64_t GetPullExpired() const;

                    /**
                     * 设置Playback expiration time (unit: minute)
                     * @param _pullExpired Playback expiration time (unit: minute)
                     * 
                     */
                    void SetPullExpired(const int64_t& _pullExpired);

                    /**
                     * 判断参数 PullExpired 是否已赋值
                     * @return PullExpired 是否已赋值
                     * 
                     */
                    bool PullExpiredHasBeenSet() const;

                    /**
                     * 获取Whether to enable stream authentication (1: enable, 0: disable)
                     * @return PushState Whether to enable stream authentication (1: enable, 0: disable)
                     * 
                     */
                    int64_t GetPushState() const;

                    /**
                     * 设置Whether to enable stream authentication (1: enable, 0: disable)
                     * @param _pushState Whether to enable stream authentication (1: enable, 0: disable)
                     * 
                     */
                    void SetPushState(const int64_t& _pushState);

                    /**
                     * 判断参数 PushState 是否已赋值
                     * @return PushState 是否已赋值
                     * 
                     */
                    bool PushStateHasBeenSet() const;

                    /**
                     * 获取Stream key (only alphanumeric characters are supported, with a length of 0-10 characters)
                     * @return PushSecret Stream key (only alphanumeric characters are supported, with a length of 0-10 characters)
                     * 
                     */
                    std::string GetPushSecret() const;

                    /**
                     * 设置Stream key (only alphanumeric characters are supported, with a length of 0-10 characters)
                     * @param _pushSecret Stream key (only alphanumeric characters are supported, with a length of 0-10 characters)
                     * 
                     */
                    void SetPushSecret(const std::string& _pushSecret);

                    /**
                     * 判断参数 PushSecret 是否已赋值
                     * @return PushSecret 是否已赋值
                     * 
                     */
                    bool PushSecretHasBeenSet() const;

                    /**
                     * 获取Push expiration time (unit: minute)
                     * @return PushExpired Push expiration time (unit: minute)
                     * 
                     */
                    int64_t GetPushExpired() const;

                    /**
                     * 设置Push expiration time (unit: minute)
                     * @param _pushExpired Push expiration time (unit: minute)
                     * 
                     */
                    void SetPushExpired(const int64_t& _pushExpired);

                    /**
                     * 判断参数 PushExpired 是否已赋值
                     * @return PushExpired 是否已赋值
                     * 
                     */
                    bool PushExpiredHasBeenSet() const;

                    /**
                     * 获取User ID.
                     * @return AppId User ID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User ID.
                     * @param _appId User ID.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * Authentication configuration ID (uuid).
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Whether to enable playback authentication. Valid values: `1`: enable, `0`: disable.
                     */
                    int64_t m_pullState;
                    bool m_pullStateHasBeenSet;

                    /**
                     * Playback key (alphanumeric only, length: 0-10 characters)
                     */
                    std::string m_pullSecret;
                    bool m_pullSecretHasBeenSet;

                    /**
                     * Playback expiration time (unit: minute)
                     */
                    int64_t m_pullExpired;
                    bool m_pullExpiredHasBeenSet;

                    /**
                     * Whether to enable stream authentication (1: enable, 0: disable)
                     */
                    int64_t m_pushState;
                    bool m_pushStateHasBeenSet;

                    /**
                     * Stream key (only alphanumeric characters are supported, with a length of 0-10 characters)
                     */
                    std::string m_pushSecret;
                    bool m_pushSecretHasBeenSet;

                    /**
                     * Push expiration time (unit: minute)
                     */
                    int64_t m_pushExpired;
                    bool m_pushExpiredHasBeenSet;

                    /**
                     * User ID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDSTREAMAUTHDATA_H_
