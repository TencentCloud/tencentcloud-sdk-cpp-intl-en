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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODEGROUP_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/DiskSpecPlus.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Instance node information.
                */
                class InstanceNodeGroup : public AbstractModel
                {
                public:
                    InstanceNodeGroup();
                    ~InstanceNodeGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Spec Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecName Spec Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Spec Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specName Spec Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Data Disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataDisk Data Disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DiskSpecPlus GetDataDisk() const;

                    /**
                     * 设置Data Disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataDisk Data Disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataDisk(const DiskSpecPlus& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取Cvm Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvmCount Cvm Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCvmCount() const;

                    /**
                     * 设置Cvm Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cvmCount Cvm Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCvmCount(const int64_t& _cvmCount);

                    /**
                     * 判断参数 CvmCount 是否已赋值
                     * @return CvmCount 是否已赋值
                     * 
                     */
                    bool CvmCountHasBeenSet() const;

                private:

                    /**
                     * Spec Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Data Disk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DiskSpecPlus m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * Cvm Count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cvmCount;
                    bool m_cvmCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODEGROUP_H_
