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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESNAPSHOTREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ControlDeviceSnapshot request structure.
                */
                class ControlDeviceSnapshotRequest : public AbstractModel
                {
                public:
                    ControlDeviceSnapshotRequest();
                    ~ControlDeviceSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Number of burst shots. Range of optional values: 1–10.
                     * @return SnapNum Number of burst shots. Range of optional values: 1–10.
                     * 
                     */
                    int64_t GetSnapNum() const;

                    /**
                     * 设置Number of burst shots. Range of optional values: 1–10.
                     * @param _snapNum Number of burst shots. Range of optional values: 1–10.
                     * 
                     */
                    void SetSnapNum(const int64_t& _snapNum);

                    /**
                     * 判断参数 SnapNum 是否已赋值
                     * @return SnapNum 是否已赋值
                     * 
                     */
                    bool SnapNumHasBeenSet() const;

                    /**
                     * 获取Snapshot interval. Range of optional values: 1–1800
                     * @return Interval Snapshot interval. Range of optional values: 1–1800
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Snapshot interval. Range of optional values: 1–1800
                     * @param _interval Snapshot interval. Range of optional values: 1–1800
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Image storage period. Default value: 7 days. Only supports 7, 15, 30, 60, 90, 180, or 365 days.
                     * @return Expire Image storage period. Default value: 7 days. Only supports 7, 15, 30, 60, 90, 180, or 365 days.
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置Image storage period. Default value: 7 days. Only supports 7, 15, 30, 60, 90, 180, or 365 days.
                     * @param _expire Image storage period. Default value: 7 days. Only supports 7, 15, 30, 60, 90, 180, or 365 days.
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Number of burst shots. Range of optional values: 1–10.
                     */
                    int64_t m_snapNum;
                    bool m_snapNumHasBeenSet;

                    /**
                     * Snapshot interval. Range of optional values: 1–1800
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Image storage period. Default value: 7 days. Only supports 7, 15, 30, 60, 90, 180, or 365 days.
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESNAPSHOTREQUEST_H_
