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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Details of an edge function.
                */
                class Function : public AbstractModel
                {
                public:
                    Function();
                    ~Function() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function ID.
                     * @return FunctionId Function ID.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID.
                     * @param _functionId Function ID.
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Function name.
                     * @return Name Function name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Function name.
                     * @param _name Function name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Function description.
                     * @return Remark Function description.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Function description.
                     * @param _remark Function description.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Function content.
                     * @return Content Function content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Function content.
                     * @param _content Function content.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Default domain name of a function.
                     * @return Domain Default domain name of a function.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Default domain name of a function.
                     * @param _domain Default domain name of a function.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @return CreateTime Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @param _createTime Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @return UpdateTime Modification time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modification time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @param _updateTime Modification time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Function ID.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Function name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Function description.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Function content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Default domain name of a function.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTION_H_
