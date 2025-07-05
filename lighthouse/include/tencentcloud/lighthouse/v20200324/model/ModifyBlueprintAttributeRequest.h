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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBLUEPRINTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBLUEPRINTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyBlueprintAttribute request structure.
                */
                class ModifyBlueprintAttributeRequest : public AbstractModel
                {
                public:
                    ModifyBlueprintAttributeRequest();
                    ~ModifyBlueprintAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image ID, which can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     * @return BlueprintId Image ID, which can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置Image ID, which can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     * @param _blueprintId Image ID, which can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取New image name, which can contain up to 60 characters.
                     * @return BlueprintName New image name, which can contain up to 60 characters.
                     * 
                     */
                    std::string GetBlueprintName() const;

                    /**
                     * 设置New image name, which can contain up to 60 characters.
                     * @param _blueprintName New image name, which can contain up to 60 characters.
                     * 
                     */
                    void SetBlueprintName(const std::string& _blueprintName);

                    /**
                     * 判断参数 BlueprintName 是否已赋值
                     * @return BlueprintName 是否已赋值
                     * 
                     */
                    bool BlueprintNameHasBeenSet() const;

                    /**
                     * 获取New image description, which can contain up to 60 characters.
                     * @return Description New image description, which can contain up to 60 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置New image description, which can contain up to 60 characters.
                     * @param _description New image description, which can contain up to 60 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Image ID, which can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * New image name, which can contain up to 60 characters.
                     */
                    std::string m_blueprintName;
                    bool m_blueprintNameHasBeenSet;

                    /**
                     * New image description, which can contain up to 60 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBLUEPRINTATTRIBUTEREQUEST_H_
