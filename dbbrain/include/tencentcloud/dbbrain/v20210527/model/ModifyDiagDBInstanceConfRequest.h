/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYDIAGDBINSTANCECONFREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYDIAGDBINSTANCECONFREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/InstanceConfs.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * ModifyDiagDBInstanceConf request structure.
                */
                class ModifyDiagDBInstanceConfRequest : public AbstractModel
                {
                public:
                    ModifyDiagDBInstanceConfRequest();
                    ~ModifyDiagDBInstanceConfRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance configuration, including inspection and overview switch.
                     * @return InstanceConfs Instance configuration, including inspection and overview switch.
                     * 
                     */
                    InstanceConfs GetInstanceConfs() const;

                    /**
                     * 设置Instance configuration, including inspection and overview switch.
                     * @param _instanceConfs Instance configuration, including inspection and overview switch.
                     * 
                     */
                    void SetInstanceConfs(const InstanceConfs& _instanceConfs);

                    /**
                     * 判断参数 InstanceConfs 是否已赋值
                     * @return InstanceConfs 是否已赋值
                     * 
                     */
                    bool InstanceConfsHasBeenSet() const;

                    /**
                     * 获取Target regions of the request. If the value is `All`, it is applied to all regions.
                     * @return Regions Target regions of the request. If the value is `All`, it is applied to all regions.
                     * 
                     */
                    std::string GetRegions() const;

                    /**
                     * 设置Target regions of the request. If the value is `All`, it is applied to all regions.
                     * @param _regions Target regions of the request. If the value is `All`, it is applied to all regions.
                     * 
                     */
                    void SetRegions(const std::string& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     * @param _product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取ID of the instance to modify.
                     * @return InstanceIds ID of the instance to modify.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置ID of the instance to modify.
                     * @param _instanceIds ID of the instance to modify.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Instance configuration, including inspection and overview switch.
                     */
                    InstanceConfs m_instanceConfs;
                    bool m_instanceConfsHasBeenSet;

                    /**
                     * Target regions of the request. If the value is `All`, it is applied to all regions.
                     */
                    std::string m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * ID of the instance to modify.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYDIAGDBINSTANCECONFREQUEST_H_
