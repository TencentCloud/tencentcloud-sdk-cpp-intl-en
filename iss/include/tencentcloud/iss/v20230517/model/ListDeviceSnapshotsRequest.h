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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESNAPSHOTSREQUEST_H_

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
                * ListDeviceSnapshots request structure.
                */
                class ListDeviceSnapshotsRequest : public AbstractModel
                {
                public:
                    ListDeviceSnapshotsRequest();
                    ~ListDeviceSnapshotsRequest() = default;
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
                     * 获取Device ID (this field is not effective yet)
                     * @return DeviceId Device ID (this field is not effective yet)
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID (this field is not effective yet)
                     * @param _deviceId Device ID (this field is not effective yet)
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Query start time. Default query: on the day.
                     * @return Start Query start time. Default query: on the day.
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置Query start time. Default query: on the day.
                     * @param _start Query start time. Default query: on the day.
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取Query end time. Default query: on the day.
                     * @return End Query end time. Default query: on the day.
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置Query end time. Default query: on the day.
                     * @param _end Query end time. Default query: on the day.
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取Page number, which is 1 by default.
                     * @return PageNumber Page number, which is 1 by default.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number, which is 1 by default.
                     * @param _pageNumber Page number, which is 1 by default.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Pagination size. Default: 200. Maximum: 2000
                     * @return PageSize Pagination size. Default: 200. Maximum: 2000
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Pagination size. Default: 200. Maximum: 2000
                     * @param _pageSize Pagination size. Default: 200. Maximum: 2000
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Device ID (this field is not effective yet)
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Query start time. Default query: on the day.
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * Query end time. Default query: on the day.
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * Page number, which is 1 by default.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Pagination size. Default: 200. Maximum: 2000
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESNAPSHOTSREQUEST_H_
