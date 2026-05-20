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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_GAAPINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_GAAPINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/GAAPListenerDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * GAAP instance details
                */
                class GAAPInstanceDetail : public AbstractModel
                {
                public:
                    GAAPInstanceDetail();
                    ~GAAPInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Listener list
                     * @return ListenerList Listener list
                     * 
                     */
                    std::vector<GAAPListenerDetail> GetListenerList() const;

                    /**
                     * 设置Listener list
                     * @param _listenerList Listener list
                     * 
                     */
                    void SetListenerList(const std::vector<GAAPListenerDetail>& _listenerList);

                    /**
                     * 判断参数 ListenerList 是否已赋值
                     * @return ListenerList 是否已赋值
                     * 
                     */
                    bool ListenerListHasBeenSet() const;

                    /**
                     * 获取Speed up the instance name
                     * @return InstanceName Speed up the instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Speed up the instance name
                     * @param _instanceName Speed up the instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Listener list
                     */
                    std::vector<GAAPListenerDetail> m_listenerList;
                    bool m_listenerListHasBeenSet;

                    /**
                     * Speed up the instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_GAAPINSTANCEDETAIL_H_
