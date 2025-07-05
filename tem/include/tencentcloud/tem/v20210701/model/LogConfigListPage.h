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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGLISTPAGE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGLISTPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/LogConfig.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * List of LogConfig
                */
                class LogConfigListPage : public AbstractModel
                {
                public:
                    LogConfigListPage();
                    ~LogConfigListPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Records Record
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LogConfig> GetRecords() const;

                    /**
                     * 设置Record
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _records Record
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecords(const std::vector<LogConfig>& _records);

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

                private:

                    /**
                     * Record
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<LogConfig> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Paging cursor
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_continueToken;
                    bool m_continueTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGLISTPAGE_H_
