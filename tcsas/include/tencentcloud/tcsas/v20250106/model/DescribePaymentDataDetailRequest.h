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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEPAYMENTDATADETAILREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEPAYMENTDATADETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribePaymentDataDetail request structure.
                */
                class DescribePaymentDataDetailRequest : public AbstractModel
                {
                public:
                    DescribePaymentDataDetailRequest();
                    ~DescribePaymentDataDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return TimeBegin Start time
                     * 
                     */
                    int64_t GetTimeBegin() const;

                    /**
                     * 设置Start time
                     * @param _timeBegin Start time
                     * 
                     */
                    void SetTimeBegin(const int64_t& _timeBegin);

                    /**
                     * 判断参数 TimeBegin 是否已赋值
                     * @return TimeBegin 是否已赋值
                     * 
                     */
                    bool TimeBeginHasBeenSet() const;

                    /**
                     * 获取Mini program appid
                     * @return MNPIds Mini program appid
                     * 
                     */
                    std::vector<std::string> GetMNPIds() const;

                    /**
                     * 设置Mini program appid
                     * @param _mNPIds Mini program appid
                     * 
                     */
                    void SetMNPIds(const std::vector<std::string>& _mNPIds);

                    /**
                     * 判断参数 MNPIds 是否已赋值
                     * @return MNPIds 是否已赋值
                     * 
                     */
                    bool MNPIdsHasBeenSet() const;

                    /**
                     * 获取Tenant ID
                     * @return PlatformId Tenant ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Tenant ID
                     * @param _platformId Tenant ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Type: 0 Non-production data, 1 Production data
                     * @return DataType Type: 0 Non-production data, 1 Production data
                     * 
                     */
                    int64_t GetDataType() const;

                    /**
                     * 设置Type: 0 Non-production data, 1 Production data
                     * @param _dataType Type: 0 Non-production data, 1 Production data
                     * 
                     */
                    void SetDataType(const int64_t& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return TimeEnd End time
                     * 
                     */
                    int64_t GetTimeEnd() const;

                    /**
                     * 设置End time
                     * @param _timeEnd End time
                     * 
                     */
                    void SetTimeEnd(const int64_t& _timeEnd);

                    /**
                     * 判断参数 TimeEnd 是否已赋值
                     * @return TimeEnd 是否已赋值
                     * 
                     */
                    bool TimeEndHasBeenSet() const;

                    /**
                     * 获取Operating system: 0 All, 2 Android, 3 iOS
                     * @return Platform Operating system: 0 All, 2 Android, 3 iOS
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置Operating system: 0 All, 2 Android, 3 iOS
                     * @param _platform Operating system: 0 All, 2 Android, 3 iOS
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    int64_t m_timeBegin;
                    bool m_timeBeginHasBeenSet;

                    /**
                     * Mini program appid
                     */
                    std::vector<std::string> m_mNPIds;
                    bool m_mNPIdsHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Type: 0 Non-production data, 1 Production data
                     */
                    int64_t m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * End time
                     */
                    int64_t m_timeEnd;
                    bool m_timeEndHasBeenSet;

                    /**
                     * Operating system: 0 All, 2 Android, 3 iOS
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEPAYMENTDATADETAILREQUEST_H_
