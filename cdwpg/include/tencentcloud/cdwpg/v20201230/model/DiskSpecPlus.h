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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DISKSPECPLUS_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DISKSPECPLUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Disk specifications.
                */
                class DiskSpecPlus : public AbstractModel
                {
                public:
                    DiskSpecPlus();
                    ~DiskSpecPlus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskCount Disk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置Disk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskCount Disk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取Max Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxDiskSize Max Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置Max Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxDiskSize Max Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxDiskSize(const int64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取Min Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinDiskSize Min Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinDiskSize() const;

                    /**
                     * 设置Min Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minDiskSize Min Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinDiskSize(const int64_t& _minDiskSize);

                    /**
                     * 判断参数 MinDiskSize 是否已赋值
                     * @return MinDiskSize 是否已赋值
                     * 
                     */
                    bool MinDiskSizeHasBeenSet() const;

                    /**
                     * 获取Disk Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskType Disk Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskType Disk Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Disk Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskDesc Disk Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskDesc() const;

                    /**
                     * 设置Disk Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskDesc Disk Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskDesc(const std::string& _diskDesc);

                    /**
                     * 判断参数 DiskDesc 是否已赋值
                     * @return DiskDesc 是否已赋值
                     * 
                     */
                    bool DiskDescHasBeenSet() const;

                    /**
                     * 获取Cvm Class
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvmClass Cvm Class
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCvmClass() const;

                    /**
                     * 设置Cvm Class
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cvmClass Cvm Class
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCvmClass(const std::string& _cvmClass);

                    /**
                     * 判断参数 CvmClass 是否已赋值
                     * @return CvmClass 是否已赋值
                     * 
                     */
                    bool CvmClassHasBeenSet() const;

                private:

                    /**
                     * Disk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Max Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * Min Disk Size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * Disk Type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Disk Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskDesc;
                    bool m_diskDescHasBeenSet;

                    /**
                     * Cvm Class
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cvmClass;
                    bool m_cvmClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DISKSPECPLUS_H_
