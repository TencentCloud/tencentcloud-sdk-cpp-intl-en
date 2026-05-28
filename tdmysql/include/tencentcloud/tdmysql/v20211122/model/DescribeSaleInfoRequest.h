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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEINFOREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeSaleInfo request structure.
                */
                class DescribeSaleInfoRequest : public AbstractModel
                {
                public:
                    DescribeSaleInfoRequest();
                    ~DescribeSaleInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Region of the disaster recovery primary instance</p>
                     * @return SrcRegion <p>Region of the disaster recovery primary instance</p>
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置<p>Region of the disaster recovery primary instance</p>
                     * @param _srcRegion <p>Region of the disaster recovery primary instance</p>
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取<p>Instance id</p><p>Input this parameter to return the sales information of the availability zone in the region where this instance is located.</p>
                     * @return InstanceId <p>Instance id</p><p>Input this parameter to return the sales information of the availability zone in the region where this instance is located.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p><p>Input this parameter to return the sales information of the availability zone in the region where this instance is located.</p>
                     * @param _instanceId <p>Instance id</p><p>Input this parameter to return the sales information of the availability zone in the region where this instance is located.</p>
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
                     * 获取<p>Specify the sales information that supports a certain type instance.</p><p>Enumeration value:</p><ul><li>serverless: Returns all regions that support serverless instance type.</li></ul><p>Default value: None</p><p>Currently only support specifying serverless. Import other info or leave it blank to return all sales region information by default.</p>
                     * @return InstanceType <p>Specify the sales information that supports a certain type instance.</p><p>Enumeration value:</p><ul><li>serverless: Returns all regions that support serverless instance type.</li></ul><p>Default value: None</p><p>Currently only support specifying serverless. Import other info or leave it blank to return all sales region information by default.</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Specify the sales information that supports a certain type instance.</p><p>Enumeration value:</p><ul><li>serverless: Returns all regions that support serverless instance type.</li></ul><p>Default value: None</p><p>Currently only support specifying serverless. Import other info or leave it blank to return all sales region information by default.</p>
                     * @param _instanceType <p>Specify the sales information that supports a certain type instance.</p><p>Enumeration value:</p><ul><li>serverless: Returns all regions that support serverless instance type.</li></ul><p>Default value: None</p><p>Currently only support specifying serverless. Import other info or leave it blank to return all sales region information by default.</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Region of the disaster recovery primary instance</p>
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * <p>Instance id</p><p>Input this parameter to return the sales information of the availability zone in the region where this instance is located.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Specify the sales information that supports a certain type instance.</p><p>Enumeration value:</p><ul><li>serverless: Returns all regions that support serverless instance type.</li></ul><p>Default value: None</p><p>Currently only support specifying serverless. Import other info or leave it blank to return all sales region information by default.</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEINFOREQUEST_H_
