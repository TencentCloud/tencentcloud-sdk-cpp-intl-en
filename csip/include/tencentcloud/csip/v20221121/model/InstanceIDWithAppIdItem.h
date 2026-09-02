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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_INSTANCEIDWITHAPPIDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_INSTANCEIDWITHAPPIDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host instance location information
                */
                class InstanceIDWithAppIdItem : public AbstractModel
                {
                public:
                    InstanceIDWithAppIdItem();
                    ~InstanceIDWithAppIdItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AppId of the machine ownership
                     * @return AppId AppId of the machine ownership
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置AppId of the machine ownership
                     * @param _appId AppId of the machine ownership
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Machine instance ID.
                     * @return InstanceID Machine instance ID.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Machine instance ID.
                     * @param _instanceID Machine instance ID.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * AppId of the machine ownership
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Machine instance ID.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_INSTANCEIDWITHAPPIDITEM_H_
