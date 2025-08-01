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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEDIMSTAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEDIMSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleDimCnt.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Rule Dimension Count Statistics
                */
                class RuleDimStat : public AbstractModel
                {
                public:
                    RuleDimStat();
                    ~RuleDimStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number
                     * @return TotalCnt Total number
                     * 
                     */
                    uint64_t GetTotalCnt() const;

                    /**
                     * 设置Total number
                     * @param _totalCnt Total number
                     * 
                     */
                    void SetTotalCnt(const uint64_t& _totalCnt);

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取Dimension Count Statistics
                     * @return DimCntList Dimension Count Statistics
                     * 
                     */
                    std::vector<RuleDimCnt> GetDimCntList() const;

                    /**
                     * 设置Dimension Count Statistics
                     * @param _dimCntList Dimension Count Statistics
                     * 
                     */
                    void SetDimCntList(const std::vector<RuleDimCnt>& _dimCntList);

                    /**
                     * 判断参数 DimCntList 是否已赋值
                     * @return DimCntList 是否已赋值
                     * 
                     */
                    bool DimCntListHasBeenSet() const;

                private:

                    /**
                     * Total number
                     */
                    uint64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * Dimension Count Statistics
                     */
                    std::vector<RuleDimCnt> m_dimCntList;
                    bool m_dimCntListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEDIMSTAT_H_
