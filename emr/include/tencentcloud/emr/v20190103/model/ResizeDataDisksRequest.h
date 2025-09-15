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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESIZEDATADISKSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESIZEDATADISKSREQUEST_H_

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
                * ResizeDataDisks request structure.
                */
                class ResizeDataDisksRequest : public AbstractModel
                {
                public:
                    ResizeDataDisksRequest();
                    ~ResizeDataDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the EMR cluster instance.
                     * @return InstanceId ID of the EMR cluster instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the EMR cluster instance.
                     * @param _instanceId ID of the EMR cluster instance.
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
                     * 获取Scale-out value, which should be greater than the original capacity and a multiple of 10.
                     * @return DiskSize Scale-out value, which should be greater than the original capacity and a multiple of 10.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Scale-out value, which should be greater than the original capacity and a multiple of 10.
                     * @param _diskSize Scale-out value, which should be greater than the original capacity and a multiple of 10.
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取ID list of nodes to be scaled out.
                     * @return CvmInstanceIds ID list of nodes to be scaled out.
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置ID list of nodes to be scaled out.
                     * @param _cvmInstanceIds ID list of nodes to be scaled out.
                     * 
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                    /**
                     * 获取ID of the cloud disk to be scaled out.
                     * @return DiskIds ID of the cloud disk to be scaled out.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置ID of the cloud disk to be scaled out.
                     * @param _diskIds ID of the cloud disk to be scaled out.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Whether to scale out all cloud disks.
                     * @return ResizeAll Whether to scale out all cloud disks.
                     * 
                     */
                    bool GetResizeAll() const;

                    /**
                     * 设置Whether to scale out all cloud disks.
                     * @param _resizeAll Whether to scale out all cloud disks.
                     * 
                     */
                    void SetResizeAll(const bool& _resizeAll);

                    /**
                     * 判断参数 ResizeAll 是否已赋值
                     * @return ResizeAll 是否已赋值
                     * 
                     */
                    bool ResizeAllHasBeenSet() const;

                private:

                    /**
                     * ID of the EMR cluster instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Scale-out value, which should be greater than the original capacity and a multiple of 10.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * ID list of nodes to be scaled out.
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                    /**
                     * ID of the cloud disk to be scaled out.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Whether to scale out all cloud disks.
                     */
                    bool m_resizeAll;
                    bool m_resizeAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESIZEDATADISKSREQUEST_H_
