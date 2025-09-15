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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDAGINFOREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDAGINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDAGInfo request structure.
                */
                class DescribeDAGInfoRequest : public AbstractModel
                {
                public:
                    DescribeDAGInfoRequest();
                    ~DescribeDAGInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceID Cluster ID.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceID Cluster ID.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取DAG type. Only STARROCKS is supported currently.
                     * @return Type DAG type. Only STARROCKS is supported currently.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置DAG type. Only STARROCKS is supported currently.
                     * @param _type DAG type. Only STARROCKS is supported currently.
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
                     * 获取Query ID list. The maximum length is 1.
                     * @return IDList Query ID list. The maximum length is 1.
                     * 
                     */
                    std::vector<std::string> GetIDList() const;

                    /**
                     * 设置Query ID list. The maximum length is 1.
                     * @param _iDList Query ID list. The maximum length is 1.
                     * 
                     */
                    void SetIDList(const std::vector<std::string>& _iDList);

                    /**
                     * 判断参数 IDList 是否已赋值
                     * @return IDList 是否已赋值
                     * 
                     */
                    bool IDListHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * DAG type. Only STARROCKS is supported currently.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query ID list. The maximum length is 1.
                     */
                    std::vector<std::string> m_iDList;
                    bool m_iDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDAGINFOREQUEST_H_
