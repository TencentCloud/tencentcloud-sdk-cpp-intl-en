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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_BEAUTYEFFECTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_BEAUTYEFFECTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Image beauty effect item.
                */
                class BeautyEffectItem : public AbstractModel
                {
                public:
                    BeautyEffectItem();
                    ~BeautyEffectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable beauty effects.</p><p>Enumeration value:</p><ul><li>ON: On</li><li>OFF: Off</li></ul>
                     * @return Switch <p>Whether to enable beauty effects.</p><p>Enumeration value:</p><ul><li>ON: On</li><li>OFF: Off</li></ul>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Whether to enable beauty effects.</p><p>Enumeration value:</p><ul><li>ON: On</li><li>OFF: Off</li></ul>
                     * @param _switch <p>Whether to enable beauty effects.</p><p>Enumeration value:</p><ul><li>ON: On</li><li>OFF: Off</li></ul>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>Beauty option.</p>
                     * @return Type <p>Beauty option.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Beauty option.</p>
                     * @param _type <p>Beauty option.</p>
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
                     * 获取<p>Intensity of beauty effects.</p>
                     * @return Value <p>Intensity of beauty effects.</p>
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置<p>Intensity of beauty effects.</p>
                     * @param _value <p>Intensity of beauty effects.</p>
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>Attach the resource path.</p>
                     * @return ResourcePath <p>Attach the resource path.</p>
                     * 
                     */
                    std::string GetResourcePath() const;

                    /**
                     * 设置<p>Attach the resource path.</p>
                     * @param _resourcePath <p>Attach the resource path.</p>
                     * 
                     */
                    void SetResourcePath(const std::string& _resourcePath);

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                    /**
                     * 获取<p>Additional information.</p>
                     * @return ExtInfo <p>Additional information.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Additional information.</p>
                     * @param _extInfo <p>Additional information.</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable beauty effects.</p><p>Enumeration value:</p><ul><li>ON: On</li><li>OFF: Off</li></ul>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Beauty option.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Intensity of beauty effects.</p>
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>Attach the resource path.</p>
                     */
                    std::string m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                    /**
                     * <p>Additional information.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_BEAUTYEFFECTITEM_H_
