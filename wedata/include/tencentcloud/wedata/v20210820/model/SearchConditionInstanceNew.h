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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITIONINSTANCENEW_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITIONINSTANCENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Search condition
                */
                class SearchConditionInstanceNew : public AbstractModel
                {
                public:
                    SearchConditionInstanceNew();
                    ~SearchConditionInstanceNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution space, optional 
 "DRY_RUN"
                     * @return ExecutionSpace Execution space, optional 
 "DRY_RUN"
                     * 
                     */
                    std::string GetExecutionSpace() const;

                    /**
                     * 设置Execution space, optional 
 "DRY_RUN"
                     * @param _executionSpace Execution space, optional 
 "DRY_RUN"
                     * 
                     */
                    void SetExecutionSpace(const std::string& _executionSpace);

                    /**
                     * 判断参数 ExecutionSpace 是否已赋值
                     * @return ExecutionSpace 是否已赋值
                     * 
                     */
                    bool ExecutionSpaceHasBeenSet() const;

                    /**
                     * 获取Business Products, options: <DATA_DEV / DATA_QUALITY / DATA_INTEGRATION, default DATA_DEV. Non-empty. Default own project
                     * @return ProductName Business Products, options: <DATA_DEV / DATA_QUALITY / DATA_INTEGRATION, default DATA_DEV. Non-empty. Default own project
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Business Products, options: <DATA_DEV / DATA_QUALITY / DATA_INTEGRATION, default DATA_DEV. Non-empty. Default own project
                     * @param _productName Business Products, options: <DATA_DEV / DATA_QUALITY / DATA_INTEGRATION, default DATA_DEV. Non-empty. Default own project
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Resource Group Information, optional
                     * @return ResourceGroup Resource Group Information, optional
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置Resource Group Information, optional
                     * @param _resourceGroup Resource Group Information, optional
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                private:

                    /**
                     * Execution space, optional 
 "DRY_RUN"
                     */
                    std::string m_executionSpace;
                    bool m_executionSpaceHasBeenSet;

                    /**
                     * Business Products, options: <DATA_DEV / DATA_QUALITY / DATA_INTEGRATION, default DATA_DEV. Non-empty. Default own project
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Resource Group Information, optional
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITIONINSTANCENEW_H_
