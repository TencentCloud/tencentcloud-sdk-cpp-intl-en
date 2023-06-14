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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListLayers request structure.
                */
                class ListLayersRequest : public AbstractModel
                {
                public:
                    ListLayersRequest();
                    ~ListLayersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Compatible runtimes
                     * @return CompatibleRuntime Compatible runtimes
                     * 
                     */
                    std::string GetCompatibleRuntime() const;

                    /**
                     * 设置Compatible runtimes
                     * @param _compatibleRuntime Compatible runtimes
                     * 
                     */
                    void SetCompatibleRuntime(const std::string& _compatibleRuntime);

                    /**
                     * 判断参数 CompatibleRuntime 是否已赋值
                     * @return CompatibleRuntime 是否已赋值
                     * 
                     */
                    bool CompatibleRuntimeHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit
                     * @return Limit Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit
                     * @param _limit Limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Query key, which fuzzily matches the name
                     * @return SearchKey Query key, which fuzzily matches the name
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Query key, which fuzzily matches the name
                     * @param _searchKey Query key, which fuzzily matches the name
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * Compatible runtimes
                     */
                    std::string m_compatibleRuntime;
                    bool m_compatibleRuntimeHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query key, which fuzzily matches the name
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERSREQUEST_H_
