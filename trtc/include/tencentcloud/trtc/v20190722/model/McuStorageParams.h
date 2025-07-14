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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUSTORAGEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUSTORAGEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/CloudStorage.h>
#include <tencentcloud/trtc/v20190722/model/McuCloudVod.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 
                */
                class McuStorageParams : public AbstractModel
                {
                public:
                    McuStorageParams();
                    ~McuStorageParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Third-Party Cloud Storage Account Information
(Note: Storing files in Object Storage COS will incur recording file delivery fees. For details, see [Cloud Recording Billing]. Storing in VOD does not incur this fee.)
Example:{"Vendor":0,"Region":"ap-shanghai","Bucket":"*","AccessKey":"*","SecretKey":"***","FileNamePrefix":["mcu_record"]}
                     * @return CloudStorage Third-Party Cloud Storage Account Information
(Note: Storing files in Object Storage COS will incur recording file delivery fees. For details, see [Cloud Recording Billing]. Storing in VOD does not incur this fee.)
Example:{"Vendor":0,"Region":"ap-shanghai","Bucket":"*","AccessKey":"*","SecretKey":"***","FileNamePrefix":["mcu_record"]}
                     * 
                     */
                    CloudStorage GetCloudStorage() const;

                    /**
                     * 设置Third-Party Cloud Storage Account Information
(Note: Storing files in Object Storage COS will incur recording file delivery fees. For details, see [Cloud Recording Billing]. Storing in VOD does not incur this fee.)
Example:{"Vendor":0,"Region":"ap-shanghai","Bucket":"*","AccessKey":"*","SecretKey":"***","FileNamePrefix":["mcu_record"]}
                     * @param _cloudStorage Third-Party Cloud Storage Account Information
(Note: Storing files in Object Storage COS will incur recording file delivery fees. For details, see [Cloud Recording Billing]. Storing in VOD does not incur this fee.)
Example:{"Vendor":0,"Region":"ap-shanghai","Bucket":"*","AccessKey":"*","SecretKey":"***","FileNamePrefix":["mcu_record"]}
                     * 
                     */
                    void SetCloudStorage(const CloudStorage& _cloudStorage);

                    /**
                     * 判断参数 CloudStorage 是否已赋值
                     * @return CloudStorage 是否已赋值
                     * 
                     */
                    bool CloudStorageHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud VOD Account Information
Example:{"McuTencentVod":{"ExpireTime":86400}}
                     * @return McuCloudVod Tencent Cloud VOD Account Information
Example:{"McuTencentVod":{"ExpireTime":86400}}
                     * 
                     */
                    McuCloudVod GetMcuCloudVod() const;

                    /**
                     * 设置Tencent Cloud VOD Account Information
Example:{"McuTencentVod":{"ExpireTime":86400}}
                     * @param _mcuCloudVod Tencent Cloud VOD Account Information
Example:{"McuTencentVod":{"ExpireTime":86400}}
                     * 
                     */
                    void SetMcuCloudVod(const McuCloudVod& _mcuCloudVod);

                    /**
                     * 判断参数 McuCloudVod 是否已赋值
                     * @return McuCloudVod 是否已赋值
                     * 
                     */
                    bool McuCloudVodHasBeenSet() const;

                private:

                    /**
                     * Third-Party Cloud Storage Account Information
(Note: Storing files in Object Storage COS will incur recording file delivery fees. For details, see [Cloud Recording Billing]. Storing in VOD does not incur this fee.)
Example:{"Vendor":0,"Region":"ap-shanghai","Bucket":"*","AccessKey":"*","SecretKey":"***","FileNamePrefix":["mcu_record"]}
                     */
                    CloudStorage m_cloudStorage;
                    bool m_cloudStorageHasBeenSet;

                    /**
                     * Tencent Cloud VOD Account Information
Example:{"McuTencentVod":{"ExpireTime":86400}}
                     */
                    McuCloudVod m_mcuCloudVod;
                    bool m_mcuCloudVodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUSTORAGEPARAMS_H_
