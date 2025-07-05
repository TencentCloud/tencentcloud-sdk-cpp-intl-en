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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_RECENTSESSIONINFO_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_RECENTSESSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * Latest session information
                */
                class RecentSessionInfo : public AbstractModel
                {
                public:
                    RecentSessionInfo();
                    ~RecentSessionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Session id.
                     * @return SessionId Session id.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session id.
                     * @param _sessionId Session id.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Remote device id.
                     * @return RemoteDeviceId Remote device id.
                     * 
                     */
                    std::string GetRemoteDeviceId() const;

                    /**
                     * 设置Remote device id.
                     * @param _remoteDeviceId Remote device id.
                     * 
                     */
                    void SetRemoteDeviceId(const std::string& _remoteDeviceId);

                    /**
                     * 判断参数 RemoteDeviceId 是否已赋值
                     * @return RemoteDeviceId 是否已赋值
                     * 
                     */
                    bool RemoteDeviceIdHasBeenSet() const;

                    /**
                     * 获取On-Site device id.
                     * @return FieldDeviceId On-Site device id.
                     * 
                     */
                    std::string GetFieldDeviceId() const;

                    /**
                     * 设置On-Site device id.
                     * @param _fieldDeviceId On-Site device id.
                     * 
                     */
                    void SetFieldDeviceId(const std::string& _fieldDeviceId);

                    /**
                     * 判断参数 FieldDeviceId 是否已赋值
                     * @return FieldDeviceId 是否已赋值
                     * 
                     */
                    bool FieldDeviceIdHasBeenSet() const;

                    /**
                     * 获取Target resolution.
                     * @return Resolution Target resolution.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Target resolution.
                     * @param _resolution Target resolution.
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Session start time.
                     * @return StartTime Session start time.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Session start time.
                     * @param _startTime Session start time.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Last updated time.
                     * @return LatestUpdateTime Last updated time.
                     * 
                     */
                    uint64_t GetLatestUpdateTime() const;

                    /**
                     * 设置Last updated time.
                     * @param _latestUpdateTime Last updated time.
                     * 
                     */
                    void SetLatestUpdateTime(const uint64_t& _latestUpdateTime);

                    /**
                     * 判断参数 LatestUpdateTime 是否已赋值
                     * @return LatestUpdateTime 是否已赋值
                     * 
                     */
                    bool LatestUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Session id.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Remote device id.
                     */
                    std::string m_remoteDeviceId;
                    bool m_remoteDeviceIdHasBeenSet;

                    /**
                     * On-Site device id.
                     */
                    std::string m_fieldDeviceId;
                    bool m_fieldDeviceIdHasBeenSet;

                    /**
                     * Target resolution.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Session start time.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Last updated time.
                     */
                    uint64_t m_latestUpdateTime;
                    bool m_latestUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_RECENTSESSIONINFO_H_
