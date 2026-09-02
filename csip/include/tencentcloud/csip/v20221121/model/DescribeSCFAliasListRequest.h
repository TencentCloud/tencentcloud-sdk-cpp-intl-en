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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCFALIASLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCFALIASLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSCFAliasList request structure.
                */
                class DescribeSCFAliasListRequest : public AbstractModel
                {
                public:
                    DescribeSCFAliasListRequest();
                    ~DescribeSCFAliasListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Region of the cloud function
Parameter format: Tencent Cloud standard Region, for example, ap-guangzhou
                     * @return SCFRegion Region of the cloud function
Parameter format: Tencent Cloud standard Region, for example, ap-guangzhou
                     * 
                     */
                    std::string GetSCFRegion() const;

                    /**
                     * 设置Region of the cloud function
Parameter format: Tencent Cloud standard Region, for example, ap-guangzhou
                     * @param _sCFRegion Region of the cloud function
Parameter format: Tencent Cloud standard Region, for example, ap-guangzhou
                     * 
                     */
                    void SetSCFRegion(const std::string& _sCFRegion);

                    /**
                     * 判断参数 SCFRegion 是否已赋值
                     * @return SCFRegion 是否已赋值
                     * 
                     */
                    bool SCFRegionHasBeenSet() const;

                    /**
                     * 获取Namespace name
Value for reference: obtain through the DescribeSCFNamespaceList API.
                     * @return Namespace Namespace name
Value for reference: obtain through the DescribeSCFNamespaceList API.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name
Value for reference: obtain through the DescribeSCFNamespaceList API.
                     * @param _namespace Namespace name
Value for reference: obtain through the DescribeSCFNamespaceList API.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Function name
Value for reference: obtain through the DescribeSCFFunctionList API.
                     * @return FunctionName Function name
Value for reference: obtain through the DescribeSCFFunctionList API.
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
Value for reference: obtain through the DescribeSCFFunctionList API.
                     * @param _functionName Function name
Value for reference: obtain through the DescribeSCFFunctionList API.
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Number of items per page
Valid values: [1, 100]
Default value: 20
                     * @return Limit Number of items per page
Valid values: [1, 100]
Default value: 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page
Valid values: [1, 100]
Default value: 20
                     * @param _limit Number of items per page
Valid values: [1, 100]
Default value: 20
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
                     * 获取Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * @return Offset Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * @param _offset Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Region of the cloud function
Parameter format: Tencent Cloud standard Region, for example, ap-guangzhou
                     */
                    std::string m_sCFRegion;
                    bool m_sCFRegionHasBeenSet;

                    /**
                     * Namespace name
Value for reference: obtain through the DescribeSCFNamespaceList API.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function name
Value for reference: obtain through the DescribeSCFFunctionList API.
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Number of items per page
Valid values: [1, 100]
Default value: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset.
Valid values: [0, +∞)
Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCFALIASLISTREQUEST_H_
