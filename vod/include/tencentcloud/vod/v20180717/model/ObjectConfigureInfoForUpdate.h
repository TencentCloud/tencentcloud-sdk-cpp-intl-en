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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_OBJECTCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_OBJECTCONFIGUREINFOFORUPDATE_H_

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
                * Object recognition task control parameters
                */
                class ObjectConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    ObjectConfigureInfoForUpdate();
                    ~ObjectConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Object recognition task switch. Available values:
<li>ON: enable the intelligent object recognition task;</li>
<li>OFF: Disable the intelligent object recognition task.</li>
                     * @return Switch Object recognition task switch. Available values:
<li>ON: enable the intelligent object recognition task;</li>
<li>OFF: Disable the intelligent object recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Object recognition task switch. Available values:
<li>ON: enable the intelligent object recognition task;</li>
<li>OFF: Disable the intelligent object recognition task.</li>
                     * @param _switch Object recognition task switch. Available values:
<li>ON: enable the intelligent object recognition task;</li>
<li>OFF: Disable the intelligent object recognition task.</li>
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
                     * 获取Object library selection. Valid values:
<li>Default: use the default object library;</li>
<li>UserDefine: Use the user-defined object library.</li>
<li>All: use both the default object library and the user-defined object library.</li>
                     * @return ObjectLibrary Object library selection. Valid values:
<li>Default: use the default object library;</li>
<li>UserDefine: Use the user-defined object library.</li>
<li>All: use both the default object library and the user-defined object library.</li>
                     * 
                     */
                    std::string GetObjectLibrary() const;

                    /**
                     * 设置Object library selection. Valid values:
<li>Default: use the default object library;</li>
<li>UserDefine: Use the user-defined object library.</li>
<li>All: use both the default object library and the user-defined object library.</li>
                     * @param _objectLibrary Object library selection. Valid values:
<li>Default: use the default object library;</li>
<li>UserDefine: Use the user-defined object library.</li>
<li>All: use both the default object library and the user-defined object library.</li>
                     * 
                     */
                    void SetObjectLibrary(const std::string& _objectLibrary);

                    /**
                     * 判断参数 ObjectLibrary 是否已赋值
                     * @return ObjectLibrary 是否已赋值
                     * 
                     */
                    bool ObjectLibraryHasBeenSet() const;

                private:

                    /**
                     * Object recognition task switch. Available values:
<li>ON: enable the intelligent object recognition task;</li>
<li>OFF: Disable the intelligent object recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Object library selection. Valid values:
<li>Default: use the default object library;</li>
<li>UserDefine: Use the user-defined object library.</li>
<li>All: use both the default object library and the user-defined object library.</li>
                     */
                    std::string m_objectLibrary;
                    bool m_objectLibraryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_OBJECTCONFIGUREINFOFORUPDATE_H_
