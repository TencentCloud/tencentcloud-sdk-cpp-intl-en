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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMREVENTLISTITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMREVENTLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Event details list.
                */
                class EMREventListItem : public AbstractModel
                {
                public:
                    EMREventListItem();
                    ~EMREventListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address of the affected event.
                     * @return Host IP address of the affected event.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置IP address of the affected event.
                     * @param _host IP address of the affected event.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Service role of the affected event.
                     * @return Role Service role of the affected event.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Service role of the affected event.
                     * @param _role Service role of the affected event.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Event name.
                     * @return Name Event name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Event name.
                     * @param _name Event name.
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
                     * 获取Event alarm details.
                     * @return Detail Event alarm details.
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置Event alarm details.
                     * @param _detail Event alarm details.
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Event occurrence time.
                     * @return CreateTime Event occurrence time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Event occurrence time.
                     * @param _createTime Event occurrence time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * IP address of the affected event.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Service role of the affected event.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Event name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event alarm details.
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Event occurrence time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMREVENTLISTITEM_H_
