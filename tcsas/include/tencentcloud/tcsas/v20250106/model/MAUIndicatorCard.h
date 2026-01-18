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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MAUINDICATORCARD_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MAUINDICATORCARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * MAU metric comparison response data
                */
                class MAUIndicatorCard : public AbstractModel
                {
                public:
                    MAUIndicatorCard();
                    ~MAUIndicatorCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Growth rate (targetData - sourceData) / sourceData, returns 0 when SourceMAUNum is 0
                     * @return ComparisonRatio Growth rate (targetData - sourceData) / sourceData, returns 0 when SourceMAUNum is 0
                     * 
                     */
                    std::string GetComparisonRatio() const;

                    /**
                     * 设置Growth rate (targetData - sourceData) / sourceData, returns 0 when SourceMAUNum is 0
                     * @param _comparisonRatio Growth rate (targetData - sourceData) / sourceData, returns 0 when SourceMAUNum is 0
                     * 
                     */
                    void SetComparisonRatio(const std::string& _comparisonRatio);

                    /**
                     * 判断参数 ComparisonRatio 是否已赋值
                     * @return ComparisonRatio 是否已赋值
                     * 
                     */
                    bool ComparisonRatioHasBeenSet() const;

                    /**
                     * 获取1 Increase
2 Decrease
Returns 0 when SourceMAUNum is 0
                     * @return ComparisonResult 1 Increase
2 Decrease
Returns 0 when SourceMAUNum is 0
                     * 
                     */
                    int64_t GetComparisonResult() const;

                    /**
                     * 设置1 Increase
2 Decrease
Returns 0 when SourceMAUNum is 0
                     * @param _comparisonResult 1 Increase
2 Decrease
Returns 0 when SourceMAUNum is 0
                     * 
                     */
                    void SetComparisonResult(const int64_t& _comparisonResult);

                    /**
                     * 判断参数 ComparisonResult 是否已赋值
                     * @return ComparisonResult 是否已赋值
                     * 
                     */
                    bool ComparisonResultHasBeenSet() const;

                    /**
                     * 获取Last month's MAU data
                     * @return SourceMAUNum Last month's MAU data
                     * 
                     */
                    int64_t GetSourceMAUNum() const;

                    /**
                     * 设置Last month's MAU data
                     * @param _sourceMAUNum Last month's MAU data
                     * 
                     */
                    void SetSourceMAUNum(const int64_t& _sourceMAUNum);

                    /**
                     * 判断参数 SourceMAUNum 是否已赋值
                     * @return SourceMAUNum 是否已赋值
                     * 
                     */
                    bool SourceMAUNumHasBeenSet() const;

                    /**
                     * 获取This month's MAU data
                     * @return TargetMAUNum This month's MAU data
                     * 
                     */
                    int64_t GetTargetMAUNum() const;

                    /**
                     * 设置This month's MAU data
                     * @param _targetMAUNum This month's MAU data
                     * 
                     */
                    void SetTargetMAUNum(const int64_t& _targetMAUNum);

                    /**
                     * 判断参数 TargetMAUNum 是否已赋值
                     * @return TargetMAUNum 是否已赋值
                     * 
                     */
                    bool TargetMAUNumHasBeenSet() const;

                    /**
                     * 获取Data timestamp
                     * @return FlushTime Data timestamp
                     * 
                     */
                    int64_t GetFlushTime() const;

                    /**
                     * 设置Data timestamp
                     * @param _flushTime Data timestamp
                     * 
                     */
                    void SetFlushTime(const int64_t& _flushTime);

                    /**
                     * 判断参数 FlushTime 是否已赋值
                     * @return FlushTime 是否已赋值
                     * 
                     */
                    bool FlushTimeHasBeenSet() const;

                private:

                    /**
                     * Growth rate (targetData - sourceData) / sourceData, returns 0 when SourceMAUNum is 0
                     */
                    std::string m_comparisonRatio;
                    bool m_comparisonRatioHasBeenSet;

                    /**
                     * 1 Increase
2 Decrease
Returns 0 when SourceMAUNum is 0
                     */
                    int64_t m_comparisonResult;
                    bool m_comparisonResultHasBeenSet;

                    /**
                     * Last month's MAU data
                     */
                    int64_t m_sourceMAUNum;
                    bool m_sourceMAUNumHasBeenSet;

                    /**
                     * This month's MAU data
                     */
                    int64_t m_targetMAUNum;
                    bool m_targetMAUNumHasBeenSet;

                    /**
                     * Data timestamp
                     */
                    int64_t m_flushTime;
                    bool m_flushTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MAUINDICATORCARD_H_
