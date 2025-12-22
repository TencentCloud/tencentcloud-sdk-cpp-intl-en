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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_ABWATERMARKINPUTINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_ABWATERMARKINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/UrlInputInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * InputInfo
                */
                class AbWatermarkInputInfo : public AbstractModel
                {
                public:
                    AbWatermarkInputInfo();
                    ~AbWatermarkInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input type, optional URL/COS, currently only supports URL

                     * @return Type Input type, optional URL/COS, currently only supports URL

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input type, optional URL/COS, currently only supports URL

                     * @param _type Input type, optional URL/COS, currently only supports URL

                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取URL input information
                     * @return UrlInputInfo URL input information
                     * 
                     */
                    UrlInputInfo GetUrlInputInfo() const;

                    /**
                     * 设置URL input information
                     * @param _urlInputInfo URL input information
                     * 
                     */
                    void SetUrlInputInfo(const UrlInputInfo& _urlInputInfo);

                    /**
                     * 判断参数 UrlInputInfo 是否已赋值
                     * @return UrlInputInfo 是否已赋值
                     * 
                     */
                    bool UrlInputInfoHasBeenSet() const;

                private:

                    /**
                     * Input type, optional URL/COS, currently only supports URL

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * URL input information
                     */
                    UrlInputInfo m_urlInputInfo;
                    bool m_urlInputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_ABWATERMARKINPUTINFO_H_
