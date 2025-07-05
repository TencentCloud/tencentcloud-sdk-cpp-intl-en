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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATERUNTIMEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATERUNTIMEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifyMigrateRuntimeAttribute request structure.
                */
                class ModifyMigrateRuntimeAttributeRequest : public AbstractModel
                {
                public:
                    ModifyMigrateRuntimeAttributeRequest();
                    ~ModifyMigrateRuntimeAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Migration task id, for example: dts-2rgv0f09
                     * @return JobId Migration task id, for example: dts-2rgv0f09
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Migration task id, for example: dts-2rgv0f09
                     * @param _jobId Migration task id, for example: dts-2rgv0f09
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Attributes that need to be modified. This structure is designed as a generic structure to separate customized attributes for multiple businesses. <br>For instance, for Redis:<br>{<br>	 "Key": "DstWriteMode",	// Target database write mode<br> 	"Value": "normal"	          // clearData (clear target instance data), overwrite (perform task in overwrite manner), normal (follow normal procedure, no additional actions, this is the default value) <br>},<br>{<br/>	 "Key": "IsDstReadOnly",	// Whether to set target database as read-only during migration<br/> 	"Value": "true"	          // true (set as read-only), false (do not set as read-only) <br/>}
                     * @return OtherOptions Attributes that need to be modified. This structure is designed as a generic structure to separate customized attributes for multiple businesses. <br>For instance, for Redis:<br>{<br>	 "Key": "DstWriteMode",	// Target database write mode<br> 	"Value": "normal"	          // clearData (clear target instance data), overwrite (perform task in overwrite manner), normal (follow normal procedure, no additional actions, this is the default value) <br>},<br>{<br/>	 "Key": "IsDstReadOnly",	// Whether to set target database as read-only during migration<br/> 	"Value": "true"	          // true (set as read-only), false (do not set as read-only) <br/>}
                     * 
                     */
                    std::vector<KeyValuePairOption> GetOtherOptions() const;

                    /**
                     * 设置Attributes that need to be modified. This structure is designed as a generic structure to separate customized attributes for multiple businesses. <br>For instance, for Redis:<br>{<br>	 "Key": "DstWriteMode",	// Target database write mode<br> 	"Value": "normal"	          // clearData (clear target instance data), overwrite (perform task in overwrite manner), normal (follow normal procedure, no additional actions, this is the default value) <br>},<br>{<br/>	 "Key": "IsDstReadOnly",	// Whether to set target database as read-only during migration<br/> 	"Value": "true"	          // true (set as read-only), false (do not set as read-only) <br/>}
                     * @param _otherOptions Attributes that need to be modified. This structure is designed as a generic structure to separate customized attributes for multiple businesses. <br>For instance, for Redis:<br>{<br>	 "Key": "DstWriteMode",	// Target database write mode<br> 	"Value": "normal"	          // clearData (clear target instance data), overwrite (perform task in overwrite manner), normal (follow normal procedure, no additional actions, this is the default value) <br>},<br>{<br/>	 "Key": "IsDstReadOnly",	// Whether to set target database as read-only during migration<br/> 	"Value": "true"	          // true (set as read-only), false (do not set as read-only) <br/>}
                     * 
                     */
                    void SetOtherOptions(const std::vector<KeyValuePairOption>& _otherOptions);

                    /**
                     * 判断参数 OtherOptions 是否已赋值
                     * @return OtherOptions 是否已赋值
                     * 
                     */
                    bool OtherOptionsHasBeenSet() const;

                private:

                    /**
                     * Migration task id, for example: dts-2rgv0f09
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Attributes that need to be modified. This structure is designed as a generic structure to separate customized attributes for multiple businesses. <br>For instance, for Redis:<br>{<br>	 "Key": "DstWriteMode",	// Target database write mode<br> 	"Value": "normal"	          // clearData (clear target instance data), overwrite (perform task in overwrite manner), normal (follow normal procedure, no additional actions, this is the default value) <br>},<br>{<br/>	 "Key": "IsDstReadOnly",	// Whether to set target database as read-only during migration<br/> 	"Value": "true"	          // true (set as read-only), false (do not set as read-only) <br/>}
                     */
                    std::vector<KeyValuePairOption> m_otherOptions;
                    bool m_otherOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATERUNTIMEATTRIBUTEREQUEST_H_
