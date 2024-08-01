/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngineImageVersions request structure.
                */
                class DescribeDataEngineImageVersionsRequest : public AbstractModel
                {
                public:
                    DescribeDataEngineImageVersionsRequest();
                    ~DescribeDataEngineImageVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Types of engines: SQL, SparkBatch, StandardSpark, and StandardPresto
                     * @return EngineType Types of engines: SQL, SparkBatch, StandardSpark, and StandardPresto
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Types of engines: SQL, SparkBatch, StandardSpark, and StandardPresto
                     * @param _engineType Types of engines: SQL, SparkBatch, StandardSpark, and StandardPresto
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Sort 
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置
                     * @param _sort 
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取
                     * @return Asc 
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置
                     * @param _asc 
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                private:

                    /**
                     * Types of engines: SQL, SparkBatch, StandardSpark, and StandardPresto
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSREQUEST_H_
