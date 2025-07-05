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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBECONFIGDATALISTPAGE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBECONFIGDATALISTPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/ConfigData.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Query the list of configurations
                */
                class DescribeConfigDataListPage : public AbstractModel
                {
                public:
                    DescribeConfigDataListPage();
                    ~DescribeConfigDataListPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record
                     * @return Records Record
                     * 
                     */
                    std::vector<ConfigData> GetRecords() const;

                    /**
                     * 设置Record
                     * @param _records Record
                     * 
                     */
                    void SetRecords(const std::vector<ConfigData>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取Paging cursor
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ContinueToken Paging cursor
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContinueToken() const;

                    /**
                     * 设置Paging cursor
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _continueToken Paging cursor
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContinueToken(const std::string& _continueToken);

                    /**
                     * 判断参数 ContinueToken 是否已赋值
                     * @return ContinueToken 是否已赋值
                     * 
                     */
                    bool ContinueTokenHasBeenSet() const;

                    /**
                     * 获取Remaining number
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RemainingCount Remaining number
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRemainingCount() const;

                    /**
                     * 设置Remaining number
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _remainingCount Remaining number
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemainingCount(const int64_t& _remainingCount);

                    /**
                     * 判断参数 RemainingCount 是否已赋值
                     * @return RemainingCount 是否已赋值
                     * 
                     */
                    bool RemainingCountHasBeenSet() const;

                private:

                    /**
                     * Record
                     */
                    std::vector<ConfigData> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Paging cursor
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_continueToken;
                    bool m_continueTokenHasBeenSet;

                    /**
                     * Remaining number
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_remainingCount;
                    bool m_remainingCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBECONFIGDATALISTPAGE_H_
