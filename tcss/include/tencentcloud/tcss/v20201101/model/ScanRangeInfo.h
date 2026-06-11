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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SCANRANGEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SCANRANGEINFO_H_

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
                * Scan Range Information
                */
                class ScanRangeInfo : public AbstractModel
                {
                public:
                    ScanRangeInfo();
                    ~ScanRangeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取true: select all;
false: partial select
                     * @return IsAll true: select all;
false: partial select
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置true: select all;
false: partial select
                     * @param _isAll true: select all;
false: partial select
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取SCAN_NORMAL: Regular node;
SCAN_SUPER: Super node
SCAN_CONTAINER: Container
                     * @return RangeType SCAN_NORMAL: Regular node;
SCAN_SUPER: Super node
SCAN_CONTAINER: Container
                     * 
                     */
                    std::string GetRangeType() const;

                    /**
                     * 设置SCAN_NORMAL: Regular node;
SCAN_SUPER: Super node
SCAN_CONTAINER: Container
                     * @param _rangeType SCAN_NORMAL: Regular node;
SCAN_SUPER: Super node
SCAN_CONTAINER: Container
                     * 
                     */
                    void SetRangeType(const std::string& _rangeType);

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     * 
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取Selected ID
                     * @return IDs Selected ID
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置Selected ID
                     * @param _iDs Selected ID
                     * 
                     */
                    void SetIDs(const std::vector<std::string>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                private:

                    /**
                     * true: select all;
false: partial select
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * SCAN_NORMAL: Regular node;
SCAN_SUPER: Super node
SCAN_CONTAINER: Container
                     */
                    std::string m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * Selected ID
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SCANRANGEINFO_H_
