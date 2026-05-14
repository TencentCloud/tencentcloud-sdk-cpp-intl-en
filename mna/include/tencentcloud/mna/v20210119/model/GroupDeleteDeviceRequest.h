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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GROUPDELETEDEVICEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GROUPDELETEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GroupDeleteDevice request structure.
                */
                class GroupDeleteDeviceRequest : public AbstractModel
                {
                public:
                    GroupDeleteDeviceRequest();
                    ~GroupDeleteDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取group ID
                     * @return GroupId group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置group ID
                     * @param _groupId group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Device list to be deleted
                     * @return DeviceList Device list to be deleted
                     * 
                     */
                    std::vector<std::string> GetDeviceList() const;

                    /**
                     * 设置Device list to be deleted
                     * @param _deviceList Device list to be deleted
                     * 
                     */
                    void SetDeviceList(const std::vector<std::string>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                private:

                    /**
                     * group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Device list to be deleted
                     */
                    std::vector<std::string> m_deviceList;
                    bool m_deviceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GROUPDELETEDEVICEREQUEST_H_
