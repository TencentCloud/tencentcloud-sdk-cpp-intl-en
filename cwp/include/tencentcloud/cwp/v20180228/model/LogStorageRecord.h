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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LOGSTORAGERECORD_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LOGSTORAGERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Record of stored log size
                */
                class LogStorageRecord : public AbstractModel
                {
                public:
                    LogStorageRecord();
                    ~LogStorageRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Year and month
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Month Year and month
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Year and month
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _month Year and month
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取Used storage capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsedSize Used storage capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUsedSize() const;

                    /**
                     * 设置Used storage capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usedSize Used storage capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsedSize(const uint64_t& _usedSize);

                    /**
                     * 判断参数 UsedSize 是否已赋值
                     * @return UsedSize 是否已赋值
                     * 
                     */
                    bool UsedSizeHasBeenSet() const;

                    /**
                     * 获取Total capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InquireSize Total capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInquireSize() const;

                    /**
                     * 设置Total capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inquireSize Total capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInquireSize(const uint64_t& _inquireSize);

                    /**
                     * 判断参数 InquireSize 是否已赋值
                     * @return InquireSize 是否已赋值
                     * 
                     */
                    bool InquireSizeHasBeenSet() const;

                private:

                    /**
                     * Year and month
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Used storage capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_usedSize;
                    bool m_usedSizeHasBeenSet;

                    /**
                     * Total capacity, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_inquireSize;
                    bool m_inquireSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LOGSTORAGERECORD_H_
