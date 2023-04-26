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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_BACKUPLIMITVPCITEM_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_BACKUPLIMITVPCITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * The VPC that corresponds to the configured download address of the backup file
                */
                class BackupLimitVpcItem : public AbstractModel
                {
                public:
                    BackupLimitVpcItem();
                    ~BackupLimitVpcItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The region of the VPC that corresponds to the download address of the backup file
                     * @return Region The region of the VPC that corresponds to the download address of the backup file
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region of the VPC that corresponds to the download address of the backup file
                     * @param Region The region of the VPC that corresponds to the download address of the backup file
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取The list of VPCs that correspond to the download addresses of the backup files
                     * @return VpcList The list of VPCs that correspond to the download addresses of the backup files
                     */
                    std::vector<std::string> GetVpcList() const;

                    /**
                     * 设置The list of VPCs that correspond to the download addresses of the backup files
                     * @param VpcList The list of VPCs that correspond to the download addresses of the backup files
                     */
                    void SetVpcList(const std::vector<std::string>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     */
                    bool VpcListHasBeenSet() const;

                private:

                    /**
                     * The region of the VPC that corresponds to the download address of the backup file
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * The list of VPCs that correspond to the download addresses of the backup files
                     */
                    std::vector<std::string> m_vpcList;
                    bool m_vpcListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_BACKUPLIMITVPCITEM_H_
