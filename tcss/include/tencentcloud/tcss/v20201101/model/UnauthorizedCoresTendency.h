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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_UNAUTHORIZEDCORESTENDENCY_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_UNAUTHORIZEDCORESTENDENCY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Trend of unlicensed cores
                */
                class UnauthorizedCoresTendency : public AbstractModel
                {
                public:
                    UnauthorizedCoresTendency();
                    ~UnauthorizedCoresTendency() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date
                     * @return DateTime Date
                     * 
                     */
                    std::string GetDateTime() const;

                    /**
                     * 设置Date
                     * @param _dateTime Date
                     * 
                     */
                    void SetDateTime(const std::string& _dateTime);

                    /**
                     * 判断参数 DateTime 是否已赋值
                     * @return DateTime 是否已赋值
                     * 
                     */
                    bool DateTimeHasBeenSet() const;

                    /**
                     * 获取Number of unlicensed cores
                     * @return CoresCount Number of unlicensed cores
                     * 
                     */
                    int64_t GetCoresCount() const;

                    /**
                     * 设置Number of unlicensed cores
                     * @param _coresCount Number of unlicensed cores
                     * 
                     */
                    void SetCoresCount(const int64_t& _coresCount);

                    /**
                     * 判断参数 CoresCount 是否已赋值
                     * @return CoresCount 是否已赋值
                     * 
                     */
                    bool CoresCountHasBeenSet() const;

                private:

                    /**
                     * Date
                     */
                    std::string m_dateTime;
                    bool m_dateTimeHasBeenSet;

                    /**
                     * Number of unlicensed cores
                     */
                    int64_t m_coresCount;
                    bool m_coresCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_UNAUTHORIZEDCORESTENDENCY_H_
