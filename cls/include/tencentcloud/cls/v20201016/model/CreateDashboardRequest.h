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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDASHBOARDREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDASHBOARDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateDashboard request structure.
                */
                class CreateDashboardRequest : public AbstractModel
                {
                public:
                    CreateDashboardRequest();
                    ~CreateDashboardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dashboard name
                     * @return DashboardName dashboard name
                     * 
                     */
                    std::string GetDashboardName() const;

                    /**
                     * 设置dashboard name
                     * @param _dashboardName dashboard name
                     * 
                     */
                    void SetDashboardName(const std::string& _dashboardName);

                    /**
                     * 判断参数 DashboardName 是否已赋值
                     * @return DashboardName 是否已赋值
                     * 
                     */
                    bool DashboardNameHasBeenSet() const;

                    /**
                     * 获取Dashboard configuration data
                     * @return Data Dashboard configuration data
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置Dashboard configuration data
                     * @param _data Dashboard configuration data
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
                     * 获取List of tag descriptions. When you specify this parameter, tags can be bound to the corresponding log topic at the same time. It supports up to 10 tag key-value pairs, and one resource can only be bound to one tag key.
                     * @return Tags List of tag descriptions. When you specify this parameter, tags can be bound to the corresponding log topic at the same time. It supports up to 10 tag key-value pairs, and one resource can only be bound to one tag key.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tag descriptions. When you specify this parameter, tags can be bound to the corresponding log topic at the same time. It supports up to 10 tag key-value pairs, and one resource can only be bound to one tag key.
                     * @param _tags List of tag descriptions. When you specify this parameter, tags can be bound to the corresponding log topic at the same time. It supports up to 10 tag key-value pairs, and one resource can only be bound to one tag key.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * dashboard name
                     */
                    std::string m_dashboardName;
                    bool m_dashboardNameHasBeenSet;

                    /**
                     * Dashboard configuration data
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * List of tag descriptions. When you specify this parameter, tags can be bound to the corresponding log topic at the same time. It supports up to 10 tag key-value pairs, and one resource can only be bound to one tag key.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDASHBOARDREQUEST_H_
