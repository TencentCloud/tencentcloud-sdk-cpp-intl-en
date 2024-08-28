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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ORDERMODIFYOBJECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ORDERMODIFYOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Order Modification Parameter Object
                */
                class OrderModifyObject : public AbstractModel
                {
                public:
                    OrderModifyObject();
                    ~OrderModifyObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取New Product Identification. PRO_VERSION: Professional Edition; FLAGSHIP: Premium Edition
                     * @return NewSubProductCode New Product Identification. PRO_VERSION: Professional Edition; FLAGSHIP: Premium Edition
                     * 
                     */
                    std::string GetNewSubProductCode() const;

                    /**
                     * 设置New Product Identification. PRO_VERSION: Professional Edition; FLAGSHIP: Premium Edition
                     * @param _newSubProductCode New Product Identification. PRO_VERSION: Professional Edition; FLAGSHIP: Premium Edition
                     * 
                     */
                    void SetNewSubProductCode(const std::string& _newSubProductCode);

                    /**
                     * 判断参数 NewSubProductCode 是否已赋值
                     * @return NewSubProductCode 是否已赋值
                     * 
                     */
                    bool NewSubProductCodeHasBeenSet() const;

                    /**
                     * 获取Scale-up/Scale-down Count, which is ignored for reconfiguration sub-product
                     * @return InquireNum Scale-up/Scale-down Count, which is ignored for reconfiguration sub-product
                     * 
                     */
                    int64_t GetInquireNum() const;

                    /**
                     * 设置Scale-up/Scale-down Count, which is ignored for reconfiguration sub-product
                     * @param _inquireNum Scale-up/Scale-down Count, which is ignored for reconfiguration sub-product
                     * 
                     */
                    void SetInquireNum(const int64_t& _inquireNum);

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * New Product Identification. PRO_VERSION: Professional Edition; FLAGSHIP: Premium Edition
                     */
                    std::string m_newSubProductCode;
                    bool m_newSubProductCodeHasBeenSet;

                    /**
                     * Scale-up/Scale-down Count, which is ignored for reconfiguration sub-product
                     */
                    int64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ORDERMODIFYOBJECT_H_
