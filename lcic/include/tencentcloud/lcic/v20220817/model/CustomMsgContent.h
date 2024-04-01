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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CUSTOMMSGCONTENT_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CUSTOMMSGCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 
                */
                class CustomMsgContent : public AbstractModel
                {
                public:
                    CustomMsgContent();
                    ~CustomMsgContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom message data.
                     * @return Data Custom message data.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置Custom message data.
                     * @param _data Custom message data.
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Customize the message description information.
                     * @return Desc Customize the message description information.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Customize the message description information.
                     * @param _desc Customize the message description information.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Extended Fields
                     * @return Ext Extended Fields
                     * 
                     */
                    std::string GetExt() const;

                    /**
                     * 设置Extended Fields
                     * @param _ext Extended Fields
                     * 
                     */
                    void SetExt(const std::string& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                private:

                    /**
                     * Custom message data.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Customize the message description information.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Extended Fields
                     */
                    std::string m_ext;
                    bool m_extHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CUSTOMMSGCONTENT_H_
